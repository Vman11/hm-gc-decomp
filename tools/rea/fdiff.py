#!/usr/bin/env python3
"""fdiff.py <unit e.g. auto/text_8018AFD4> <symbol>: build one unit, diff one function."""
import json, subprocess, sys
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"
OBJDIFF = "/home/mi/.local/share/decompnet/toolchains/objdiff-cli/objdiff-cli"
unit, sym = sys.argv[1], sys.argv[2]
obj = f"build/GHYE6S/src/{unit}.o"
r = subprocess.run(["ninja", obj], cwd=ROOT, capture_output=True, text=True)
if r.returncode:
    print(r.stdout[-3000:]); sys.exit(1)
r = subprocess.run([OBJDIFF, "diff", "-p", ".", "-u", f"main/{unit}", "-o", "-", "--format", "json", sym],
                   cwd=ROOT, capture_output=True, text=True)
if r.returncode:
    print(r.stderr[-2000:]); sys.exit(1)
d = json.loads(r.stdout)
def find(side):
    for s in d.get(side, {}).get("symbols", []):
        if s.get("name") == sym: return s
L, R = find("left"), find("right")
if not R:
    print("symbol missing in base (not compiled?)"); sys.exit(1)
print("match:", L.get("match_percent"))
def fmt(ins):
    if not ins or "instruction" not in ins: return ""
    i = ins["instruction"]; return i.get("formatted", "")
li, ri = L.get("instructions", []), R.get("instructions", [])
bad = 0
for a, b in zip(li, ri):
    kind = a.get("diff_kind") or b.get("diff_kind")
    mark = " " if not kind or kind == "DIFF_NONE" else kind.replace("DIFF_", "")[:4]
    if mark != " ": bad += 1
    print(f"{mark:5} {fmt(a):45} | {fmt(b)}")
print("diff lines:", bad)
