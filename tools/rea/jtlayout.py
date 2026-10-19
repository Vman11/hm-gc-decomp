#!/usr/bin/env python3
"""jtlayout.py [--apply]: give every unit that uses switch jump tables the .data range of its tables, and fill
the gaps between consecutive claimed ranges with explicit data-only units placed right after the owning unit in
configure.py, so the MW linker (which lays .data out in object order) puts each compiled unit's tables back at
their original addresses. The region before the first table stays an anonymous dtk data unit (linked first)."""
import json, os, re, sys
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
APPLY = "--apply" in sys.argv
SYM = {}
for l in open("config/GHYE6S/symbols.txt"):
    m = re.match(r"(jumptable_[0-9A-F]+) = \.data:0x([0-9A-F]+); // .*size:0x([0-9A-F]+)", l)
    if m: SYM[m.group(1)] = (int(m.group(2), 16), int(m.group(3), 16))
d = json.load(open("build/GHYE6S/report.json"))
units = {}
for u in d["units"]:
    unit = u["name"][5:]; p = f"build/GHYE6S/asm/{unit}.s"
    if not os.path.exists(p) or not re.search(r"text_[0-9A-F]{8}$", unit): continue
    tabs = sorted({SYM[t] for t in re.findall(r"\b(jumptable_[0-9A-F]+)\b", open(p).read()) if t in SYM})
    if tabs: units[unit] = tabs
order = sorted(units, key=lambda u: int(u[-8:], 16))
DATA_END = 0x802AF7A0 + 0x52598
ranges, bad = [], []
for u in order:
    tabs = units[u]
    lo, hi = tabs[0][0], tabs[-1][0] + tabs[-1][1]
    cont = all(tabs[i][0] + tabs[i][1] == tabs[i + 1][0] for i in range(len(tabs) - 1))
    if not cont: bad.append((u, [(hex(a), s) for a, s in tabs]))
    ranges.append((u, lo, hi))
print(len(order), "jump-table units;", len(bad), "with non-contiguous tables (whole span claimed)")
spl = open("config/GHYE6S/splits.txt").read(); cfg = open("configure.py").read()
for i, (u, lo, hi) in enumerate(ranges):
    m = re.search(r"^(%s\.c(?:pp)?:\n(?:\t.*\n)+)" % re.escape(u), spl, re.M)
    if not m: print("no split entry", u); continue
    line = "\t.data       start:0x%08X end:0x%08X\n" % (lo, hi)
    if line not in m.group(1): spl = spl.replace(m.group(1), m.group(1) + line)
    nxt = ranges[i + 1][1] if i + 1 < len(ranges) else DATA_END
    if hi < nxt:
        piece = "auto/jt_%08X" % hi
        if piece + ".c:" not in spl:
            spl = spl.rstrip("\n") + "\n\n%s.c:\n\t.data       start:0x%08X end:0x%08X\n" % (piece, hi, nxt)
        ent = re.search(r'^(\s*)Object\((?:Non)?Matching, "%s\.c(?:pp)?"[^\n]*\n' % re.escape(u), cfg, re.M)
        if ent and ('"%s.c"' % piece) not in cfg:
            cfg = cfg[:ent.end()] + '%sObject(NonMatching, "%s.c"),\n' % (ent.group(1), piece) + cfg[ent.end():]
if APPLY:
    open("config/GHYE6S/splits.txt", "w").write(spl); open("configure.py", "w").write(cfg)
    print("applied")
