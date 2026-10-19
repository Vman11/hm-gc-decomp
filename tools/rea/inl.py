#!/usr/bin/env python3
"""inl.py <fn> [N]: inline single-use virtual-call temporaries into the call that consumes them
(`v = ((VCall*)x)->m(); f(a, v)`  ->  `f(a, ((VCall*)x)->m())`), test with hx keep. N = which temps (all by default)."""
import re, subprocess, sys
S = "/home/mi/Decomp/hauntedmansion-ghye6s/tools/rea"
fn = sys.argv[1]
code = open(f"{S}/best/{fn}.c").read().split("\n", 1)[1]
pat = re.compile(r"\n(\s+)(\w+) = (\(\(VCall_\w+ \*\)\([^\n]*\)\)->m\([^\n]*\));\n")
changed = True
while changed:
    changed = False
    for m in pat.finditer(code):
        v, call = m.group(2), m.group(3)
        rest = code[m.end():]
        uses = re.findall(r"\b%s\b" % v, rest)
        if len(uses) != 1: continue
        um = re.search(r"\((\w+)\)\(%s\)" % v, rest)
        if not um: continue
        rest2 = rest[:um.start()] + "(%s)(%s)" % (um.group(1), call) + rest[um.end():]
        code = code[:m.start()] + "\n" + rest2
        changed = True
        break
p = "/tmp/claude-1000/-home-mi-Decomp-hauntedmansion-ghye6s/d3210fda-7b08-4893-af30-3fda1dc100c2/scratchpad/hx/inl.c"
open(p, "w").write(code)
out = subprocess.run(["python3", S + "/hx.py", "keep", fn, p], capture_output=True, text=True).stdout
print("\n".join(l for l in out.splitlines() if l.startswith(("*", "fn_", "dtor_", "KEPT", "COMPILE"))))
