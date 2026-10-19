#!/usr/bin/env python3
"""padfix.py <out.json>: for every near-miss in best/ whose virtual calls are made on (expr + 0xOFF) cast to a
VCall struct, rewrite them as calls on expr itself with `char pad[0xOFF]` in the struct (vptr at offset OFF)."""
import glob, json, os, re, sys
S = os.path.dirname(os.path.abspath(__file__))
BEST = S + "/best" if os.path.isdir(S + "/best") else "/tmp/claude-1000/-home-mi-Decomp-hauntedmansion-ghye6s/d3210fda-7b08-4893-af30-3fda1dc100c2/scratchpad/best"
CAST = re.compile(r"\(\((VCall_\w+) \*\)\(\((?:s32|u32|int) \*\)\((\w+) \+ (0x[0-9a-fA-F]+)\)\)\)->")
jobs = []
for f in sorted(glob.glob(BEST + "/*.c")):
    hdr, code = open(f).read().split("\n", 1)
    _, unit, fn, pct = hdr.split()
    offs = {}
    ok = True
    for m in CAST.finditer(code):
        offs.setdefault(m.group(1), set()).add(int(m.group(3), 16))
    if not offs: continue
    if any(len(v) != 1 for v in offs.values()): continue
    new = CAST.sub(lambda m: "((%s *)(%s))->" % (m.group(1), m.group(2)), code)
    for name, v in offs.items():
        off = next(iter(v))
        dm = re.search(r"struct %s \{ (char vptr_pad\[(0x[0-9a-fA-F]+)\]; )?" % name, new)
        if not dm: ok = False; break
        base = int(dm.group(2), 16) if dm.group(2) else 0
        new = new[:dm.start()] + "struct %s { char vptr_pad[0x%x]; " % (name, base + off) + new[dm.end():]
    if not ok: continue
    alt2 = new.replace("(int)(param_1)", "param_1")
    jobs.append(dict(unit=unit, fn=fn, code=new, cpp=True, alts=[alt2] if alt2 != new else []))
json.dump(jobs, open(sys.argv[1], "w"))
print(len(jobs), "jobs")
