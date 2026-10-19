#!/usr/bin/env python3
"""sdkprep.py <jobs_sdk.json>: prepare the tree for SDK reference jobs: reference include dirs in cflags_base,
each job's unit registered with the SDK compiler (GC/1.2.5n) and -char unsigned, and our function symbols
renamed to the reference names (pending → apply + re-split)."""
import json, os, re, subprocess, sys
S = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, S)
import cxx
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
jobs = json.load(open(sys.argv[1]))
cfg = open("configure.py").read()
INC = '    "-i tools/rea/ref/dolsdk2004/include",\n    "-i tools/rea/ref/dolsdk2004/include/libc",\n'
if "ref/dolsdk2004/include" not in cfg:
    cfg = cfg.replace('    "-i include",\n', '    "-i include",\n' + INC, 1)
lines = cfg.split("\n")
def _addr(u):
    m = re.search(r"text_([0-9A-F]{8})$", u); return int(m.group(1), 16) if m else 0
for u in sorted({j["unit"] for j in jobs}, key=_addr):
    if not re.search(r"text_[0-9A-F]{8}$", u): continue
    ent = 'Object(NonMatching, "%s.c")' % u
    new = 'Object(NonMatching, "%s.c")' % u
    if ent in cfg:
        cfg = cfg.replace(ent, new)
    elif ('"%s.c"' % u) not in cfg and ('"%s.cpp"' % u) not in cfg:
        addr = _addr(u)
        ls = cfg.split("\n"); st = next(i for i, l in enumerate(ls) if '"lib": "game"' in l)
        for i in range(st + 1, len(ls)):
            m = re.search(r'"auto/text_([0-9A-F]{8})\.(?:c|cpp)"', ls[i])
            if (m and int(m.group(1), 16) > addr) or ls[i].strip() == "],":
                ind = ls[i - 1][:len(ls[i - 1]) - len(ls[i - 1].lstrip())]
                ls.insert(i, f"{ind}{new},"); break
        cfg = "\n".join(ls)
        if not os.path.exists(f"src/{u}.c"): open(f"src/{u}.c", "w").write('#include "common.h"\n')
open("configure.py", "w").write(cfg)
n = 0
for j in jobs:
    if j.get("rename") and cxx.pending_rename(*j["rename"]): n += 1
print("renames queued:", n)
subprocess.run(["python3", S + "/cxx.py", "apply"])
subprocess.run(["ninja", "build.ninja"], capture_output=True)
print("prepared", len({j["unit"] for j in jobs}), "units")
