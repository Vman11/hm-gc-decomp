#!/usr/bin/env python3
"""sdkjobs.py <refdir> <matches.json> <jobs.json>: for every fingerprint match, a try_par job whose code is the
reference function's source (plus the reference file's #includes and the file-level declarations it needs).
Functions calling static helpers of their file are skipped (the helper would become extra code in our unit)."""
import json, os, re, sys
REF, MATCHES, OUT = sys.argv[1], sys.argv[2], sys.argv[3]
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
cands = json.load(open(MATCHES))
byfn = {}
for c in cands: byfn.setdefault(c["fn"], []).append(c)
FDEF = re.compile(r"^(?!static )(?:[\w \*]+?)\b(\w+)\s*\(([^;{]*)\)\s*\{", re.M)


def split_file(path):
    s = open(path, errors="replace").read()
    incs = "\n".join(l for l in s.split("\n") if l.startswith("#include"))
    funcs, statics = {}, set()
    for m in re.finditer(r"^((?:static\s+)?(?:inline\s+)?[\w \*]+?)\b(\w+)\s*\(([^;{]*)\)\s*\{", s, re.M):
        depth, k = 0, m.end() - 1
        while k < len(s):
            depth += s[k] == "{"; depth -= s[k] == "}"
            if depth == 0: break
            k += 1
        funcs[m.group(2)] = s[m.start():k + 1]
        if m.group(1).strip().startswith("static"): statics.add(m.group(2))
    # file-level declarations (globals, statics, typedefs, #defines) outside functions
    body = s
    for t in funcs.values(): body = body.replace(t, "")
    decls = "\n".join(l for l in body.split("\n") if l.strip() and not l.startswith("#include"))
    return incs, funcs, statics, decls


jobs, skipped = [], 0
cache = {}
for fn, cs in byfn.items():
    refs = {(c["ref"], c["file"]) for c in cs}
    if len(refs) != 1: skipped += 1; continue
    (rn, rf), = refs
    path = os.path.join(REF, rf)
    if path not in cache: cache[path] = split_file(path)
    incs, funcs, statics, decls = cache[path]
    if rn not in funcs: skipped += 1; continue
    text = funcs[rn]
    if any(re.search(r"\b%s\s*\(" % re.escape(st), text) for st in statics if st != rn): skipped += 1; continue
    # the function keeps the reference name; our symbol must be renamed to it (job field 'rename')
    code = incs + "\n\n" + decls + "\n\n" + text + "\n"
    jobs.append({"unit": cs[0]["unit"], "fn": fn, "sym": rn, "code": code, "replace": True, "rename": [fn, rn] if fn != rn else None, "ref": rf})
json.dump(jobs, open(OUT, "w"), indent=1)
print(len(jobs), "jobs,", skipped, "skipped")
