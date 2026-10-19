#!/usr/bin/env python3
"""cxxunit.py <unit>...: a unit whose functions all match 100% as C but whose original object carries
exception-table entries can only link once the functions are written with the C++ constructs that emit those
entries. For each function of the unit, build a C++ candidate from the unit's own C text (new expressions,
array news, constructors with base/member sub-objects) and judge it with hx.py keep (HX_SYM for ctors).
Candidates go to $NEWFIX_OUT (default job tmp)."""
import os, re, subprocess, sys
sys.argv, argv = ["conv.py"], sys.argv[1:]
S = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, S)
import conv, cxx, ctorfix, newfix
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
OUT = os.environ.get("NEWFIX_OUT", "/home/mi/.claude/jobs/d20fec94/tmp/hx")
FDEF = re.compile(r"^([\w \*]+?)\s*\b((?:fn|dtor)_[0-9A-F]{8}|__[cd]t__\w+)\s*\(([^)]*)\)\s*\{\n", re.M)


def functions(text):
    out = []
    for m in FDEF.finditer(text):
        depth, k = 0, m.end() - 2   # the opening brace
        while k < len(text):
            depth += text[k] == "{"; depth -= text[k] == "}"
            if depth == 0: break
            k += 1
        out.append((m.group(2), m.start(), k + 1, m))
    return out


def protos_for(body, text, variadic):
    """Exact C++ prototypes (and casts in the body) for the functions the body calls, from the unit's C
    prototypes (return types) and the call sites (argument types)."""
    called = set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", body)) - {"if", "while", "for", "return", "sizeof", "switch"} \
        - set(re.findall(r"\bnew (\w+)", body)) - set(re.findall(r"struct (\w+) \{", text))
    callees = []
    for c in sorted(called):
        pm = re.search(r"^\s*([\w \*]+?)\s*\b%s\s*\([^{;]*\);" % re.escape(c), text, re.M)
        rt = (pm.group(1).strip() if pm else "void") or "void"
        if re.search(r"\b%s\b" % re.escape(c), "u8 s8 u16 s16 u32 s32 f32 f64 int char float double void"): continue
        callees.append((c, rt))
    r = conv.cpp_protos(body, callees, variadic)
    return r


def candidate(unit, fn, text, start, end, m):
    asm_text = open(f"build/GHYE6S/asm/{unit}.s").read()
    acts = ctorfix.actions_of(asm_text, fn)
    kinds = {t for t, _, _ in acts}
    head, ret, params = text[m.start():m.end()], m.group(1).strip(), m.group(3)
    body = text[m.end():end - 1]
    externs = [l for l in text.split("\n") if l.startswith("extern ") and re.search(r"\b(%s)\b" % "|".join(re.escape(w) for w in set(re.findall(r"\blbl_\w+", body)) or ["___"]), l)]
    decls = []
    body2 = body
    if kinds & {"DELETEPOINTER", "DELETEPOINTERCOND"}:
        body2, d = newfix.rewrite(body2); decls += d
        if "__nwa__FUl(" in body2:
            b3, d3 = conv.new_arrays(body2)
            if b3 is not None: body2 = b3; decls += d3
    asm = conv.asm_of(unit, fn)
    r = protos_for(body2, text, conv.variadic_callees(asm))
    if r is None:
        return None, None
    body3, pdecls = r
    code = 'extern "C" {\n' + "\n".join(externs + pdecls) + "\n}\n" + "\n".join(decls) + "\n\n" + \
           '%s %s(%s) {\n%s}\n' % (ret, fn, params, body3)
    sym = fn
    if re.search(r"\bs16 \w+\) \{", head) and "__dl__FPv" in body:   # destructor shape (this, s16 flag)
        rr = ctorfix.dtorize(code, fn)
        if rr is not None:
            return rr
    # one declaration per class (a class may be both new'd and a member here)
    seen, lines = set(), []
    for l in code.split("\n"):
        ms = re.match(r"struct (\w+) \{", l)
        if ms:
            if ms.group(1) in seen: continue
            seen.add(ms.group(1))
        lines.append(l)
    code = "\n".join(lines)
    if kinds & {"DESTROYBASE", "DESTROYMEMBER"}:
        rr = ctorfix.ctorize(code, fn if fn.startswith("fn_") else next((k for k, v in cxx.load(cxx.CLASSES).items() if v["name"] == fn), fn), acts)
        if rr is None:
            return None, None
        code, sym = rr
        seen, lines = set(), []
        for l in code.split("\n"):
            ms = re.match(r"struct (\w+) \{", l)
            if ms:
                if ms.group(1) in seen: continue
                seen.add(ms.group(1))
            lines.append(l)
        code = "\n".join(lines)
    else:
        code = code.replace("\n%s %s(" % (ret, fn), '\nextern "C" %s %s(' % (ret, fn), 1)
    return code, sym


if __name__ == "__main__":
    for unit in argv:
        path = f"src/{unit}.cpp" if os.path.exists(f"src/{unit}.cpp") else f"src/{unit}.c"
        text = open(path).read()
        for fn, start, end, m in functions(text):
            code, sym = candidate(unit, fn, text, start, end, m)
            if code is None:
                print(unit, fn, "no candidate"); continue
            base = fn if fn.startswith("fn_") else next((k for k, v in cxx.load(cxx.CLASSES).items() if v["name"] == fn), fn)
            p = f"{OUT}/{base}.cpp"; open(p, "w").write(code)
            subprocess.run(["python3", S + "/cxx.py", "apply"], capture_output=True)
            env = dict(os.environ, HX_SYM=sym, HX_UNIT=unit)
            r = subprocess.run(["python3", S + "/hx.py", "keep", base, p], capture_output=True, text=True, env=env)
            last = [l for l in r.stdout.splitlines() if l.strip()][-1:] 
            print(unit, fn, "->", sym, ":", (last[0] if last else r.stderr[-200:]))
