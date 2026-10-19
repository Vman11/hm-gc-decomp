#!/usr/bin/env python3
"""newfix.py <fn>...: rewrite a best/<fn>.c near-miss that allocates with __nw__FUl + guarded ctor call into a
C++ candidate using a real new expression (class from cxx.py registry). Writes <out>/<fn>.cpp; run
`cxx.py apply` (renames + re-split) before judging the candidates with hx.py keep."""
import os, re, sys
sys.argv, argv = ["conv.py"], sys.argv[1:]
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import conv, cxx
S = os.path.dirname(os.path.abspath(__file__))
OUT = os.environ.get("NEWFIX_OUT", "/home/mi/.claude/jobs/d20fec94/tmp/hx")
os.makedirs(OUT, exist_ok=True)
PAT = re.compile(r"((?:[\w ]+ )?)(\w+) = __nw__FUl\((?:\(int\))?\(?(0x[0-9a-f]+|\d+)\)?\);\n(\s*)((?:if \(\2 != 0\) \{\n\s*)+)(?:\2 = )?(\w+)\((?:(?:\(int\))?\(?\2\)?((?:, ?[^;\n]*)?))?\);\n")


def rewrite(body):
    """Returns (new body, class decls) or (body, [])."""
    decls, parts, pos = [], [], 0
    for mm in PAT.finditer(body):
        if mm.start() < pos:
            continue
        typ, var, size, ctor, rest = mm.group(1), mm.group(2), int(mm.group(3), 0), mm.group(6), mm.group(7)
        nifs = mm.group(5).count("if (")
        closes = re.match(r"(?:\s*\}\n){%d}" % nifs, body[mm.end():])
        if not closes:
            continue
        rest = rest or ""
        args = [a for a in conv.split_args(rest.lstrip(", ")) if a.strip() and a.strip() != var] if rest.strip() else []
        ptypes = [conv.is_floaty(a, body) or "int" for a in args]
        cls, _ = cxx.register_ctor(ctor, ptypes)
        d = "struct %s { char pad[%#x]; %s(%s); };" % (cls, size, cls, ", ".join(ptypes) or "void")
        if d not in decls: decls.append(d)
        cargs = [a if t != "int" else "(int)(%s)" % a for a, t in zip(args, ptypes)]
        parts.append(body[pos:mm.start()])
        parts.append("%s%s = (u32) new %s(%s);\n" % (typ, var, cls, ", ".join(cargs)))
        pos = mm.end() + closes.end()
    parts.append(body[pos:])
    body2 = "".join(parts)
    # bare allocations (no constructor call): new of a plain block of that size
    def pod(mm):
        size = int(mm.group(2), 0); cls = "Pod_%x" % size
        d = "struct %s { char b[%#x]; };" % (cls, size)
        if d not in decls: decls.append(d)
        return "%s = (u32) new %s;" % (mm.group(1), cls)
    body2 = re.sub(r"(\w+) = __nw__FUl\((?:\(int\))?\(?(0x[0-9a-f]+|\d+)\)?\);", pod, body2)
    return body2, decls


if __name__ == "__main__":
    for fn in argv:
        src = open(f"{S}/best/{fn}.c").read()
        hdr, code = src.split("\n", 1)
        m = re.search(r"^(\S[^\n(]*?)\b%s\s*\(([^)]*)\)\s*\{\n(.*?)^\}\n" % fn, code, re.S | re.M)
        if not m:
            print(fn, "no function"); continue
        head, ret, params, body = code[:m.start()], m.group(1).strip(), m.group(2), m.group(3)
        body2, decls = rewrite(body)
        if not decls:
            print(fn, "no new pattern"); continue
        if 'extern "C"' in head:  # already a C++ candidate: just add the class declarations
            open(f"{OUT}/{fn}.cpp", "w").write(head + "\n".join(decls) + "\n\n" + "%s %s(%s) {\n%s}\n" % (ret, fn, params, body2) + code[m.end():])
            print(fn, "ok (cpp)", decls); continue
        protos = re.findall(r"^(\w+) (\w+)\(\);$", head, re.M)
        callees = [(c, rt) for rt, c in protos if re.search(r"\b%s\s*\(" % c, body2)]
        r = conv.cpp_protos(body2, callees)
        if r is None:
            print(fn, "proto conflict"); continue
        body3, pdecls = r
        externs = [l for l in head.splitlines() if l.startswith("extern ")]
        cpp = 'extern "C" {\n' + "\n".join(externs + pdecls) + "\n}\n" + "\n".join(decls) + "\n\n" + \
              'extern "C" %s %s(%s) {\n%s}\n' % (ret, fn, params, body3)
        open(f"{OUT}/{fn}.cpp", "w").write(cpp)
        print(fn, "ok", decls)
