#!/usr/bin/env python3
"""altfix.py <survey.txt> <out.json>: build alternate candidates for surveyed near-misses:
 - padded virtual calls for casts on arbitrary (EXPR + 0xOFF) bases (vptr at offset OFF of the object),
 - signedness toggles (u32<->s32 on memory casts and parameters) when the diff shows cmpwi/cmplwi mismatches."""
import glob, itertools, json, os, re, sys
S = os.path.dirname(os.path.abspath(__file__)); BEST = S + "/best"
survey = {}
for b in open(sys.argv[1]).read().split("## ")[1:]:
    head, *diffs = b.strip().split("\n")
    m = re.match(r"(\S+) (\S+) match ([\d.]+)%", head)
    if m: survey[m.group(1)] = "\n".join(diffs)

def balanced(s, i):
    """index just past the ')' closing the '(' at s[i]"""
    d = 0
    for k in range(i, len(s)):
        d += s[k] == "("; d -= s[k] == ")"
        if d == 0: return k + 1
    return -1

def padfix(code):
    """rewrite ((VCall_X *)((T *)(EXPR + 0xOFF)))-> as ((VCall_X *)(EXPR))-> with pad OFF; None if ambiguous"""
    offs = {}; out = code; pos = 0; changed = False
    while True:
        m = re.compile(r"\(\((VCall_\w+) \*\)\(\((?:s32|u32|int|u8|s8) \*\)\(").search(out, pos)
        if not m: break
        inner_start = m.end() - 1          # the '(' before EXPR
        inner_end = balanced(out, inner_start)
        inner = out[inner_start + 1:inner_end - 1]
        mm = re.match(r"(.*) \+ (0x[0-9a-fA-F]+|\d+)$", inner, re.S)
        tail = out[inner_end:inner_end + 4]
        if not mm or tail != "))->" or balanced(out, m.start()) != inner_end + 2:
            pos = m.end(); continue
        name, expr, off = m.group(1), mm.group(1), int(mm.group(2), 0)
        offs.setdefault(name, set()).add(off)
        rep = "((%s *)(%s))->" % (name, expr)
        out = out[:m.start()] + rep + out[inner_end + 4:]
        pos = m.start() + len(rep); changed = True
    if not changed or any(len(v) != 1 for v in offs.values()): return None
    for name, v in offs.items():
        off = next(iter(v))
        dm = re.search(r"struct %s \{ (char vptr_pad\[(0x[0-9a-fA-F]+)\]; )?" % name, out)
        if not dm: return None
        base = int(dm.group(2), 16) if dm.group(2) else 0
        out = out[:dm.start()] + "struct %s { char vptr_pad[0x%x]; " % (name, base + off) + out[dm.end():]
    return out

def sign_alts(code):
    """toggle one (or two) memory casts / params between u32 and s32"""
    body_start = code.find("{", re.search(r"^[\w \*]+\b(?:fn|dtor)_[0-9A-F]+\s*\(", code, re.M).start())
    sites = [(m.start(), m.end()) for m in re.finditer(r"\*\((u32|s32|u8|s8|u16|s16) \*\)", code) if m.start() > body_start]
    sig = re.search(r"^[\w \*]+\b(?:fn|dtor)_[0-9A-F]+\s*\(([^)]*)\)", code, re.M)
    psites = [(sig.start(1) + m.start(), sig.start(1) + m.end()) for m in re.finditer(r"\b(u32|s32)\b", sig.group(1))]
    for m in re.finditer(r"^    (u32|s32) (\w+);$", code, re.M): psites.append((m.start(1), m.end(1)))
    all_sites = sites + psites
    def toggle(c, spans):
        for a, b in sorted(spans, reverse=True):
            seg = c[a:b]
            for x, y in (("u32", "s32"), ("u8", "s8"), ("u16", "s16")):
                if x in seg: seg = seg.replace(x, y); break
                if y in seg: seg = seg.replace(y, x); break
            c = c[:a] + seg + c[b:]
        return c
    alts = [toggle(code, [s]) for s in all_sites]
    if len(all_sites) <= 12:
        alts += [toggle(code, [a, b]) for a, b in itertools.combinations(all_sites, 2)]
    # dedupe, keep order
    seen, outl = set(), []
    for a in alts:
        if a not in seen: seen.add(a); outl.append(a)
    return outl[:120]

jobs = []
for f in sorted(glob.glob(BEST + "/*.c")):
    hdr, code = open(f).read().split("\n", 1)
    _, unit, fn, pct = hdr.split()
    d = survey.get(fn, "")
    cands = []
    p = padfix(code) if ("lwzu" in d or re.search(r"\|\s+addi r3, r\d+, 0x", d)) else None
    if p: cands.append(p)
    for base in ([p] if p else [code]):
        c2 = re.sub(r"if \((\w+) != \((\w+) \*\)0x(f{4,}[0-9a-f]+)\) \{",
                    lambda m: "if ((u32)%s + 0x%x != 0) {" % (m.group(1), (0x100000000 - int(m.group(3), 16))), base)
        c2 = re.sub(r"if \((\w+) != -(0x[0-9a-f]+|\d+)\) \{", r"if (\1 + \2 != 0) {", c2)
        if c2 != base: cands.append(c2)
    if re.search(r"cmpwi.*\|\s*cmplwi|cmplwi.*\|\s*cmpwi|cmplwi.*\|\s*exts[bh]\.|exts[bh]\..*\|\s*cmplwi", d):
        for base in ([p] if p else [code]):
            cands += sign_alts(base)
    if not cands: continue
    jobs.append(dict(unit=unit, fn=fn, code=cands[0], cpp=('extern "C"' in cands[0] or "virtual" in cands[0]), alts=cands[1:]))
json.dump(jobs, open(sys.argv[2], "w"))
print(len(jobs), "jobs,", sum(1 + len(j["alts"]) for j in jobs), "candidates")
