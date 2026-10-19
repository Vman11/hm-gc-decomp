#!/usr/bin/env python3
"""argfix.py <survey.txt> <out.json>: for near-misses whose diff shows a tested value loaded into an argument
register (Ghidra dropped a call argument), generate alternates that pass the tested expression to the call that
follows the test: f(args, E), f(E, args), f(E), and ->m(E) / ->m(args, E) for virtual calls."""
import glob, json, os, re, sys
S = os.path.dirname(os.path.abspath(__file__)); BEST = S + "/best"
survey = {}
for b in open(sys.argv[1]).read().split("## ")[1:]:
    head, *diffs = b.strip().split("\n")
    m = re.match(r"(\S+) (\S+) match ([\d.]+)%", head)
    if m: survey[m.group(1)] = "\n".join(diffs)
COND = re.compile(r"^(\s*)if \((.*)\) \{\s*$", re.M)
CALL = re.compile(r"^(\s*)((?:\w+ = )?)(\(\(VCall_\w+ \*\)\(.*?\)\)->m|(?:fn|dtor)_[0-9A-F]+|memset|memcpy|strcpy)\((.*)\);\s*$", re.M)

def tested_exprs(cond):
    out = []
    for m in re.finditer(r"\(?([^()]*(?:\([^()]*(?:\([^()]*(?:\([^()]*\))*[^()]*\))*[^()]*\))*[^()]*?) (?:!=|==) (?:0|NULL|\(u32 \*\)0x0|\(s32 \*\)0x0|\(void \*\)0x0)\)?", cond):
        e = m.group(1).strip().lstrip("(")
        if e and len(e) < 120: out.append(e)
    m = re.search(r"\((\w+) = ([^,]+), \1 != 0\)", cond)
    if m: out.append(m.group(1))
    return out

def variants(code):
    alts = []
    lines = code.split("\n")
    for i, l in enumerate(lines):
        cm = COND.match(l)
        if not cm: continue
        exprs = tested_exprs(cm.group(2))
        if not exprs: continue
        # calls in the next few lines (same block)
        for k in range(i + 1, min(i + 6, len(lines))):
            if lines[k].strip() == "}": break
            km = CALL.match(lines[k])
            if not km: continue
            ind, asg, callee, args = km.groups()
            for E in exprs:
                arg = "(int)(%s)" % E
                if arg in args: continue
                news = []
                if callee.endswith("->m"):
                    news += ["%s%s%s(%s);" % (ind, asg, callee, (args + ", " if args.strip() else "") + "(u32)(%s)" % E)]
                    news += ["%s%s%s(%s);" % (ind, asg, callee, "(u32)(%s)" % E + (", " + args if args.strip() else ""))]
                else:
                    news += ["%s%s%s(%s);" % (ind, asg, callee, (args + ", " if args.strip() else "") + arg),
                             "%s%s%s(%s);" % (ind, asg, callee, arg + (", " + args if args.strip() else "")),
                             "%s%s%s(%s);" % (ind, asg, callee, arg)]
                    parts = [a.strip() for a in re.split(r",(?![^()]*\))", args)] if args.strip() else []
                    for pi in range(len(parts)):
                        np_ = parts[:]; np_[pi] = arg
                        news.append("%s%s%s(%s);" % (ind, asg, callee, ", ".join(np_)))
                # the object whose field was tested (Ghidra showed the field, the call takes the object)
                bm = re.match(r"\*\((?:u32|s32) \*\)\((\w+) \+ (?:0x[0-9a-f]+|\d+)\)$", E) or re.match(r"(\w+)\[(?:0x[0-9a-f]+|\d+)\]$", E)
                if bm and callee.endswith("->m") is False:
                    base = "(int)(%s)" % bm.group(1)
                    parts = [a.strip() for a in re.split(r",(?![^()]*\))", args)] if args.strip() else []
                    for pi in range(len(parts)):
                        if parts[pi] == arg:
                            np_ = parts[:]; np_[pi] = base
                            news.append("%s%s%s(%s);" % (ind, asg, callee, ", ".join(np_)))
                for n in news:
                    nl = lines[:]; nl[k] = n
                    c = "\n".join(nl)
                    # fix prototype arity for plain functions: drop the declaration so the compiler infers (C++ needs it): rewrite proto
                    if not callee.endswith("->m"):
                        nargs = n.count("(int)(") + n.count("(u32)(") + n.count("(s32)(")
                        c = re.sub(r"^(\w[\w ]*\*?) %s\([^)]*\);$" % callee, lambda mm: "%s %s(%s);" % (mm.group(1), callee, ", ".join(["int"] * max(nargs, 1))), c, flags=re.M)
                    else:
                        vm = re.search(r"\(\((VCall_\w+) \*\)", callee)
                        nargs = n.count("(u32)(") + n.count("(int)(") + n.count("(s32)(")
                        c = re.sub(r"(struct %s \{.*virtual \w+ m)\([^)]*\)" % vm.group(1), lambda mm: "%s(%s)" % (mm.group(1), ", ".join(["int"] * nargs)), c)
                    alts.append(c)
            break
    sig = re.search(r"^void ((?:fn|dtor)_[0-9A-F]+)\(", code, re.M)
    if sig:
        vm = re.search(r"^(\s+)(\(\(VCall_\w+ \*\)\(.*?\)\)->m)\((.*)\);\n((?:\s+\*\([^\n]*= [^\n]*;\n)+)\}", code, re.M)
        if vm:
            c = code[:vm.start()] + "%su32 uVar_r = %s(%s);\n%s%sreturn uVar_r;\n}" % (vm.group(1), vm.group(2), vm.group(3), vm.group(4), vm.group(1)) + code[vm.end():]
            c = c.replace("void %s(" % sig.group(1), "u32 %s(" % sig.group(1), 1)
            sv = re.search(r"\(\((VCall_\w+) \*\)", vm.group(2))
            c = re.sub(r"(struct %s \{.*virtual) void m\(" % sv.group(1), r"\1 int m(", c)
            alts.append(c)
    seen, out = set(), []
    for a in alts:
        if a not in seen: seen.add(a); out.append(a)
    return out

jobs = []
for f in sorted(glob.glob(BEST + "/*.c")):
    hdr, code = open(f).read().split("\n", 1)
    _, unit, fn, pct = hdr.split()
    d = survey.get(fn, "")
    if not re.search(r"(lwz|lbz|lhz|lha|lwzx) r[0-8], (\S+)\s+\|\s+(lwz|lbz|lhz|lha|lwzx) r(0|3|4|5), \2", d): continue
    v = variants(code)
    if v: jobs.append(dict(unit=unit, fn=fn, code=v[0], cpp=('extern "C"' in v[0] or "virtual" in v[0]), alts=v[1:60]))
json.dump(jobs, open(sys.argv[2], "w"))
print(len(jobs), "jobs,", sum(1 + len(j["alts"]) for j in jobs), "candidates")
