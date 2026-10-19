#!/bin/bash
# cycle2.sh <rea result file>: parallel matching, then convert/verify (no linking; link once at the end)
S=$(cd "$(dirname "$0")" && pwd)
cd /home/mi/Decomp/hauntedmansion-ghye6s
n=$(ls $S/rea | wc -l); cp "$1" $S/rea/r$(printf %02d $((n+1))).json
start=$(date +%s)
python3 $S/conv.py "$1" > $S/jobs_cur.json && python3 $S/try_par.py $S/jobs_cur.json > $S/try_cur.log 2>&1
echo "matched: $(grep '^MATCHED' $S/try_cur.log | awk '{print $2}')  failed: $(grep -c '^FAILED' $S/try_cur.log)  ($(( $(date +%s)-start ))s)"
python3 $S/finalize.py --no-link 2>&1 | tail -3
echo "cycle time: $(( $(date +%s)-start ))s"
