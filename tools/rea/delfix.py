#!/usr/bin/env python3
"""delfix.py <out.json>: `if (E != 0) { call(E...); ... }` where the call is a destructor/delete-style call gets the
null test repeated around the call (C++ `delete p` emits its own check: beq; beq). One alternate per such site,
plus one with every site wrapped."""
import glob, json, os, re, sys
S = os.path.dirname(os.path.abspath(__file__)); BEST = S + "/best"
PAT = re.compile(r"^(\s+)if \(([^\n]*?) != (?:0|NULL|\(\w+ \*\)0x0)\) \{\n(\s+)((?:\(\(VCall_\w+ \*\)\([^\n]*\)\)->m|dtor_[0-9A-F]+|fn_[0-9A-F]+)\(([^\n]*)\);)\n", re.M)
def wrap(code, m):
    ind, E, ind2, call = m.group(1), m.group(2), m.group(3), m.group(4)
    if E not in call: return None
    return code[:m.start()] + "%sif (%s != 0) {\n%sif (%s != 0) {\n%s    %s\n%s}\n" % (ind, E, ind2, E, ind2, call, ind2) + code[m.end():]
jobs = []
for f in sorted(glob.glob(BEST + "/*.c")):
    hdr, code = open(f).read().split("\n", 1)
    _, unit, fn, pct = hdr.split()
    sites = [m for m in PAT.finditer(code) if m.group(2) in m.group(4)]
    if not sites: continue
    alts = []
    for m in sites:
        w = wrap(code, m)
        if w: alts.append(w)
    if len(sites) > 1:
        c = code
        for m in reversed(sites):
            w = wrap(c, m)
            if w: c = w
        alts.append(c)
    for m in re.finditer(r"^(\s+)(\w+) = (\*\([su]32 \*\)\([^\n]*\));\n\1if \(\2 != 0\) \{\n\1    if \(\2 != 0\) \{\n", code + "", re.M):
        pass
    for c in list(alts):
        c2 = re.sub(r"^(\s+)(\w+) = (\*\([su]32 \*\)\([^\n]*\));\n\1if \(\2 != 0\) \{\n(\1    if \(\2 != 0\) \{)",
                    r"\1if (\3 != 0) {\n\1    \2 = \3;\n\4", c, flags=re.M)
        if c2 != c: alts.append(c2)
    alts = list(dict.fromkeys(alts))
    jobs.append(dict(unit=unit, fn=fn, code=alts[0], cpp=('extern "C"' in code or "virtual" in code), alts=alts[1:]))
json.dump(jobs, open(sys.argv[1], "w"))
print(len(jobs), "jobs,", sum(1 + len(j["alts"]) for j in jobs), "candidates")
