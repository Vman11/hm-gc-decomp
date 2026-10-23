#!/bin/bash
# gm.sh FN CAND [WORKER]: apply a q.py-verified game candidate under the lock; commit if the report says 100% and the sha holds
W=${DECOMP_SCRATCH:-/home/mi/Decomp/hm-work}; FN=$1; CAND=$2; L=$W/${3:-gm}; mkdir -p $L
cd /home/mi/Decomp/hauntedmansion-ghye6s
exec 9>$W/int.lock; flock 9
if [ -n "$(git status --short -uno)" ]; then echo DIRTY; git status --short | head; exit 1; fi
pre_untracked=$(git ls-files --others --exclude-standard src/auto | sort)
python3 tools/rea/apply_q.py $FN=$CAND 2>&1 | tail -1
rm -f build/GHYE6S/main.dol; timeout 590 ninja > $L/ninja.log 2>&1; rc=$?
pct=$(python3 -c "
import json
r=json.load(open('build/GHYE6S/report.json'))
for u in r['units']:
    for f in u.get('functions',[]):
        if f['name']=='$FN': print(f.get('fuzzy_match_percent'))")
files=$(git status --short -uall src/auto configure.py config/GHYE6S/splits.txt | awk '{print $2}')
if [ $rc = 0 ] && [ "$pct" = "100.0" ] && sha1sum -c config/GHYE6S/build.sha1 | grep -q OK; then
  git add -A $files && git commit -qm "Match $FN

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>" && git pull -q --rebase && git log --oneline -1
  rm -f build/GHYE6S/main.dol; timeout 590 ninja > $L/ninja.log 2>&1 || echo "POST-REBASE NINJA FAIL"
  sha1sum -c config/GHYE6S/build.sha1 | tail -1
else
  echo "FAIL rc=$rc pct=$pct"
  git checkout -- configure.py config/GHYE6S/splits.txt src/auto 2>/dev/null
  comm -13 <(echo "$pre_untracked") <(git ls-files --others --exclude-standard src/auto | sort) | xargs -r rm -f
  timeout 590 ninja > /dev/null 2>&1; sha1sum -c config/GHYE6S/build.sha1 | tail -1
fi
