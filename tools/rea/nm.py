#!/usr/bin/env python3
"""nm.py show <fn> | test <fn> <file.c>: inspect / test a near-miss (best saved variant in best/<fn>.c)."""
import json, os, subprocess, sys
S = os.path.dirname(os.path.abspath(__file__))
cmd, fn = sys.argv[1], sys.argv[2]
hdr, code = open(f"{S}/best/{fn}.c").read().split("\n", 1)
unit = hdr.split()[1]
if cmd == "test":
    code = open(sys.argv[3]).read()
cpp = 'extern "C"' in code
json.dump([dict(unit=unit, fn=fn, code=code, cpp=cpp, show=True)], open(S + "/one.json", "w"))
out = subprocess.run(["python3", S + "/try.py", S + "/one.json"], capture_output=True, text=True).stdout
if cmd == "show": print(code)
lines = out.splitlines()
print("\n".join(l for l in lines if l[:5].strip() or l.startswith("match")) if "MATCHED 0" in out else "MATCHED " + fn)
