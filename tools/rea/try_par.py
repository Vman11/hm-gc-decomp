#!/usr/bin/env python3
"""try_par.py jobs.json: like try.py, but units are processed in parallel (8 workers).
All new units are registered in configure.py first (one regeneration); each worker then compiles its own
unit with the exact mwcc command from build.ninja and judges with objdiff-cli. C++ jobs (which rename
splits) are handed to try.py afterwards, serially."""
import json, os, re, shlex, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ins
from concurrent.futures import ThreadPoolExecutor

S = os.path.dirname(os.path.abspath(__file__))
JOBS = os.path.abspath(sys.argv[1])
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
OBJDIFF = "/home/mi/.local/share/decompnet/toolchains/objdiff-cli/objdiff-cli"
WIBO = "/home/mi/.local/share/decompnet/toolchains/wibo/wibo"
MWCC = "/home/mi/.local/share/decompnet/toolchains/mwcc/{}/mwcceppc.exe"
jobs = json.load(open(JOBS))
ADDR = {}
for line in open("config/GHYE6S/symbols.txt"):
    m = re.match(r"(\S+) = \.text:0x([0-9A-F]+);", line)
    if m: ADDR[m.group(1)] = int(m.group(2), 16)

plain = [j for j in jobs if not j.get("cpp")]
cppjobs = [j for j in jobs if j.get("cpp")]

# 1. register every new unit at once
cfg = open("configure.py").read()
lines = cfg.split("\n")
new_units = sorted({j["unit"] for j in plain if f'"{j["unit"]}.c"' not in cfg and f'"{j["unit"]}.cpp"' not in cfg},
                   key=lambda u: int(re.search(r"([0-9A-F]{8})$", u).group(1), 16) if re.search(r"([0-9A-F]{8})$", u) else 0)
start = next(i for i, l in enumerate(lines) if '"lib": "game"' in l)
for u in new_units:
    addr = int(u.split("_")[-1], 16)
    for i in range(start + 1, len(lines)):
        m = re.search(r'"auto/text_([0-9A-F]{8})\.(?:c|cpp)"', lines[i])
        if (m and int(m.group(1), 16) > addr) or lines[i].strip() == "],":
            ind = lines[i][:len(lines[i]) - len(lines[i].lstrip())] if m else lines[i - 1][:len(lines[i - 1]) - len(lines[i - 1].lstrip())]
            lines.insert(i, f'{ind}Object(NonMatching, "{u}.c"),'); break
open("configure.py", "w").write("\n".join(lines))
subprocess.run(["ninja", "build.ninja"], capture_output=True)

# 2. compile commands per object, from build.ninja
bn = open("build.ninja").read().replace("$\n", "")
CMD = {}
for m in re.finditer(r"^build (build/GHYE6S/src/(auto/text_[0-9A-F]+).o): mwcc\s+(\S+).*?\n((?:  .*\n)+)", bn, re.M):
    var = dict(re.findall(r"^  (\w+) = (.*)$", m.group(4), re.M))
    CMD[m.group(2)] = (m.group(3), var)


def compile_unit(u):
    src, var = CMD[u]
    obj = f"build/GHYE6S/src/{u}.o"
    if os.path.exists(obj): os.remove(obj)
    cmd = [WIBO, MWCC.format(var["mw_version"])] + shlex.split(var["cflags"]) + ["-c", src, "-o", var["basedir"]]
    r = subprocess.run(cmd, capture_output=True, text=True)
    return r.returncode == 0 and os.path.exists(obj)


def diff(u, fn):
    r = subprocess.run([OBJDIFF, "diff", "-p", ".", "-u", f"main/{u}", "-o", "-", "--format", "json", fn],
                       capture_output=True, text=True)
    if r.returncode: return None
    d = json.loads(r.stdout)
    for s in d.get("right", {}).get("symbols", []):
        if s.get("name") == fn: return s.get("match_percent")
    return None


def frames(u, fn):
    """(original frame size, our frame size) from the stwu r1 in each version."""
    r = subprocess.run([OBJDIFF, "diff", "-p", ".", "-u", f"main/{u}", "-o", "-", "--format", "json", fn],
                       capture_output=True, text=True)
    if r.returncode: return None
    d = json.loads(r.stdout); out = []
    for side in ("left", "right"):
        sz = None
        for sy in d.get(side, {}).get("symbols", []):
            if sy.get("name") == fn:
                for ins in sy.get("instructions", [])[:3]:
                    m = re.match(r"stwu r1, -0x([0-9a-f]+)\(r1\)", ins.get("instruction", {}).get("formatted", ""))
                    if m: sz = int(m.group(1), 16)
        out.append(sz)
    return tuple(out)


def refine(code, delta):
    """Second-pass variants: shrink one stack array by the frame excess; swap pairs of local declarations."""
    out = []
    for m in re.finditer(r"^(    [\w ]+? (?:auStack|local)_\w+ ?\[)(\d+)(\];)$", code, re.M):
        n = int(m.group(2)); esz = 1 if "u8 " in m.group(1) else 4
        for d in {delta, delta - 4, delta + 4}:
            k = n - d // esz
            if 0 < k < n:
                out.append(code[:m.start()] + m.group(1) + str(k) + m.group(3) + code[m.end():])
    decl = [m for m in re.finditer(r"^    [\w ]+?\*? *(?:local|auStack)_\w+(?: ?\[\d+\])?;$", code, re.M)]
    if 2 <= len(decl) <= 6:
        for i in range(len(decl)):
            for k in range(i + 1, len(decl)):
                a, b = decl[i], decl[k]
                out.append(code[:a.start()] + b.group(0) + code[a.end():b.start()] + a.group(0) + code[b.end():])
    return out


def work(u, ujobs):
    ok, bad = [], []
    path = f"src/{u}.cpp" if os.path.exists(f"src/{u}.cpp") else f"src/{u}.c"
    if u not in CMD or not os.path.exists(path):
        return ok, [(j["fn"], "no build rule") for j in ujobs]
    for j in sorted(ujobs, key=lambda j: ADDR.get(j["fn"], 0)):
        orig0 = open(path).read()
        _, orig = ins.merge(j["code"], orig0)   # unit without prototypes that conflict with the candidate's
        sym = j.get("sym", j["fn"])
        dm = re.search(r"^[^\n;]*\b(?:%s|%s)\s*\([^;{}]*\)\s*\{" % (j["fn"], re.escape(sym)), orig, re.M)
        cut = None
        if dm:
            if not j.get("replace"):
                bad.append((j["fn"], "already defined")); continue
            depth, k = 0, dm.end() - 1
            while k < len(orig):
                depth += orig[k] == "{"; depth -= orig[k] == "}"
                if depth == 0: break
                k += 1
            cut = (dm.start(), k + 1)
        addr = ADDR.get(j["fn"], 0)
        pos = len(orig)
        for m in re.finditer(r"^[A-Za-z][^\n;]*\bfn_([0-9A-F]{8})\s*\([^;{]*\)\s*\{", orig, re.M):
            if int(m.group(1), 16) > addr:
                pos = m.start(); break
        best = None; top = (-1, None)
        for code in [j["code"]] + j.get("alts", []):
            code = ins.dedup(code, orig)
            if cut:
                new = orig[:cut[0]] + code.strip("\n") + orig[cut[1]:]
            else:
                new = orig[:pos].rstrip("\n") + "\n\n" + code.strip("\n") + "\n" + ("\n" + orig[pos:] if pos < len(orig) else "")
            open(path, "w").write(new)
            if compile_unit(u):
                p = diff(u, sym)
                if p == 100.0:
                    best = "ok"; break
                if p is not None and p > top[0]: top = (p, code)
                best = best or ("match: %s" % p)
            else:
                best = best or "compile error"
                if os.environ.get("TRY_DUMP"):
                    import shutil; shutil.copy(path, os.path.join(os.environ["TRY_DUMP"], "fail_%s.cpp" % j["fn"]))
        if best != "ok" and top[1] and top[0] >= 97:
            open(path, "w").write(orig[:cut[0]] + top[1].strip("\n") + orig[cut[1]:] if cut else
                                  orig[:pos].rstrip("\n") + "\n\n" + top[1].strip("\n") + "\n" + ("\n" + orig[pos:] if pos < len(orig) else ""))
            fr = frames(u, j["fn"]) if compile_unit(u) else None
            delta = (fr[1] - fr[0]) if fr and None not in fr else 0
            for code in refine(top[1], delta)[:40]:
                new = (orig[:cut[0]] + code.strip("\n") + orig[cut[1]:]) if cut else \
                    orig[:pos].rstrip("\n") + "\n\n" + code.strip("\n") + "\n" + ("\n" + orig[pos:] if pos < len(orig) else "")
                open(path, "w").write(new)
                if compile_unit(u) and diff(u, sym) == 100.0:
                    best = "ok"; break
        if best == "ok":
            ok.append(j["fn"])
        else:
            open(path, "w").write(orig0); bad.append((j["fn"], "match: %s" % top[0] if top[1] else best))
            if top[1] and top[0] >= 95:
                os.makedirs(S + "/best", exist_ok=True)
                open(S + "/best/%s.c" % j["fn"], "w").write("// %s %s %.4f\n" % (u, j["fn"], top[0]) + top[1])
    compile_unit(u)
    return ok, bad


by_unit = {}
for j in plain: by_unit.setdefault(j["unit"], []).append(j)
oks, bads = [], []
with ThreadPoolExecutor(8) as ex:
    for ok, bad in ex.map(lambda kv: work(*kv), by_unit.items()):
        oks += ok; bads += bad
# 3. C++ jobs: convert all their units in one pass (one re-split), work in parallel, revert in one pass
if cppjobs:
    src_c2cpp = open(S + "/c2cpp.py").read().split("cfg0, spl0 =")[0]
    c2 = {}; exec(compile(src_c2cpp.replace('units = open(sys.argv[1]).read().split()', 'units = []'), "c2cpp", "exec"), c2)
    FLAG = 'extra_cflags=["-Cpp_exceptions on"]'
    SPL = "config/GHYE6S/splits.txt"
    cfg, spl = open("configure.py").read(), open(SPL).read()
    cfg_snap, spl_snap = cfg, spl
    units_c = sorted({j["unit"] for j in cppjobs})
    before, converted = {}, {}
    for u in units_c:
        if f'"{u}.c"' not in cfg and f'"{u}.cpp"' not in cfg:
            addr = int(u.split("_")[-1], 16)
            ls = cfg.split("\n"); st = next(i for i, l in enumerate(ls) if '"lib": "game"' in l)
            for i in range(st + 1, len(ls)):
                m = re.search(r'"auto/text_([0-9A-F]{8})\.(?:c|cpp)"', ls[i])
                if (m and int(m.group(1), 16) > addr) or ls[i].strip() == "],":
                    ind = ls[i - 1][:len(ls[i - 1]) - len(ls[i - 1].lstrip())]
                    ls.insert(i, f'{ind}Object(NonMatching, "{u}.c"),'); break
            cfg = "\n".join(ls)
        c, cp = f"src/{u}.c", f"src/{u}.cpp"
        if os.path.exists(c):
            txt = open(c).read(); new = c2["to_cpp_text"](txt)
            if new is None: continue
            converted[u] = ("c", txt)
            open(cp, "w").write(new); os.remove(c)
            cfg = cfg.replace(f'Object(NonMatching, "{u}.c")', f'Object(NonMatching, "{u}.cpp", {FLAG})')
            spl = spl.replace(f"\n{u}.c:", f"\n{u}.cpp:")
        elif os.path.exists(cp) and f'"{u}.cpp", {FLAG}' not in cfg:
            converted[u] = ("cpp", None)
            cfg = cfg.replace(f'Object(NonMatching, "{u}.cpp")', f'Object(NonMatching, "{u}.cpp", {FLAG})')
    rep0 = {x["name"][5:]: x for x in json.load(open("build/GHYE6S/report.json"))["units"]}
    for u in converted:
        before[u] = [f["name"] for f in rep0.get(u, {}).get("functions", []) if f.get("fuzzy_match_percent") == 100.0]
    open("configure.py", "w").write(cfg); open(SPL, "w").write(spl)
    subprocess.run(["ninja", "build.ninja"], capture_output=True)
    bn = open("build.ninja").read().replace("$\n", "")
    for m in re.finditer(r"^build (build/GHYE6S/src/(auto/text_[0-9A-F]+).o): mwcc\s+(\S+).*?\n((?:  .*\n)+)", bn, re.M):
        CMD[m.group(2)] = (m.group(3), dict(re.findall(r"^  (\w+) = (.*)$", m.group(4), re.M)))
    cby = {}
    for j in cppjobs: cby.setdefault(j["unit"], []).append(j)
    results = {}
    with ThreadPoolExecutor(8) as ex:
        for u, (ok, bad) in zip(cby, ex.map(lambda kv: work(*kv), cby.items())):
            results[u] = ok; oks += ok; bads += bad
    # revert converted units that gained nothing or lost an earlier match
    cfg, spl = open("configure.py").read(), open(SPL).read()
    for u, (kind, txt) in converted.items():
        regressed = any(diff(u, f) != 100.0 for f in before.get(u, []))
        if results.get(u) and not regressed: continue
        for f in results.get(u, []): oks.remove(f); bads.append((f, "reverted with its unit"))
        if kind == "c":
            os.remove(f"src/{u}.cpp"); open(f"src/{u}.c", "w").write(txt)
            cfg = cfg.replace(f'Object(NonMatching, "{u}.cpp", {FLAG})', f'Object(NonMatching, "{u}.c")')
            spl = spl.replace(f"\n{u}.cpp:", f"\n{u}.c:")
        else:
            cfg = cfg.replace(f'Object(NonMatching, "{u}.cpp", {FLAG})', f'Object(NonMatching, "{u}.cpp")')
    open("configure.py", "w").write(cfg); open(SPL, "w").write(spl)
    subprocess.run(["ninja", "build.ninja"], capture_output=True)
subprocess.run(["ninja", "-k", "0"], capture_output=True)
print("MATCHED", len(oks), oks)
for b in bads: print("FAILED", *b)
