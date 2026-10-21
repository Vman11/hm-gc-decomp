#!/bin/bash
# qa3.sh dir listfile [jobs] : parallel qa2 (fn unit per line); output order = input order
S=${DECOMP_SCRATCH:-/tmp/decomp-scratch}
cd /home/mi/Decomp/hauntedmansion-ghye6s
one() { fn=$1; u=$2; d=$3; f=$(ls $d/$fn.* 2>/dev/null | sort | tail -1); [ -z "$f" ] && return; b=$(basename $f); ext=$(echo $b | cut -d. -f2); l=""; [[ $b == *.lmw ]] && l=1
r=$(QX="${l:+-use_lmw_stmw on}" python3 -I $S/q.py $u $fn $f $([ $ext = cpp ] && echo cpp) 2>&1 | head -1)
[ "$r" = MATCH ] && echo "ok $fn $u $f" || echo "FAIL $fn $u $f"; }
export -f one; export S
awk -v d="$1" '{print $1, $2, d}' "$2" | xargs -P ${3:-8} -n 3 bash -c 'one "$@"' _
