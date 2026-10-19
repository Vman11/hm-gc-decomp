#!/usr/bin/env python3
"""loopfix.py <out.json>: for near-misses with `off = 0; for (i = 0; ...)` loops, generate the register-order
variants MWCC distinguishes: declaration order of offset/counter (x) initialisation order (counter first)."""
import glob, itertools, json, os, re, sys
S = os.path.dirname(os.path.abspath(__file__)); BEST = S + "/best"
LOOP = re.compile(r"(\s+)(\w+) = (0|\w+);\n(\s+)for \((\w+) = 0; ")
def decl_swap(c, a, b):
    da = re.search(r"^    ([\w ]+?) %s;$" % a, c, re.M); db = re.search(r"^    ([\w ]+?) %s;$" % b, c, re.M)
    if not da or not db: return None
    first, second = (da, db) if da.start() < db.start() else (db, da)
    return c[:first.start()] + second.group(0) + c[first.end():second.start()] + first.group(0) + c[second.end():]
def init_swap(c):
    c2 = LOOP.sub(lambda m: "%s%s = 0;%s%s = %s;\n%sfor (; " % (m.group(1), m.group(5), m.group(1), m.group(2), m.group(3), m.group(4)), c)
    return c2 if c2 != c else None
jobs = []
for f in sorted(glob.glob(BEST + "/*.c")):
    hdr, code = open(f).read().split("\n", 1)
    _, unit, fn, pct = hdr.split()
    loops = LOOP.findall(code)
    if not loops: continue
    pairs = {(m[1], m[4]) for m in loops}
    variants = []
    bases = [code]
    for off, cnt in pairs:
        sw = decl_swap(code, off, cnt)
        if sw: bases.append(sw)
    for b in list(bases):
        i2 = init_swap(b)
        if i2: bases.append(i2)
    for b in bases[1:]:
        variants.append(b)
        bu = b.replace("s32 ", "u32 ")
        if bu != b: variants.append(bu)
    if not variants: continue
    jobs.append(dict(unit=unit, fn=fn, code=variants[0], cpp=('extern "C"' in code or "virtual" in code), alts=variants[1:]))
json.dump(jobs, open(sys.argv[1], "w"))
print(len(jobs), "jobs,", sum(1 + len(j["alts"]) for j in jobs), "candidates")
