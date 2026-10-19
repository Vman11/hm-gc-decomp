#!/bin/bash
# next.sh N [minsize maxsize]: print next N candidate names (JSON) not yet sent to REA.
# REA knows the original (fn_/dtor_/lbl_) names: renamed symbols are translated back via renames.json.
S=$(cd "$(dirname "$0")" && pwd)
cd /home/mi/Decomp/hauntedmansion-ghye6s
python3 $S/cands.py ${2:-8} ${3:-400} 100000 > $S/cands_all.txt
touch $S/attempted.txt
python3 - "$1" <<PY
import json, sys, os
S = "$S"
ren = json.load(open(S + "/renames.json")) if os.path.exists(S + "/renames.json") else {}
back = {v: k for k, v in ren.items()}
att = set(open(S + "/attempted.txt").read().split())
out = []
for l in open(S + "/cands_all.txt").read().splitlines()[1:]:
    p = l.split()
    if len(p) > 3 and p[3] == "ps": continue
    n = back.get(p[1], p[1])
    if n in att: continue
    out.append(n)
    if len(out) >= int(sys.argv[1]): break
open(S + "/batch.txt", "w").write("\n".join(out) + "\n")
open(S + "/attempted.txt", "a").write("\n".join(out) + "\n")
print(json.dumps(out))
PY
echo "remaining: $(awk 'NR>1' $S/cands_all.txt | wc -l)" >&2
