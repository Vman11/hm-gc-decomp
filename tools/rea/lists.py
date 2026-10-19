#!/usr/bin/env python3
"""lists.py: regenerate existing.txt (functions present in a unit's source but not 100%: conv replaces them)
and extab_cands.txt (unmatched functions in units with exception actions, present or not)."""
import json, os, re, glob
S = os.path.dirname(os.path.abspath(__file__)); ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
acts = {}
for f in glob.glob("build/GHYE6S/asm/auto/*.s"):
    t = re.findall(r"^ \* Type: (\w+)", open(f).read(), re.M)
    if t: acts[os.path.basename(f)[:-2]] = t
d = json.load(open("build/GHYE6S/report.json"))
ex, present = [], []
for u in d["units"]:
    unit = u["name"][5:]
    path = "src/" + unit + ".cpp" if os.path.exists("src/" + unit + ".cpp") else "src/" + unit + ".c"
    src = open(path).read() if os.path.exists(path) else ""
    for f in u.get("functions", []):
        p = f.get("fuzzy_match_percent"); sz = int(f["size"])
        if p == 100.0: continue
        if p is not None and p < 100:
            present.append("%d %s %s %s" % (sz, f["name"], unit, p))
        if unit.split("/")[-1] in acts:
            ex.append((sz, f["name"], unit, ",".join(sorted(set(acts[unit.split("/")[-1]])))))
open(S + "/existing.txt", "w").write("\n".join(present) + "\n")
ex.sort(); open(S + "/extab_cands.txt", "w").write("\n".join("%d %s %s %s" % r for r in ex) + "\n")
print("existing:", len(present), "extab candidates:", len(ex))
