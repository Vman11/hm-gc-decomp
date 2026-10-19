#!/usr/bin/env python3
"""hx.py show <fn> [file]  — insert best/<fn>.c (or file) into its unit, compile, print asm diff; restore source.
   hx.py keep <fn> <file>  — same, but keep the code in the tree if it matches 100%.
   hx.py asm <fn>          — print the target assembly only."""
import json, os, re, shlex, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ins
S = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, S)
BEST = S + "/best" if os.path.isdir(S + "/best") else "/tmp/claude-1000/-home-mi-Decomp-hauntedmansion-ghye6s/d3210fda-7b08-4893-af30-3fda1dc100c2/scratchpad/best"
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
OBJDIFF = "/home/mi/.local/share/decompnet/toolchains/objdiff-cli/objdiff-cli"
WIBO = "/home/mi/.local/share/decompnet/toolchains/wibo/wibo"
MWCC = "/home/mi/.local/share/decompnet/toolchains/mwcc/{}/mwcceppc.exe"
cmd, fn = sys.argv[1], sys.argv[2]
SYM = os.environ.get("HX_SYM", fn)  # the symbol to judge (mangled name when the function is a ctor/dtor)
if os.environ.get("HX_UNIT"):
    bestcode = ""; unit = os.environ["HX_UNIT"]
elif os.path.exists(f"{BEST}/{fn}.c"):
    hdr, bestcode = open(f"{BEST}/{fn}.c").read().split("\n", 1)
    unit = hdr.split()[1]
else:  # not a saved near-miss: find the unit in cands_all.txt (size fn unit)
    bestcode = ""
    unit = next(l.split()[2] for l in open(S + "/cands_all.txt") if len(l.split()) > 2 and l.split()[1] == fn)
code = open(sys.argv[3]).read() if len(sys.argv) > 3 else bestcode
ADDR = {}
for line in open("config/GHYE6S/symbols.txt"):
    m = re.match(r"(\S+) = \.text:0x([0-9A-F]+);", line)
    if m: ADDR[m.group(1)] = int(m.group(2), 16)
bn = open("build.ninja").read().replace("$\n", "")
m = re.search(r"^build (build/GHYE6S/src/%s.o): mwcc\s+(\S+).*?\n((?:  .*\n)+)" % re.escape(unit), bn, re.M)
if not m:  # unit never registered: add it to configure.py (NonMatching C) like try_par does, then retry
    cfg = open("configure.py").read(); lines = cfg.split("\n")
    addr = int(unit.split("_")[-1], 16)
    start = next(i for i, l in enumerate(lines) if '"lib": "game"' in l)
    for i in range(start + 1, len(lines)):
        mm = re.search(r'"auto/text_([0-9A-F]{8})\.(?:c|cpp)"', lines[i])
        if (mm and int(mm.group(1), 16) > addr) or lines[i].strip() == "],":
            ind = lines[i][:len(lines[i]) - len(lines[i].lstrip())] if mm else lines[i - 1][:len(lines[i - 1]) - len(lines[i - 1].lstrip())]
            lines.insert(i, f'{ind}Object(NonMatching, "{unit}.c"),'); break
    open("configure.py", "w").write("\n".join(lines))
    if not os.path.exists(f"src/{unit}.c"):
        open(f"src/{unit}.c", "w").write('#include "common.h"\n')
    subprocess.run(["ninja", "build.ninja"], capture_output=True)
    bn = open("build.ninja").read().replace("$\n", "")
    m = re.search(r"^build (build/GHYE6S/src/%s.o): mwcc\s+(\S+).*?\n((?:  .*\n)+)" % re.escape(unit), bn, re.M)
    if not m: sys.exit("no build rule for " + unit)
src = m.group(2); var = dict(re.findall(r"^  (\w+) = (.*)$", m.group(3), re.M))
if os.environ.get("HX_MW"): var["mw_version"] = os.environ["HX_MW"]
obj = m.group(1)
path = src
cflags = shlex.split(var["cflags"])
# a C++ candidate in a .c unit: compile a temporary .cpp copy next to it (same object name)
tmp_cpp = None
if src.endswith(".c") and ('extern "C"' in code or "virtual" in code):
    tmp_cpp = src[:-2] + ".cpp"
    cflags = [("c++" if a == "c" else "on" if (a == "off" and cflags[i-1] == "-Cpp_exceptions") else "c++" if a == "-lang=c" else a) for i, a in enumerate(cflags)]
    cflags = ["-lang=c++" if a == "c++" else a for a in cflags]
    if os.environ.get("HX_EXC") == "off":
        cflags = [("off" if (a == "on" and cflags[i-1] == "-Cpp_exceptions") else a) for i, a in enumerate(cflags)]

def compile_unit(f=None):
    if os.path.exists(obj): os.remove(obj)
    c = [WIBO, MWCC.format(var["mw_version"])] + (cflags if f else shlex.split(var["cflags"])) + ["-c", f or src, "-o", var["basedir"]]
    r = subprocess.run(c, capture_output=True, text=True)
    return (r.returncode == 0 and os.path.exists(obj)), r.stdout + r.stderr

def diffjson():
    r = subprocess.run([OBJDIFF, "diff", "-p", ".", "-u", f"main/{unit}", "-o", "-", "--format", "json", SYM],
                       capture_output=True, text=True)
    return json.loads(r.stdout) if not r.returncode else None

def insts(d, side):
    for sy in d.get(side, {}).get("symbols", []):
        if sy.get("name") == SYM:
            return [i.get("instruction", {}).get("formatted", "") + ("  <" + i["instruction"]["branch_dest"] + ">" if False else "")
                    for i in sy.get("instructions", [])], sy.get("match_percent")
    return [], None

def fmt(d, side):
    out = []
    for sy in d.get(side, {}).get("symbols", []):
        if sy.get("name") != SYM: continue
        for i in sy.get("instructions", []):
            ins = i.get("instruction", {})
            s = ins.get("formatted", "")
            if "branch_dest" in ins: s += "  -> %x" % int(ins["branch_dest"])
            out.append((s, i.get("diff_kind", "")))
        return out, sy.get("match_percent")
    return [], None

orig = open(path).read()
if cmd == "asm":
    d = diffjson(); L, _ = fmt(d, "left")
    for k, (s, _) in enumerate(L): print("%4x  %s" % (k * 4, s))
    sys.exit()
code, orig = ins.merge(code, orig)
dm = re.search(r"^[^\n;]*\b(?:%s|%s)\s*\([^;{}]*\)\s*\{" % (fn, re.escape(SYM)), orig, re.M)
if dm:
    depth, k = 0, dm.end() - 1
    while k < len(orig):
        depth += orig[k] == "{"; depth -= orig[k] == "}"
        if depth == 0: break
        k += 1
    new = orig[:dm.start()] + code.strip("\n") + orig[k + 1:]
else:
    addr = ADDR.get(fn, 0); pos = len(orig)
    for mm in re.finditer(r"^[A-Za-z][^\n;]*\b(?:fn|dtor)_([0-9A-F]{8})\s*\([^;{]*\)\s*\{", orig, re.M):
        if int(mm.group(1), 16) > addr: pos = mm.start(); break
    new = orig[:pos].rstrip("\n") + "\n\n" + code.strip("\n") + "\n" + ("\n" + orig[pos:] if pos < len(orig) else "")
if tmp_cpp:
    # wrap the existing C of the unit in extern "C" like c2cpp does, then add the candidate
    c2w = {}
    exec(compile(open(S + "/c2cpp.py").read().split("cfg0, spl0 =")[0]
                 .replace("units = open(sys.argv[1]).read().split()", "units = []"), "c2cpp", "exec"), c2w)
    base = orig[:dm.start()] + orig[k + 1:] if dm else orig   # the unit without the old definition of this function
    wrapped = c2w["to_cpp_text"](base)
    if wrapped is None:
        lines = base.split("\n"); k = 0
        while k < len(lines) and (lines[k].startswith(("//", "#include", "/*")) or not lines[k].strip()): k += 1
        wrapped = "\n".join(lines[:k]) + '\n\nextern "C" {\n\n' + "\n".join(lines[k:]).rstrip("\n") + '\n\n} /* extern "C" */\n'
    new = wrapped.rstrip("\n") + "\n\n" + code.strip("\n") + "\n"
    open(tmp_cpp, "w").write(new)
    ok, log = compile_unit(tmp_cpp)
else:
    open(path, "w").write(new)
    ok, log = compile_unit()
def restore():
    if tmp_cpp: os.remove(tmp_cpp)
    else: open(path, "w").write(orig)
    compile_unit()
if not ok:
    restore(); print("COMPILE ERROR\n" + log[-3000:]); sys.exit(1)
d = diffjson()
if os.environ.get("HX_LAYOUT"):
    print("layout:", __import__("layout").layout_ok(obj, f"build/GHYE6S/obj/{unit}.o"))
    OBJDUMP_H = "/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump"
    for o in (obj, f"build/GHYE6S/obj/{unit}.o"):
        print("==", o); sys.stdout.flush()
        subprocess.run([OBJDUMP_H, "-s", "-j", "extab", "-j", "extabindex", "-j", ".data", "-j", ".rodata", o])
        subprocess.run([OBJDUMP_H, "-r", o]); sys.stdout.flush()
L, _ = fmt(d, "left"); R, pct = fmt(d, "right")
print(f"{fn} {unit} match {pct}%  target {len(L)} insns, ours {len(R)}")
n = max(len(L), len(R))
for k in range(n):
    a = L[k][0] if k < len(L) else ""; b = R[k][0] if k < len(R) else ""
    mark = " " if a == b else "*"
    if mark == "*" or any((L[j][0] if j < len(L) else "") != (R[j][0] if j < len(R) else "") for j in range(max(0, k - 2), min(n, k + 3))):
        print("%s %4x  %-44s | %s" % (mark, k * 4, a, b))
if pct == 100.0 and cmd == "keep":
    if tmp_cpp:
        os.remove(tmp_cpp)
        # convert the unit to C++/-Cpp_exceptions on (like c2cpp.py), then add the candidate and re-verify
        c2 = {}
        exec(compile(open(S + "/c2cpp.py").read().split("cfg0, spl0 =")[0]
                     .replace("units = open(sys.argv[1]).read().split()", "units = []"), "c2cpp", "exec"), c2)
        FLAG = 'extra_cflags=["-Cpp_exceptions on"]'; SPL = "config/GHYE6S/splits.txt"
        cfg0, spl0 = open("configure.py").read(), open(SPL).read()
        wrapped = c2["to_cpp_text"](base)
        if wrapped is None: print("unit not convertible to C++; candidate NOT kept"); sys.exit(1)
        p2 = src[:-2] + ".cpp"
        open(p2, "w").write(wrapped.rstrip("\n") + "\n\n" + code.strip("\n") + "\n"); os.remove(src)
        open("configure.py", "w").write(cfg0.replace(f'Object(NonMatching, "{unit}.c")', f'Object(NonMatching, "{unit}.cpp", {FLAG})'))
        open(SPL, "w").write(spl0.replace(f"\n{unit}.c:", f"\n{unit}.cpp:"))
        subprocess.run(["ninja", "build.ninja"], capture_output=True)
        if os.path.exists(obj): os.remove(obj)
        subprocess.run(["ninja", obj], capture_output=True)
        subprocess.run(["ninja", "-k", "0", "build/GHYE6S/report.json"], capture_output=True)
        rep = {u["name"][5:]: u for u in json.load(open("build/GHYE6S/report.json"))["units"]}
        fs = rep.get(unit, {}).get("functions", [])
        good = fs and os.path.exists(obj) and all(f.get("fuzzy_match_percent") == 100.0 for f in fs) \
            and __import__("layout").layout_ok(obj, f"build/GHYE6S/obj/{unit}.o")[0]
        if good:
            print("KEPT in", p2, "(unit now C++, all functions 100%, layout == original)")
        else:
            os.remove(p2); open(src, "w").write(orig)
            open("configure.py", "w").write(cfg0); open(SPL, "w").write(spl0)
            subprocess.run(["ninja", "build.ninja"], capture_output=True); compile_unit()
            print("unit does not verify as C++ (functions: %s); candidate NOT kept" %
                  ", ".join("%s=%s" % (f["name"], f.get("fuzzy_match_percent")) for f in fs))
    else:
        print("KEPT in", path)
else:
    restore()
