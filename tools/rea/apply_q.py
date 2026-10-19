#!/usr/bin/env python3
"""apply_q.py fn=path[.c|.cpp] ...: write locally verified candidates into their (unregistered or NonMatching) units.
.c -> registered Object(NonMatching, unit.c); .cpp -> unit renamed to .cpp with -Cpp_exceptions on (splits too).
Suffix an arg with +lmw (fn=path.cpp+lmw) to also give the unit -use_lmw_stmw on.
Run ninja + finalize.py afterwards (finalize re-verifies everything from a clean build and links what holds)."""
import os, re, sys
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
SPL = "config/GHYE6S/splits.txt"
FLAG = 'extra_cflags=["-Cpp_exceptions on"]'
cfg = open("configure.py").read(); spl = open(SPL).read()
LMW = 'extra_cflags=["-Cpp_exceptions on", "-use_lmw_stmw on"]'
def register(unit, ext, FLAG=FLAG):
    global cfg
    if FLAG == LMW and f'"{unit}.cpp", extra_cflags=["-Cpp_exceptions on"])' in cfg:
        cfg = cfg.replace(f'"{unit}.cpp", extra_cflags=["-Cpp_exceptions on"])', f'"{unit}.cpp", {LMW})'); return
    if f'"{unit}.c"' in cfg or f'"{unit}.cpp"' in cfg: return
    addr = int(unit.split("_")[-1], 16)
    lines = cfg.split("\n"); start = None
    entry = f'Object(NonMatching, "{unit}{ext}"' + (f", {FLAG})" if ext == ".cpp" else ")") + ","
    for i, l in enumerate(lines):
        if '"lib": "game"' in l: start = i
        if start is not None and i > start and "Object(" in l:
            m = re.search(r'"auto/text_([0-9A-F]{8})\.(?:c|cpp)"', l)
            if m and int(m.group(1), 16) > addr:
                lines.insert(i, l[:len(l) - len(l.lstrip())] + entry); cfg = "\n".join(lines); return
    raise SystemExit("could not place " + unit)
for arg in sys.argv[1:]:
    fn, path = arg.split("=", 1)
    lmw = path.endswith("+lmw"); path = path[:-4] if lmw else path
    code = open(path).read().strip("\n") + "\n"
    ext = ".cpp" if path.endswith(".cpp") else ".c"
    unit = "auto/text_" + re.search(r"([0-9A-F]{8})(?:F\w*)?$", fn).group(1) if not fn.startswith("auto/") else fn
    c, cp = f"src/{unit}.c", f"src/{unit}.cpp"
    cur = open(cp).read() if os.path.exists(cp) else open(c).read()
    if ext == ".cpp":
        if os.path.exists(c):
            lines = cur.split("\n"); k = 0
            while k < len(lines) and (lines[k].startswith(("//", "#include", "/*")) or not lines[k].strip()): k += 1
            head = "\n".join(lines[:k]).rstrip("\n"); body = "\n".join(lines[k:]).strip("\n")
            cur = head + '\n\nextern "C" {\n\n' + (body + "\n\n" if body else "") + '} /* extern "C" */\n'
            os.remove(c)
            spl = spl.replace(f"\n{unit}.c:", f"\n{unit}.cpp:")
            cfg = cfg.replace(f'Object(NonMatching, "{unit}.c")', f'Object(NonMatching, "{unit}.cpp", {LMW if lmw else FLAG})')
        cur = cur.replace('} /* extern "C" */', code + '\n} /* extern "C" */', 1)
        open(cp, "w").write(cur)
    else:
        open(c, "w").write(cur.rstrip("\n") + "\n\n" + code)
    register(unit, ext, LMW if lmw else FLAG)
    print("applied", fn, unit + ext)
open("configure.py", "w").write(cfg); open(SPL, "w").write(spl)
