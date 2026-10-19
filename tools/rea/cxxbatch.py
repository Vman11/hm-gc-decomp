#!/usr/bin/env python3
"""cxxbatch.py <units.txt> <jobs_out.json>: build C++ candidates for every function of the listed C units
(cxxunit.candidate) and write them as try_par jobs (cpp, replace, sym) so they are compiled and judged in
parallel; successful ones are converted/kept by try_par's C++ path. Renames are queued; run cxx.py apply
before try_par."""
import json, os, re, sys
sys.argv, argv = ["conv.py"], sys.argv[1:]
S = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, S)
import cxxunit, cxx
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
jobs = []
for unit in open(argv[0]).read().split():
    path = f"src/{unit}.cpp" if os.path.exists(f"src/{unit}.cpp") else f"src/{unit}.c"
    if not os.path.exists(path): continue
    text = open(path).read()
    if "M2C_FIELD" in text or "M2C_" in text:   # macro-based units: the rewrites do not understand them
        continue
    for fn, start, end, m in cxxunit.functions(text):
        try:
            code, sym = cxxunit.candidate(unit, fn, text, start, end, m)
        except Exception as e:
            print(unit, fn, "error", e); continue
        if code is None: continue
        base = fn if fn.startswith("fn_") else next((k for k, v in cxx.load(cxx.CLASSES).items() if v["name"] == fn), fn)
        jobs.append({"unit": unit, "fn": base, "sym": sym, "code": code, "cpp": True, "replace": True})
json.dump(jobs, open(argv[1], "w"), indent=1)
print(len(jobs), "jobs")
