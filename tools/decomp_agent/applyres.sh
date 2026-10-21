#!/bin/bash
# applyres.sh resfile... : apply all "ok" lines (unit-keyed, lmw-aware), skip-list the FAIL ones
S=${DECOMP_SCRATCH:-/tmp/decomp-scratch}
cd /home/mi/Decomp/hauntedmansion-ghye6s
declare -A seen; args=""
for r in "$@"; do while read st fn u f; do
  if [ "$st" = ok ] && [ -z "${seen[$fn]}" ]; then seen[$fn]=1; args="$args $u=${f%.lmw}"; [[ $f == *.lmw ]] && { cp $f ${f%.lmw}; args="$args+lmw"; }; fi
done < $r; done
for r in "$@"; do while read st fn u f; do [ "$st" = FAIL ] && [ -z "${seen[$fn]}" ] && { grep -qx $fn $S/skip.txt || echo $fn >> $S/skip.txt; }; done < $r; done
echo "applying $(echo $args | wc -w)"
python3 tools/rea/apply_q.py $args | grep -v '^applied' || true
