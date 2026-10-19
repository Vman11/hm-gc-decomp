#!/usr/bin/env python3
"""sinit.py <unit>...: static-initializer stub units (original object has a .ctors entry). The stub's body is
kept verbatim inside a global `__sinit_<unit>_cpp` (the compiler-generated one would be local and get stripped
by the FORCEACTIVE-based linker script) with an explicit .ctors entry; our stub symbol is renamed to that name
(pending). Writes $NEWFIX_OUT/sinit_<fn>.cpp and prints a jobs line per unit."""
import os, re, sys, json
S = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, S)
import cxx
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
OUT = os.environ.get("NEWFIX_OUT", "/home/mi/.claude/jobs/d20fec94/tmp/hx")
STUB = re.compile(r"^(?:extern \"C\" )?void (fn_[0-9A-F]{8}|__sinit_\w+)\(void\) \{\n((?:[ \t]+[^\n]*\n)*)\}", re.M)
jobs = []
for unit in sys.argv[1:]:
    path = f"src/{unit}.cpp" if os.path.exists(f"src/{unit}.cpp") else f"src/{unit}.c"
    text = open(path).read()
    m = STUB.search(text)
    if not m: print(unit, "no stub"); continue
    fn, body = m.group(1), m.group(2)
    base = unit.split("/")[-1]
    sym = "__sinit_%s_cpp" % base
    decls = [l for l in text.split("\n") if re.match(r"^(extern [^\"]|void \w+\(|[su](?:8|16|32) \w+\(|f32 \w+\(|u32 \*\w+\()", l) and l.endswith(";")]
    # C prototypes become exact C++ ones via the call sites (int args); keep it simple: variadic-free (...) forms
    protos = []
    for l in decls:
        mp = re.match(r"^(\w[\w \*]*?)\s*\b(\w+)\(\);$", l)
        protos.append("%s %s(...);" % (mp.group(1), mp.group(2)) if mp else l)
    stmts = "".join(l + "\n" for l in body.split("\n") if l.strip())
    stmts = re.sub(r"\(int\)\((\w+)\)", r"(int)\1", stmts)
    code = ('extern "C" {\n' + "\n".join(protos) + "\n}\n" +
            'extern "C" void %s(void) {\n%s}\n' % (sym, stmts) +
            '__declspec(section ".ctors") void (*const __ctor_%s)(void) = %s;\n' % (base.split("_")[-1], sym))
    if fn.startswith("fn_"): cxx.pending_rename(fn, sym)
    p = f"{OUT}/sinit_{fn}.cpp"; open(p, "w").write(code)
    jobs.append({"unit": unit, "fn": fn, "sym": sym, "code": code, "cpp": True, "replace": True})
    print(unit, fn, "->", sym)
json.dump(jobs, open(os.environ.get("SINIT_JOBS", OUT + "/../jobs_sinit.json"), "w"), indent=1)
print(len(jobs), "jobs")
