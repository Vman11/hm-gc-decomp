#!/bin/bash
# qa2.sh dir listfile(fn unit per line)
S=${DECOMP_SCRATCH:-/tmp/decomp-scratch}
cd /home/mi/Decomp/hauntedmansion-ghye6s
while read fn u; do f=$(ls $1/$fn.* 2>/dev/null | head -1); [ -z "$f" ] && continue; b=$(basename $f); ext=$(echo $b | cut -d. -f2); l=""; [[ $b == *.lmw ]] && l=1
r=$(QX="${l:+-use_lmw_stmw on}" python3 -I $S/q.py $u $fn $f $([ $ext = cpp ] && echo cpp) 2>&1 | head -1)
[ "$r" = MATCH ] && echo "ok $fn $u $f" || echo "FAIL $fn $u $f"; done < $2
