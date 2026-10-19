#!/usr/bin/env python3
"""restore.py <units.txt>: put units back to their pre-bulk source, configure entry and split name."""
import os, re, shutil, sys
S = os.path.dirname(os.path.abspath(__file__))
os.chdir("/home/mi/Decomp/hauntedmansion-ghye6s")
cfg, spl = open("configure.py").read(), open("config/GHYE6S/splits.txt").read()
cfg0 = open(S + "/configure.pre_link2.py").read()
n = 0
for u in open(sys.argv[1]).read().split():
    for ext in ("c", "cpp"):
        if os.path.exists(f"src/{u}.{ext}"): os.remove(f"src/{u}.{ext}")
    ext = "c" if os.path.exists(f"{S}/pre_bulk/src/{u}.c") else "cpp"
    shutil.copy(f"{S}/pre_bulk/src/{u}.{ext}", f"src/{u}.{ext}")
    old = re.search(r'Object\(\w+, "%s\.(?:c|cpp)"[^)]*\)' % re.escape(u), cfg0).group(0)
    cfg = re.sub(r'Object\(\w+, "%s\.(?:c|cpp)"[^)]*\)' % re.escape(u), old, cfg)
    spl = re.sub(r"\n%s\.(?:c|cpp):" % re.escape(u), f"\n{u}.{ext}:", spl)
    o = f"build/GHYE6S/src/{u}.o"
    if os.path.exists(o): os.remove(o)
    n += 1
open("configure.py", "w").write(cfg); open("config/GHYE6S/splits.txt", "w").write(spl)
print("restored", n)
