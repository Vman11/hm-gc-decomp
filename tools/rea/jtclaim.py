#!/usr/bin/env python3
"""jtclaim.py <unit>...: give each unit the .data ranges of the switch jump tables its code references
(dtk left them in the anonymous data units; MWCC emits them into the function's own object)."""
import os, re, sys
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
SYM = {}
for l in open("config/GHYE6S/symbols.txt"):
    m = re.match(r"(jumptable_[0-9A-F]+) = (\.\w+):0x([0-9A-F]+); // (.*)", l)
    if m:
        sz = re.search(r"size:0x([0-9A-F]+)", m.group(4))
        SYM[m.group(1)] = (m.group(2), int(m.group(3), 16), int(sz.group(1), 16) if sz else 4)
spl = open("config/GHYE6S/splits.txt").read()
n = 0
for unit in sys.argv[1:]:
    asm = open(f"build/GHYE6S/asm/{unit}.s").read()
    tabs = sorted({t for t in re.findall(r"\b(jumptable_[0-9A-F]+)\b", asm) if t in SYM}, key=lambda t: SYM[t][1])
    m = re.search(r"^(%s\.c(?:pp)?:\n(?:\t.*\n)+)" % re.escape(unit), spl, re.M)
    if not m or not tabs: print(unit, "nothing to claim"); continue
    block = m.group(1)
    for t in tabs:
        sec, addr, size = SYM[t]
        line = "\t%-11s start:0x%08X end:0x%08X\n" % (sec, addr, addr + size)
        if line not in block: block += line; n += 1
    spl = spl.replace(m.group(1), block)
open("config/GHYE6S/splits.txt", "w").write(spl)
print("claimed", n, "jump tables")
