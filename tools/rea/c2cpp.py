#!/usr/bin/env python3
"""c2cpp.py <units.txt> <ok_out.txt>: convert units to C++ built with -Cpp_exceptions on (as the game was), in bulk.
A unit is kept only if every function still matches 100% and its section layout equals the original object's;
everything else is reverted. Prints a summary."""
import json, os, re, subprocess, sys

ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
OD = "/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump"
SPL = "config/GHYE6S/splits.txt"
FLAG = 'extra_cflags=["-Cpp_exceptions on"]'
units = open(sys.argv[1]).read().split()


def match_paren(s, i):
    depth = 0
    for k in range(i, len(s)):
        if s[k] == "(": depth += 1
        elif s[k] == ")":
            depth -= 1
            if depth == 0: return k
    return -1


def split_args(a):
    out, depth, cur = [], 0, ""
    for ch in a:
        if ch == "," and depth == 0:
            out.append(cur.strip()); cur = ""; continue
        depth += ch == "("; depth -= ch == ")"
        cur += ch
    if cur.strip(): out.append(cur.strip())
    return out


def floaty(arg, text):
    if re.search(r"\d\.\d*f?\b|\(f32\)|\(f64\)|\*\(f32 \*\)|\*\(f64 \*\)", arg):
        return "f64" if re.search(r"\(f64\)|\*\(f64 \*\)", arg) else "f32"
    m = re.fullmatch(r"\(?\s*(\w+)\s*\)?", arg)
    if m:
        d = re.search(r"\b(f32|f64)\s+%s\b" % m.group(1), text)
        if d: return d.group(1)
    return None


def to_cpp_text(src):
    """C source -> C++ (extern "C") with exact prototypes for unprototyped declarations."""
    decl_re = re.compile(r"^((?:extern )?[\w ]*?\w[\w \*]*?\**)\s*\b(\w+)\(\);$", re.M)
    names = {}
    for m in decl_re.finditer(src):
        names.setdefault(m.group(2), m.group(1).strip())
    for c, rt in names.items():
        pos, sig = 0, None
        while True:
            m = re.search(r"(?<![\w.])%s\s*\(" % re.escape(c), src[pos:])
            if not m: break
            i = pos + m.end() - 1
            # skip declarations themselves
            line_start = src.rfind("\n", 0, i) + 1
            if decl_re.match(src[line_start:src.find("\n", i) if src.find("\n", i) > 0 else len(src)]):
                pos = i + 1; continue
            e = match_paren(src, i)
            if e < 0: return None
            args = split_args(src[i + 1:e])
            pt = tuple(floaty(a, src) or "int" for a in args)
            if sig is not None and sig != pt: return None
            sig = pt
            new = "(" + ", ".join(a if t != "int" else "(int)(%s)" % a for a, t in zip(args, pt)) + ")"
            src = src[:i] + new + src[e + 1:]
            pos = i + len(new)
        proto = "%s %s(%s);" % (rt, c, ", ".join(sig) if sig else "void")
        src = re.sub(r"^(?:extern )?[\w ]*?\w[\w \*]*?\**\s*\b%s\(\);$" % re.escape(c), proto, src, flags=re.M)
    src = re.sub(r"\(void \*\)(lbl_\w+)", r"\1", src)
    lines = src.split("\n"); k = 0
    while k < len(lines) and (lines[k].startswith(("//", "#include", "/*")) or not lines[k].strip()):
        k += 1
    body = "\n".join(lines[k:]).rstrip("\n")
    return "\n".join(lines[:k]).rstrip("\n") + '\n\nextern "C" {\n\n' + body + '\n\n} /* extern "C" */\n'


def secs(p):
    out = subprocess.run([OD, "-h", p], capture_output=True, text=True).stdout
    r = {}
    for l in out.splitlines():
        m = re.match(r"\s*\d+\s+(\S+)\s+([0-9a-f]+)", l)
        if m and m.group(1) not in (".comment", ".mwcats.text", ".note.split") and int(m.group(2), 16):
            r[m.group(1)] = int(m.group(2), 16)
    return r


def report():
    subprocess.run(["ninja", "build/GHYE6S/report.json"], capture_output=True)
    d = json.load(open("build/GHYE6S/report.json"))
    return {u["name"][5:]: u for u in d["units"]}


cfg0, spl0 = open("configure.py").read(), open(SPL).read()
cfg, spl = cfg0, spl0
backup, converted, skipped = {}, [], []
for u in units:
    c, cpp = f"src/{u}.c", f"src/{u}.cpp"
    if os.path.exists(c):
        src = open(c).read()
        new = to_cpp_text(src)
        if new is None:
            skipped.append(u); continue
        backup[u] = ("c", src)
        open(cpp, "w").write(new); os.remove(c)
        cfg = cfg.replace(f'Object(NonMatching, "{u}.c")', f'Object(NonMatching, "{u}.cpp", {FLAG})')
        spl = spl.replace(f"\n{u}.c:", f"\n{u}.cpp:")
    elif os.path.exists(cpp):
        backup[u] = ("cpp", None)
        cfg = cfg.replace(f'Object(NonMatching, "{u}.cpp")', f'Object(NonMatching, "{u}.cpp", {FLAG})')
    else:
        skipped.append(u); continue
    converted.append(u)
open("configure.py", "w").write(cfg); open(SPL, "w").write(spl)
subprocess.run(["ninja", "build.ninja"], capture_output=True)
built = set()
for u in converted:
    obj = f"build/GHYE6S/src/{u}.o"
    if os.path.exists(obj): os.remove(obj)  # a stale C object must never pass the check
    if subprocess.run(["ninja", obj], capture_output=True).returncode == 0:
        built.add(u)
subprocess.run(["ninja", "-k", "0", "build/GHYE6S/report.json"], capture_output=True)
rep = {u["name"][5:]: u for u in json.load(open("build/GHYE6S/report.json"))["units"]}
good, bad = [], []
for u in converted:
    r = rep.get(u)
    fs = r.get("functions", []) if r else []
    obj = f"build/GHYE6S/src/{u}.o"
    if (u in built and fs and os.path.exists(obj) and all(f.get("fuzzy_match_percent") == 100.0 for f in fs)
            and secs(obj) == secs(f"build/GHYE6S/obj/{u}.o")):
        good.append(u)
    else:
        bad.append(u)
# revert failures
cfg, spl = open("configure.py").read(), open(SPL).read()
for u in bad:
    kind, src = backup[u]
    if kind == "c":
        os.remove(f"src/{u}.cpp"); open(f"src/{u}.c", "w").write(src)
        cfg = cfg.replace(f'Object(NonMatching, "{u}.cpp", {FLAG})', f'Object(NonMatching, "{u}.c")')
        spl = spl.replace(f"\n{u}.cpp:", f"\n{u}.c:")
    else:
        cfg = cfg.replace(f'Object(NonMatching, "{u}.cpp", {FLAG})', f'Object(NonMatching, "{u}.cpp")')
open("configure.py", "w").write(cfg); open(SPL, "w").write(spl)
subprocess.run(["ninja", "build/GHYE6S/report.json"], capture_output=True)
open(sys.argv[2], "w").write("\n".join(good))
print(f"converted {len(converted)}, layout+functions verified {len(good)}, reverted {len(bad)}, not convertible {len(skipped)}")
