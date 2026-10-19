#!/usr/bin/env python3
"""strfix2.py <out.json>: inline string-literal arguments whose text already appears as a named symbol in the same
candidate (`extern char lbl_X[]; ... /* "text" */`) are replaced by that symbol (-str reuse: one copy, one reloc).
Alternates also flip the first `s32 iVar1;` to u32 (vcall result tested with cmplwi)."""
import glob, json, os, re, sys
S = os.path.dirname(os.path.abspath(__file__)); BEST = S + "/best"
jobs = []
for f in sorted(glob.glob(BEST + "/*.c")):
    hdr, code = open(f).read().split("\n", 1)
    _, unit, fn, pct = hdr.split()
    lits = set(re.findall(r'\(int\)\("((?:[^"\\]|\\.)*)"\)', code))
    if not lits: continue
    new = code
    for lit in lits:
        m = re.search(r"\((lbl_[0-9A-F]+)\)[^\n]*/\* \"%s\" \*/" % re.escape(lit), code)
        if m: new = new.replace('(int)("%s")' % lit, "(int)(%s)" % m.group(1))
    if new == code: continue
    alts = []
    a = new.replace("    s32 iVar1;", "    u32 iVar1;", 1)
    if a != new: alts.append(a)
    jobs.append(dict(unit=unit, fn=fn, code=new, cpp=('extern "C"' in new or "virtual" in new), alts=alts))
json.dump(jobs, open(sys.argv[1], "w"))
print(len(jobs), "jobs")
