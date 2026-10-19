#!/usr/bin/env python3
"""survey.py <out.txt> [minpct]: hx show for every best/<fn>.c at or above minpct; writes the survey format
the fix generators read: '## <fn> <unit> match <pct>%' followed by the differing diff rows."""
import glob, os, subprocess, sys
S = os.path.dirname(os.path.abspath(__file__))
out, minpct = sys.argv[1], float(sys.argv[2]) if len(sys.argv) > 2 else 0
with open(out, "w") as f:
    for p in sorted(glob.glob(S + "/best/*.c")):
        hdr = open(p).readline().split()
        if len(hdr) < 4 or float(hdr[3]) < minpct: continue
        fn = hdr[2]
        r = subprocess.run(["python3", S + "/hx.py", "show", fn], capture_output=True, text=True)
        lines = r.stdout.split("\n")
        if not lines or "match" not in lines[0]: f.write("## %s %s match 0%% (%s)\n" % (fn, hdr[1], (lines[0] if lines else "")[:60])); continue
        f.write("## " + lines[0] + "\n" + "\n".join(l for l in lines[1:] if l.startswith("*")) + "\n")
        f.flush()
print("done")
