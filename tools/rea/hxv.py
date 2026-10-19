#!/usr/bin/env python3
"""hxv.py <fn> <old>=>><new> [<old>=>><new> ...]: apply literal replacements to best/<fn>.c and test+keep via hx.py.
Multiple variants: separate alternative replacement sets with '||'. Stops at the first 100% match."""
import os, re, subprocess, sys
S = os.path.dirname(os.path.abspath(__file__))
BEST = S + "/best" if os.path.isdir(S + "/best") else "/tmp/claude-1000/-home-mi-Decomp-hauntedmansion-ghye6s/d3210fda-7b08-4893-af30-3fda1dc100c2/scratchpad/best"
fn = sys.argv[1]
hdr, code = open(f"{BEST}/{fn}.c").read().split("\n", 1)
unit, best_pct = hdr.split()[1], float(hdr.split()[3])
variants = [[]]
for a in sys.argv[2:]:
    if a == "||": variants.append([]); continue
    variants[-1].append(a.split("=>>"))
tmp = f"/tmp/claude-1000/-home-mi-Decomp-hauntedmansion-ghye6s/d3210fda-7b08-4893-af30-3fda1dc100c2/scratchpad/hx/{fn}.c"
for v in variants:
    c = code
    for old, new in v:
        if old not in c: print("NOT FOUND:", old); break
        c = c.replace(old, new)
    else:
        open(tmp, "w").write(c)
        r = subprocess.run(["python3", S + "/hx.py", "keep", fn, tmp], capture_output=True, text=True)
        out = r.stdout + r.stderr
        print(out if len(out) < 1500 else out[:1500])
        if "KEPT" in out:
            if os.path.exists(f"{BEST}/{fn}.c"): os.remove(f"{BEST}/{fn}.c")
            break
        m = re.search(r"match ([\d.]+)%", out)
        if m and float(m.group(1)) > best_pct:  # keep the improved variant as the new baseline
            best_pct = float(m.group(1))
            open(f"{BEST}/{fn}.c", "w").write("// %s %s %.4f\n" % (unit, fn, best_pct) + c)
