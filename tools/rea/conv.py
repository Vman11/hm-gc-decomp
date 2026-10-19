#!/usr/bin/env python3
"""conv.py <evidence.json>... -> jobs.json on stdout.
Converts REA/Ghidra pseudocode of batch_decompile results into project-style C jobs for try.py."""
import json, os, re, struct, sys

ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"
CANDS = os.path.join(os.path.dirname(os.path.abspath(__file__)), "cands_all.txt")
unit_of = {}
for line in open(CANDS).read().splitlines()[1:]:
    p = line.split()
    unit_of[p[1]] = p[2]
# every function that is not yet 100% (report.json), independent of how cands_all.txt was last filtered
for _u in json.load(open(f"{ROOT}/build/GHYE6S/report.json"))["units"]:
    for _f in _u.get("functions", []):
        if _f.get("fuzzy_match_percent") != 100.0:
            unit_of.setdefault(_f["name"], _u["name"][5:])

REPLACE = set()
EXIST = os.path.join(os.path.dirname(os.path.abspath(__file__)), "existing.txt")
if os.path.exists(EXIST):
    for line in open(EXIST).read().splitlines():
        p = line.split()
        unit_of.setdefault(p[1], p[2]); REPLACE.add(p[1])

TYPES = [
    ("undefined8", "u64"), ("undefined4", "u32"), ("undefined2", "u16"), ("undefined1", "u8"),
    ("undefined", "u8"), ("ulonglong", "u64"), ("longlong", "s64"), ("uint", "u32"), ("ushort", "u16"),
    ("short", "s16"), ("byte", "u8"), ("uchar", "u8"), ("char", "s8"), ("int", "s32"), ("float", "f32"),
    ("double", "f64"), ("bool", "s32"), ("ulong", "u32"), ("long", "s32"), ("size_t", "u32"),
]
BAD = re.compile(r"\b(CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+|in_r\d+|unaff_\w+|in_f\d+|extraout_\w+|float10|"
                 r"DAT_\w+|PTR_\w+|FUN_\w+|LAB_\w+|_DAT_\w+|halt_baddata|trap|__\w+|ABS|SQRT|NAN|"
                 r"stack0x\w+|in_GQR\d|in_cr\w*|\w+\._\d+_\d+_|POPCOUNT|LZCOUNT|CARRY\d|SCARRY\d|SBORROW\d)\b")
LDST = {"lfs": "f32", "stfs": "f32", "lfd": "f64", "stfd": "f64", "lwz": "s32", "stw": "s32",
        "lhz": "u16", "sth": "u16", "lha": "s16", "lbz": "u8", "stb": "u8", "lwzu": "s32", "stwu": "s32"}


SYMS = {}
for line in open(f"{ROOT}/config/GHYE6S/symbols.txt"):
    m = re.match(r"(\S+) = (\.\w+):0x[0-9A-F]+; // (.*)", line)
    if m:
        sz = re.search(r"size:0x([0-9A-F]+)", m.group(3))
        SYMS[m.group(1)] = (m.group(2), int(sz.group(1), 16) if sz else None, "data:string" in m.group(3))


BYADDR = {}
for line in open(f"{ROOT}/config/GHYE6S/symbols.txt"):
    m = re.match(r"(\S+) = \.\w+:0x([0-9A-F]+);", line)
    if m: BYADDR.setdefault(int(m.group(2), 16), m.group(1))


def dat_names(pc):
    """Ghidra DAT_xxxxxxxx / _DAT_xxxxxxxx -> the project's symbol at that address."""
    def sub(m):
        n = BYADDR.get(int(m.group(2), 16))
        if not n: return m.group(0)
        return ("*(u32 *)&" if m.group(1) else "") + n
    return re.sub(r"\b(_?)DAT_([0-9a-f]{8})\b", sub, pc)


DOL = open(f"{ROOT}/orig/GHYE6S/sys/main.dol", "rb").read()
_h = DOL[:0x100]
_SECS = [(o, a, z) for o, a, z in zip(struct.unpack(">18I", _h[0:72]), struct.unpack(">18I", _h[72:144]), struct.unpack(">18I", _h[144:216])) if z]


def dol_read(addr, n):
    for o, a, z in _SECS:
        if a <= addr < a + z:
            return DOL[o + addr - a:o + addr - a + n]
    return None


SYMADDR = {}
for line in open(f"{ROOT}/config/GHYE6S/symbols.txt"):
    m = re.match(r"(\S+) = (\.\w+):0x([0-9A-F]+);", line)
    if m: SYMADDR[m.group(1)] = (m.group(2), int(m.group(3), 16))


def float_consts(body, asm, decls):
    """Literals the original loads from named .sdata2/.rodata constants -> those symbols."""
    consts = {}
    for l in asm.splitlines():
        m = re.search(r"\b(lfs|lfd)\s+f\d+, (lbl_[0-9A-F]{8})@(?:sda21|l)", l)
        if m and SYMADDR.get(m.group(2), ("",))[0] in (".sdata2", ".rodata", ".sdata", ".data"):
            a = SYMADDR[m.group(2)][1]
            raw = dol_read(a, 4 if m.group(1) == "lfs" else 8)
            if raw is None: continue
            v = struct.unpack(">f" if m.group(1) == "lfs" else ">d", raw)[0]
            consts[m.group(2)] = (v, "f32" if m.group(1) == "lfs" else "f64", "@sda21" in l)
    if not consts: return body, decls
    used = set()
    def lit(mm):
        txt = mm.group(0); v = float(txt.rstrip("f"))
        for g, (cv, t, sda) in consts.items():
            if cv == v or struct.unpack(">f", struct.pack(">f", v))[0] == cv:   # f64 constants that are float-exact too
                used.add(g); return g if sda else g + "[0]"
        return txt
    body = re.sub(r"(?<![\w.])-?\d+\.\d+(?:e-?\d+)?f?(?![\w.])", lit, body)
    # Ghidra prints a float 0 stored to a float global as integer 0
    zero = [g for g, (cv, t, sda) in consts.items() if cv == 0.0]
    if zero:
        f32g = set(re.findall(r"extern f32 (\w+);", "\n".join(decls)))
        def z(mm):
            if mm.group(1) in f32g:
                used.add(zero[0]); return "%s = %s;" % (mm.group(1), zero[0] if consts[zero[0]][2] else zero[0] + "[0]")
            return mm.group(0)
        body = re.sub(r"\b(\w+) = 0;", z, body)
    for g in used:
        cv, t, sda = consts[g]
        decls.append(f"extern const {t} {g};" if sda else f"extern const {t} {g}[];")
    return body, decls


def asm_of(unit, fn):
    p = f"{ROOT}/build/GHYE6S/asm/{unit}.s"
    s = open(p).read()
    m = re.search(r"^\.fn %s,.*?^\.endfn %s" % (fn, fn), s, re.S | re.M)
    return m.group(0) if m else ""


def ctype(t):
    t = t.strip()
    for a, b in TYPES:
        t = re.sub(r"\b%s\b" % a, b, t)
    return t


def flit(m):
    """A 64-bit hex constant Ghidra printed for a double argument -> C float/double literal."""
    v = struct.unpack(">d", bytes.fromhex(m.group(1)))[0]
    if v != v or v in (float("inf"), float("-inf")):
        return m.group(0)
    f = struct.unpack(">f", struct.pack(">f", v))[0]
    if f == v:
        for prec in range(1, 10):
            t = "%.*g" % (prec, v)
            if struct.unpack(">f", struct.pack(">f", float(t)))[0] == v:
                break
        if "." not in t and "e" not in t: t += ".0"
        return t + "f"
    return repr(v)


def pre(pc):
    """Rewrite Ghidra idioms into C before conversion."""
    pc = re.sub(r"\b0x([0-9a-f]{16})\b", flit, pc)
    # null-guarded call whose argument Ghidra dropped: the tested pointer is the argument
    pc = re.sub(r"if \(\*\((?:int|undefined4) \*\)\((param_\d+ \+ 0x[0-9a-f]+)\) != 0\) \{\n(\s*)(\w+)\(\);",
                r"if (*(void **)(\1) != 0) {\n\2\3(*(void **)(\1));", pc)
    pc = re.sub(r"\(\*\*\(code \*\*\)", "(*(void (**)())", pc)
    pc = re.sub(r"\(\*\(code \*\)", "((void (*)())", pc)
    pc = re.sub(r"countLeadingZeros\(([^;]*?)\)\s*>>\s*5", r"(\1) == 0", pc)
    return pc


def match_paren(s, i):
    """s[i] == '(' -> index of the matching ')'."""
    depth = 0
    for k in range(i, len(s)):
        if s[k] == "(":
            depth += 1
        elif s[k] == ")":
            depth -= 1
            if depth == 0:
                return k
    return -1


def split_args(a):
    out, depth, cur = [], 0, ""
    for ch in a:
        if ch == "," and depth == 0:
            out.append(cur.strip()); cur = ""; continue
        depth += ch == "("; depth -= ch == ")"
        cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def is_floaty(arg, body):
    if re.search(r"\d\.\d*f?\b|\(f32\)|\(f64\)|\*\(f32 \*\)|\*\(f64 \*\)", arg):
        return "f64" if re.search(r"\(f64\)|\*\(f64 \*\)", arg) else "f32"
    m = re.fullmatch(r"\(?\s*(\w+)\s*\)?", arg)
    if m:
        d = re.search(r"\b(f32|f64)\s+%s\b" % m.group(1), body)
        if d:
            return d.group(1)
    return None


def cpp_calls(body, name):
    """C++ mode: virtual calls -> classes with the slot at the right vtable offset; all calls get exact
    prototypes with explicit casts. Returns (body, decls) or None."""
    decls, k = [], 0
    while True:
        i = body.find("(**(code **)(")
        if i < 0:
            break
        j = match_paren(body, i + len("(**(code **)"))
        if j < 0 or body[j + 1:j + 2] != ")" or body[j + 2:j + 3] != "(":
            return None
        inner = body[i + len("(**(code **)") + 1:j]
        e = match_paren(body, j + 2)
        args = split_args(body[j + 3:e])
        def strip(x):
            x = re.sub(r"\((?:int|uint|undefined4) \*\)", "", x).strip().strip("()").strip()
            return " + ".join(sorted(t.strip() for t in x.split(" + ")))  # a + b == b + a
        inner_s = inner.strip()
        vptr_off, obj = 0, None
        mm = re.fullmatch(r"\*(.*) \+ (0x[0-9a-f]+|\d+)", inner_s, re.S)
        mi = re.fullmatch(r"(\w+)\[(0x[0-9a-f]+|\d+)\] \+ (0x[0-9a-f]+|\d+)", inner_s)
        if mm:
            vexpr, off = mm.group(1).strip(), int(mm.group(2), 0)
            if not args:
                obj = vexpr
            elif strip(vexpr) == strip(args[0]):
                obj = args[0]; args = args[1:]
            else:
                mv = re.fullmatch(r"\((?:int|uint|undefined4) \*\)\((.+) \+ (0x[0-9a-f]+|\d+)\)", vexpr)
                if mv and strip(mv.group(1)) == strip(args[0]):
                    vptr_off = int(mv.group(2), 0); obj = args[0]; args = args[1:]
        elif mi and args and strip(args[0]) == mi.group(1):
            vptr_off, off, obj = 4 * int(mi.group(2), 0), int(mi.group(3), 0), args[0]; args = args[1:]
        elif mi and not args:
            vptr_off, off, obj = 4 * int(mi.group(2), 0), int(mi.group(3), 0), mi.group(1)
        if obj is None or (off - 8) % 4 or off < 8:
            return None
        pre_txt = body[:i].rstrip()
        used = pre_txt.endswith("=") or pre_txt.endswith("return")
        rt = "int" if used else "void"
        ptypes = [is_floaty(a, body) or "int" for a in args]
        cargs = [a if t != "int" else "(int)(%s)" % a for a, t in zip(args, ptypes)]
        cls = "VCall_%s_%d" % (name, k); k += 1
        pads = ("char vptr_pad[%#x]; " % vptr_off if vptr_off else "") + " ".join("virtual void p%d();" % n for n in range((off - 8) // 4))
        decls.append("struct %s { %s virtual %s m(%s); };" % (cls, pads, rt, ", ".join(ptypes)))
        body = body[:i] + "((%s *)(%s))->m(%s)" % (cls, obj, ", ".join(cargs)) + body[e + 1:]
    return body, decls


def is_addr(a):
    """An address expression: &x, (void *)g, a string-literal comment, or an array global (lbl_...) alone."""
    a = a.strip()
    return bool(re.match(r"^&[\w.]+$|^\(void \*\)\w+$|^\(\(char \*\)&\w+ \+ [\w#x]+\)$", a))


def variadic_callees(asm):
    ins = [l.split("*/")[-1].strip() for l in (asm or "").splitlines() if l.startswith("/*")]
    return {ins[i + 1].split()[1] for i in range(len(ins) - 1) if ins[i] == "crclr cr1eq" and ins[i + 1].startswith("bl ")}


def cpp_protos(body, callees, variadic=()):
    """Exact prototypes for plain calls (C++ has no unprototyped declarations)."""
    decls = {}
    for c, rt in callees:
        if c in variadic:
            decls[c] = "%s %s(...);" % (rt, c)
            continue
        pos, sig = 0, None
        while True:
            m = re.search(r"\b%s\s*\(" % re.escape(c), body[pos:])
            if not m:
                break
            i = pos + m.end() - 1
            e = match_paren(body, i)
            args = split_args(body[i + 1:e])
            ptypes = tuple(is_floaty(a, body) or ("void *" if is_addr(a) else "int") for a in args)
            if sig is not None and sig != ptypes:
                return None
            sig = ptypes
            cargs = [a if t != "int" else "(int)(%s)" % a for a, t in zip(args, ptypes)]
            new = "(" + ", ".join(cargs) + ")"
            body = body[:i] + new + body[e + 1:]
            pos = i + len(new)
        decls[c] = "%s %s(%s);" % (rt, c, ", ".join(sig or ("void",)))
    return body, list(decls.values())


def guard_args(pc):
    """if (X != 0) { f(); ...: the tested value is still in r3 and is f's argument (Ghidra dropped it)."""
    def sub(m):
        e = m.group(1)
        if "&&" in e or "||" in e or "(" in e.replace("*(", "").replace("(int *)", "").replace("(undefined4 *)", "").replace("(param", "").replace(" + 0x", ""):
            pass
        return "if (%s != 0) {\n%s%s(%s);" % (e, m.group(2), m.group(3), e)
    pc = re.sub(r"if \(((?:(?!&&|\|\|)[^\n{])+?) != 0\) \{\n(\s*)(\w+)\(\);", sub, pc)
    return re.sub(r"&& \(((?:(?!&&|\|\|)[^\n{])+?) != 0\)\) \{\n(\s*)(\w+)\(\);",
                  lambda m: "&& (%s != 0)) {\n%s%s(%s);" % (m.group(1), m.group(2), m.group(3), m.group(1)), pc)


sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cxx, ctorfix


def apply_renames(pc):
    ren = cxx.load(cxx.RENAMES); ren.update(cxx.load(cxx.PENDING))
    if not ren:
        return pc
    return re.sub(r"\b(%s)\b" % "|".join(re.escape(o) for o in ren), lambda m: ren[m.group(1)], pc)


def known_syms():
    k = set(SYMS) | set(cxx.load(cxx.RENAMES).values()) | set(cxx.load(cxx.PENDING).values())
    return k


def bad(pc):
    """BAD-token test that ignores the project's own __-prefixed symbols (__nw__FUl, __ct__..., __dt__...)."""
    k = known_syms()
    return BAD.search(re.sub(r"\b(__\w+)\b", lambda m: "sym" if m.group(1) in k else m.group(1), pc))


def new_arrays(body):
    """p = __nwa__FUl(n * SZ + 0x10); q = 0; if (p != 0) { q = __construct_new_array(p, ctor, dtor, SZ, n); }
    -> q = (int) new C[n];   and a bare __nwa__FUl(E) -> (int) new u8[E]."""
    decls = []
    pat = re.compile(r"(\w+) = __nwa__FUl\([^;\n]+\);\n(\s*)(\w+) = 0;\n\s*if \(\1 != 0\) \{\n\s*\3 = __construct_new_array\(\1,(\w+),(\w+),(0x[0-9a-f]+|\d+),([^;\n]+)\);\n\s*\}")
    bad = []
    def sub(m):
        q, ctor, dtor, size, n = m.group(3), m.group(4), m.group(5), int(m.group(6), 0), m.group(7).strip()
        n = re.sub(r"^\((?:uint|int|undefined4)\)", "", n)
        if not re.match(r"^(fn_|dtor_|__ct__)\w+$", ctor) or not re.match(r"^(fn_|dtor_|__dt__)\w+$|^0$", dtor):
            bad.append(ctor); return m.group(0)
        try:
            cls, _ = cxx.register_ctor(ctor, [], None if dtor == "0" else dtor)
        except ValueError:
            bad.append(ctor); return m.group(0)
        d = "struct %s { char pad[%#x]; %s(); %s};" % (cls, size, cls, "" if dtor == "0" else "~%s(); " % cls)
        if d not in decls: decls.append(d)
        return "%s = (int) new %s[%s];" % (q, cls, n)
    body = pat.sub(sub, body)
    if bad:
        return None, None
    body = re.sub(r"__nwa__FUl\(([^;\n]+)\);", r"(int) new u8[\1];", body)
    return body, decls


def new_exprs(body):
    """p = __nw__FUl(N); if (p != 0) { [p =] ctor(p, args); }  ->  p = (int) new C(args);  with the class declared.
    The original objects carry an exception-table entry per new expression, so only a real one matches."""
    decls = []
    pat = re.compile(r"(\w+) = __nw__FUl\((0x[0-9a-f]+|\d+)\);\n(\s*)if \(\1 != 0\) \{\n\s*(?:\1 = )?(\w+)\(\1((?:,[^;\n]*)?)\);\n\s*\}")
    def sub(m):
        var, size, ind, ctor, rest = m.group(1), int(m.group(2), 0), m.group(3), m.group(4), m.group(5)
        args = split_args(rest[1:]) if rest.strip() else []
        ptypes = [is_floaty(a, body) or "int" for a in args]
        try:
            cls, _ = cxx.register_ctor(ctor, ptypes)
        except ValueError:
            bad.append(ctor); return m.group(0)
        d = "struct %s { char pad[%#x]; %s(%s); };" % (cls, size, cls, ", ".join(ptypes) or "void")
        if d not in decls: decls.append(d)
        cargs = [a if t != "int" else "(int)(%s)" % a for a, t in zip(args, ptypes)]
        return "%s = (int) new %s(%s);" % (var, cls, ", ".join(cargs))
    bad = []
    body = pat.sub(sub, body)
    if bad:
        return None, None
    return body, decls


def frame_info(asm):
    """(frame size, number of saved GPRs) from the prologue, or None."""
    if not asm: return None
    ins = [l.split("*/")[-1].strip() for l in asm.splitlines() if l.startswith("/*")]
    m = next((re.match(r"stwu r1, -(0x[0-9a-f]+|\d+)\(r1\)", i) for i in ins[:2] if i.startswith("stwu")), None)
    if not m: return None
    F = int(m.group(1), 0)
    saved = 0
    for i in ins[1:12]:
        mm = re.match(r"stw r(\d+), (0x[0-9a-f]+|\d+)\(r1\)", i)
        if mm and int(mm.group(1)) >= 14: saved += 1
        mm = re.match(r"stmw r(\d+), ", i)
        if mm: saved = 32 - int(mm.group(1))
        if i.startswith("bl _savegpr_"): saved = 32 - int(i.split("_")[-1])
    return F, saved


def local_objs(body, asm):
    """ctor(auStack_N[, args]); ... dtor(auStack_N, -1);  ->  a local C++ object `C s;` (class registered with
    ctor + dtor; the original carries a DESTROYLOCAL extab entry).  Fields Ghidra split off as separate locals
    inside the object become *(T *)((char *)&s + off)."""
    decls = []
    fi = frame_info(asm)
    if not fi: return body, decls
    F, nsaved = fi
    k = 0
    for m in list(re.finditer(r"^\s*(fn_\w+|__ct__\w+)\((auStack_([0-9a-f]+))((?:,[^;\n]*)?)\);\n", body, re.M)):
        ctor, var, off, rest = m.group(1), m.group(2), int(m.group(3), 16), m.group(4)
        md = re.search(r"^\s*(dtor_\w+|fn_\w+|__dt__\w+)\(%s,(?:0xffffffff|-1)\);\n" % var, body, re.M)
        ma = re.search(r"^(\s*)undefined1 %s \[(\d+)\];\n" % var, body, re.M)
        if not md or not ma or m.group(0) not in body: continue
        O = F - off                               # SP offset of the object
        end = F - 4 * nsaved                       # end of the locals region
        inner, others = [], []
        for ml in re.finditer(r"^\s*(\w+) (local_([0-9a-f]+))(?: \[(\d+)\])?;\n", body, re.M):
            o = F - int(ml.group(3), 16)
            if o <= O: continue
            if o < O + int(ma.group(2)) + 4 and not ml.group(4): inner.append((ml.group(0), ml.group(1), ml.group(2), o - O))
            else: others.append(o)
        size = min([end] + [o for o in others if o > O]) - O
        if size <= 0 or size > 0x1000: continue
        args = split_args(rest[1:]) if rest.strip() else []
        ptypes = [is_floaty(a, body) or "int" for a in args]
        try:
            cls, _ = cxx.register_ctor(ctor, ptypes, md.group(1))
        except ValueError:
            continue
        d = "struct %s { char pad[%#x]; %s(%s); ~%s(); };" % (cls, size, cls, ", ".join(ptypes) or "void", cls)
        if d not in decls: decls.append(d)
        cargs = [a if t != "int" else "(int)(%s)" % a for a, t in zip(args, ptypes)]
        obj = "lobj%d" % k; k += 1
        body = body.replace(m.group(0), "").replace(md.group(0), "")
        body = body.replace(ma.group(0), "%s%s %s%s;\n" % (ma.group(1), cls, obj, "(%s)" % ", ".join(cargs) if cargs else ""))
        for line, t, nm, o in inner:
            body = body.replace(line, "")
            body = re.sub(r"\b%s\b" % nm, "(*(%s *)((char *)&%s + %#x))" % (ctype(t), obj, o), body)
        body = re.sub(r"\b%s \+ (0x[0-9a-f]+|\d+)" % var, r"((char *)&%s + \1)" % obj, body)
        body = re.sub(r"\b%s\b" % var, "&%s" % obj, body)
    return body, decls


def convert(name, pc):
    pc = dat_names(pc)
    pc = apply_renames(pc)
    pc = guard_args(pc)
    ndecls = []
    if "__nw__FUl(" in pc:
        pc, ndecls = new_exprs(pc)
        if pc is None:
            return None
    if "__nwa__FUl(" in pc:
        pc, adecls = new_arrays(pc)
        if pc is None:
            return None
        ndecls = ndecls + adecls
    if "auStack_" in pc and ",0xffffffff);" in pc:
        u0 = unit_of.get(name)
        pc, ldecls = local_objs(pc, asm_of(u0, name) if u0 else None)
        ndecls = ndecls + ldecls
    cpp = "(**(code **)(" in pc or bool(ndecls) or " new u8[" in pc
    if cpp:
        pc = re.sub(r"\b0x([0-9a-f]{16})\b", flit, pc)
        pc = re.sub(r"countLeadingZeros\(([^;]*?)\)\s*>>\s*5", r"(\1) == 0", pc)
        r = cpp_calls(pc, name)
        if r is None:
            return None
        pc, vdecls = r
        vdecls = ndecls + vdecls
    else:
        pc = pre(pc)
    if re.search(r"\bcode\b|countLeadingZeros|\(\*\(void \(\*\*\)\(\)\)\(\*", pc):
        return None
    if bad(pc) or "WARNING" in pc or "switch" in pc or "goto" in pc:
        return None
    unit = unit_of.get(name)
    if not unit:
        return None
    asm = asm_of(unit, name)
    m = re.search(r"^\s*([\w \*]+?)\s*\b%s\s*\(([^)]*)\)\s*\{(.*)\}\s*$" % re.escape(name), pc, re.S)
    if not m:
        return None
    ret, params, body = ctype(m.group(1)), m.group(2).strip(), m.group(3)
    params = "void" if params in ("", "void") else ", ".join(ctype(p) for p in params.split(","))
    body = "\n" + "\n".join(l[:len(l) - len(l.lstrip())] + ctype(l) for l in body.split("\n"))
    body = re.sub(r"\n\s*return;\s*$", "\n", body.rstrip()) + "\n"
    # float literals -> single precision
    body = re.sub(r"(?<![\w.])(\d+\.\d+)(?![\w.])", r"\1f", body)
    decls = []
    lits = re.findall(r'"(?:[^"\\]|\\.)*"', body)
    if lits:
        strs = [g for g in dict.fromkeys(re.findall(r"\b(lbl_8[0-9A-F]{7})@", asm)) if SYMS.get(g, (0, 0, 0))[2] and not re.search(r"\b%s\b" % g, body)]
        if len(strs) != len(set(lits)):
            return None
        for lit, g in zip(dict.fromkeys(lits), strs):
            body = re.sub(r"([^\n]*)" + re.escape(lit) + r"([^\n]*)", lambda mm: mm.group(1) + "&" + g + mm.group(2) + " /* " + lit + " */", body, count=1)
    # globals: any identifier carrying an address suffix that is not called
    called = set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", body)) - set(re.findall(r"struct (\w+) \{", "\n".join(ndecls)))
    for g in sorted(set(re.findall(r"\b[A-Za-z_]\w*_8[0-9A-F]{7}\b", body)) - called):
        if SYMADDR.get(g, ("",))[0] == ".text":
            continue   # a function used as a value: declared below as a function, not as an array
        lines = [l for l in asm.splitlines() if re.search(r"\b%s\b" % g, l)]
        if not lines:
            return None
        sda = any("@sda21" in l for l in lines)
        addr_taken = any(re.search(r"\baddi\b|\bli\b", l) for l in lines)
        if addr_taken:
            # used as an address: an array of unknown type is the most neutral declaration
            sec, size, isstr = SYMS.get(g, (None, None, False))
            et = "char" if isstr else "u8"
            if sda:
                if not size:
                    return None
                decls.append(f"extern {et} {g}[{size:#x}];")
            else:
                decls.append(f"extern {et} {g}[];")
            body = body.replace("&" + g, "(void *)" + g)
            # MWCC rejects u8[] -> integer conversions (C and C++): the address as an integer where used as a value
            body = re.sub(r"(?<![\w.)])%s\b(?!\s*\[)" % g, "(u32)" + g, body)
            body = body.replace("(void *)(u32)" + g, "(u32)" + g)
            body = re.sub(r"(= )\(void \*\)%s;" % g, r"\1(u32)%s;" % g, body)
            for mm in re.finditer(r"(?<![\w*)])(\w+) = \(u32\)%s;" % g, body):
                td = re.search(r"^\s*([\w ]+?\s*\*+)\s*%s;" % mm.group(1), body, re.M)
                if td: body = body.replace(mm.group(0), "%s = (%s)%s;" % (mm.group(1), td.group(1).strip(), g))
            # typed pointer stores: *(T **)(x) = (u32)g  ->  (T *)g
            body = re.sub(r"(\*\(([\w ]+?\s*\*)\*\)\([^=\n]*\) = )\(u32\)%s;" % g, lambda mm: "%s(%s)%s;" % (mm.group(1), mm.group(2).strip(), g), body)
            continue
        t = None
        for l in lines:
            ins = l.split("*/")[-1].split()
            if ins and ins[0] in LDST and ("@l" in l or "@sda21" in l):
                t = LDST[ins[0]]
        if t is None or "&" + g in body:
            return None
        if sda:
            decls.append(f"extern {t} {g};")
        else:
            decls.append(f"extern {t} {g}[];")
            body = re.sub(r"\b%s\b" % g, g + "[0]", body)
    body, decls = float_consts(body, asm, decls)
    # functions used as values (callbacks, dtors passed to runtime helpers) need a declaration too
    for fv in sorted(set(re.findall(r"\b((?:fn|dtor)_[0-9A-F]{8}|__[cd]t__\w+)\b", body)) - called):
        if fv != name and SYMADDR.get(fv, ("",))[0] == ".text":
            decls.append(f"void {fv}(void);" if cpp else f"void {fv}();")
            body = re.sub(r"\b%s\b(?!\s*\()" % fv, "(u32)%s" % fv, body) if cpp else body
    # callees
    callees = []
    KW = {"m", "if", "while", "for", "return", "sizeof", "switch", "do", "else", "void", "s8", "u8", "s16", "u16", "s32", "u32", "s64", "u64", "f32", "f64"}
    for c in sorted(called - KW):
        if c == name or re.search(r"\(\s*%s\s*\*?\s*\)" % c, body):
            continue
        if c == "memcpy":
            decls.append("extern void *memcpy(void *, const void *, unsigned long);")
            continue
        if c == "memset":
            decls.append("extern void *memset(void *, int, unsigned long);")
            continue
        used = re.search(r"=\s*(\([^)]*\)\s*)?%s\s*\(" % c, body) or re.search(r"return\s+%s\s*\(" % c, body)
        rt = "s32" if used else "void"
        fv = re.search(r"(\w+)\s*=\s*(\([^)]*\)\s*)?%s\s*\(" % c, body)
        if fv and re.search(r"\bf64\s+%s\b" % fv.group(1), body):
            rt = "f64"
        elif fv and re.search(r"\bf32\s+%s\b" % fv.group(1), body):
            rt = "f32"
        callees.append((c, rt))
        if not cpp:
            decls.append(f"{rt} {c}();")
    if cpp:
        r = cpp_protos(body, callees, variadic_callees(asm))
        if r is None:
            return None
        body, pdecls = r
        decls = decls + pdecls + vdecls
        body = re.sub(r"\(void \*\)(lbl_\w+)", r"\1", body)
    lines = [l for l in body.strip("\n").split("\n")]
    while lines and not lines[0].strip(): lines.pop(0)
    while lines and not lines[-1].strip(): lines.pop()
    out = []
    for l in lines:
        n = len(l) - len(l.lstrip(" "))
        out.append(" " * (n * 2) + l.strip() if l.strip() else "")
    # drop a blank line separating locals from code only if no locals
    body = "\n".join(out)
    code = "\n".join(decls) + ("\n\n" if decls else "") + f"{ret} {name}({params}) {{\n{body}\n}}\n"
    if cpp:
        code = 'extern "C" {\n' + code + '}\n'
    job = {"unit": unit, "fn": name, "code": code}
    ctorized = False
    if name in REPLACE or cxx.load(cxx.RENAMES).get(name) in REPLACE:
        job["replace"] = True
    # constructors with base/member sub-objects: real C++ ctor definition (exception entries need it)
    asm_path = f"{ROOT}/build/GHYE6S/asm/{unit}.s"
    if os.path.exists(asm_path):
        acts = ctorfix.actions_of(open(asm_path).read(), cxx.load(cxx.RENAMES).get(name, name))
        if any(t in ("DESTROYBASE", "DESTROYMEMBER") for t, _, _ in acts):
            if not cpp:
                code = 'extern "C" {\n' + code + '}\n'
            r = ctorfix.ctorize(code, name, acts)
            if r is not None:   # otherwise keep the plain job (e.g. a `new` whose inlined ctor adds a DESTROYBASE entry)
                code, job["sym"] = r
                job["code"] = code; cpp = True
                ctorized = True
    if cpp:
        job["cpp"] = True
    alts = []
    a = re.sub(r"\(s32 \*\)", "(u32 *)", code)
    if a != code: alts.append(a)
    b = re.sub(r"\*\(s32 \*\)(\([^()]*\)) ([!=]=) 0\b", r"*(void **)\1 \2 NULL", code)
    if b != code and b not in alts: alts.append(b)
    c = code.replace("s32", "u32")
    if c != code and c not in alts: alts.append(c)
    # reversed declaration order of stack locals (MWCC assigns slots by declaration order)
    m = re.search(r"\{\n((?:    [\w ]+\*? *(?:local|auStack)_\w+(?:\s*\[\w+\])?;\n){2,})", code)
    if m:
        decl = m.group(1).splitlines(True)
        r = code.replace(m.group(1), "".join(reversed(decl)))
        alts.append(r)
        if c != code: alts.append(r.replace("s32", "u32"))
    # Ghidra sizes stack arrays from the frame layout: try them as scalars passed by address
    arrs = re.findall(r"^    ([\w ]+?) (local_\w+) ?\[\d+\];$", code, re.M)
    if arrs:
        for base in [code] + ([c] if c != code else []):
            a3 = base
            for t, v in arrs:
                a3 = re.sub(r"^    ([\w ]+?) %s ?\[\d+\];$" % v, r"    \1 %s;" % v, a3, flags=re.M)
                a3 = re.sub(r"\b%s\[0\]" % v, v, a3)
                a3 = re.sub(r"(?<![&\w])%s\b(?!\s*[\[;])" % v, "&" + v, a3)
                a3 = re.sub(r"^(    [\w ]+? )&(%s;)$" % v, r"\1\2", a3, flags=re.M)
            if a3 != base and a3 not in alts: alts.append(a3)
    # comparison operand order is preserved by MWCC: try swapped comparisons (all, then one at a time)
    FLIP = {"<": ">", ">": "<", "<=": ">=", ">=": "<=", "==": "==", "!=": "!="}
    cre = re.compile(r"(?<=[(&|] )?(?<=\()((?:\*?\([\w *]+\))?[\w.\[\]]+(?: \+ 0x[0-9a-f]+\))?|\*\([\w *]+\)\([^()]*\)) (<=|>=|==|!=|<|>) ((?:\*?\([\w *]+\))?[\w.\[\]]+|\*\([\w *]+\)\([^()]*\))(?=\))")
    cmps = list(cre.finditer(code))
    if cmps and len(cmps) <= 6:
        def flip(mm): return "%s %s %s" % (mm.group(3), FLIP[mm.group(2)], mm.group(1))
        allf = cre.sub(flip, code)
        if allf != code and allf not in alts: alts.append(allf)
        if len(cmps) > 1:
            for mm in cmps:
                one = code[:mm.start()] + flip(mm) + code[mm.end():]
                if one not in alts: alts.append(one)
    # if/else with the branches the other way round (single comparison, simple bodies)
    INV = {"==": "!=", "!=": "==", "<": ">=", ">=": "<", ">": "<=", "<=": ">"}
    for mm in re.finditer(r"(\n(    +)if \(([^()\n]*(?:\([^()\n]*\))?[^()\n]*?) (==|!=|<=|>=|<|>) ([^()\n]*(?:\([^()\n]*\))?[^()\n]*?)\) \{\n)((?:\2    [^\n]*\n)+)\2\}\n\2else \{\n((?:\2    [^\n]*\n)+)\2\}\n", code):
        ind = mm.group(2)
        inv = "\n%sif (%s %s %s) {\n%s%s}\n%selse {\n%s%s}\n" % (ind, mm.group(3), INV[mm.group(4)], mm.group(5), mm.group(7), ind, ind, mm.group(6), ind)
        a5 = code[:mm.start()] + inv + code[mm.end():]
        if a5 not in alts: alts.append(a5)
    # word-sized stack arrays that are really one or two words
    for mm in re.finditer(r"^(    [su]32\*? (?:local|auStack)_\w+ ?\[)(\d+)(\];)$", code, re.M):
        for k in ("1", "2"):
            if k != mm.group(2):
                a9 = code[:mm.start()] + mm.group(1) + k + mm.group(3) + code[mm.end():]
                if a9 not in alts: alts.append(a9)
    # Ghidra hoists a load into a temporary: t = A; X = B; Y = t;  ->  X = B; Y = A;
    for mm in re.finditer(r"\n(\s+)(\w+) = ([^;\n]+);\n\1([^;\n]+) = ([^;\n]+);\n\1([^;\n]+) = \2;\n", code):
        if len(re.findall(r"\b%s\b" % mm.group(2), code)) == 3:
            a10 = code[:mm.start()] + "\n%s%s = %s;\n%s%s = %s;\n" % (mm.group(1), mm.group(4), mm.group(5), mm.group(1), mm.group(6), mm.group(3)) + code[mm.end():]
            if a10 not in alts: alts.append(a10)
    # two adjacent word copies are an 8-byte struct copy (MWCC: lwz, lwz, stw, stw)
    def loc(e):
        e = e.strip()
        m1 = re.fullmatch(r"(\w+)\[(0x[0-9a-f]+|\d+)\]", e)
        if m1: return m1.group(1), 4 * int(m1.group(2), 0), "idx"
        m1 = re.fullmatch(r"\*\([su]32 \*\)\((\w+) \+ (0x[0-9a-f]+|\d+)\)", e)
        if m1: return m1.group(1), int(m1.group(2), 0), "ptr"
        m1 = re.fullmatch(r"\*(\w+)", e)
        if m1: return m1.group(1), 0, "idx"
        return None
    def addr(base, off, kind):
        return "(u8 *)%s + %#x" % (base, off) if kind == "idx" else "%s + %#x" % (base, off)
    for src_code in [code] + [a for a in alts if "= *(" in a][:6]:
        for mm in re.finditer(r"\n(\s+)([^=\n;]+) = ([^=\n;]+);\n\1([^=\n;]+) = ([^=\n;]+);\n", src_code):
            d1, s1, d2, s2 = loc(mm.group(2)), loc(mm.group(3)), loc(mm.group(4)), loc(mm.group(5))
            if not (d1 and s1 and d2 and s2): continue
            if d1[0] != d2[0] or s1[0] != s2[0] or d2[1] - d1[1] != 4 or s2[1] - s1[1] != 4: continue
            cp = "\n%s*(Copy8 *)(%s) = *(Copy8 *)(%s);\n" % (mm.group(1), addr(*d1), addr(*s1))
            a12 = src_code[:mm.start()] + cp + src_code[mm.end():]
            a12 = re.sub(r"^((?:extern|void|s32|u32)[^\n]*\n|\n)*", lambda h: h.group(0), a12, count=1)
            fdef = re.search(r"^\S[^\n]*\b%s\(" % re.escape(name), a12, re.M)
            if fdef: a12 = a12[:fdef.start()] + ("typedef struct { u8 b[8]; } Copy8;\n\n" if cpp else "typedef struct { u32 w0, w1; } Copy8;\n\n") + a12[fdef.start():]
            if a12 not in alts: alts.append(a12)
    # the tested value is also passed on as the call's last argument
    for mm in re.finditer(r"if \(([^()\n]*(?:\([^()\n]*\))?[^()\n]*?) != 0\) \{\n(\s*)((?:\w+ = )?)(\w+)\(([^;\n]*)\);", code):
        if mm.group(5).strip():
            a11 = code[:mm.start()] + "if (%s != 0) {\n%s%s%s(%s, %s);" % (mm.group(1), mm.group(2), mm.group(3), mm.group(4), mm.group(5), mm.group(1)) + code[mm.end():]
            if a11 not in alts: alts.append(a11)
    # integer bounds written the other way (x < N  <->  x <= N-1, x > N <-> x >= N+1)
    def bound(mm):
        a, op, n = mm.group(1), mm.group(2), int(mm.group(3), 0)
        nop, nn = {"<": ("<=", n - 1), "<=": ("<", n + 1), ">": (">=", n + 1), ">=": (">", n - 1)}[op]
        return "%s %s %s" % (a, nop, hex(nn) if nn > 9 else nn)
    bre = re.compile(r"(\S+) (<=|>=|<|>) (0x[0-9a-f]+|\d+)(?=\))")
    for mm in list(bre.finditer(code))[:4]:
        a6 = code[:mm.start()] + bound(mm) + code[mm.end():]
        if a6 not in alts: alts.append(a6)
    # multiplication operand order
    for mm in list(re.finditer(r"(\b\w+) \* (\w+\b)", code))[:3]:
        a7 = code[:mm.start()] + "%s * %s" % (mm.group(2), mm.group(1)) + code[mm.end():]
        if a7 not in alts: alts.append(a7)
    # zero-argument call after a compound test: the tested pointer may be any of the != 0 clauses
    for mm in re.finditer(r"if \((\(.*\))\) \{\n(\s*)(\w+)\(\);", code):
        for cl in re.findall(r"\(([^()&|]*(?:\([^()]*\))?[^()&|]*?) != 0\)", mm.group(1))[:3]:
            a8 = code[:mm.start()] + "if (%s) {\n%s%s(%s);" % (mm.group(1), mm.group(2), mm.group(3), cl) + code[mm.end():]
            if a8 not in alts: alts.append(a8)
    # Ghidra's raw stack buffers (auStack_N) are often oversized
    bufs = re.findall(r"^    u8 (auStack_\w+) ?\[(\d+)\];$", code, re.M)
    for v, n in bufs:
        n = int(n)
        for m2 in sorted({4, 8, n - 8, n // 2} - {n}):
            if m2 <= 0: continue
            a4 = re.sub(r"^    u8 %s ?\[\d+\];$" % v, "    u8 %s[%d];" % (v, m2), code, flags=re.M)
            if a4 not in alts: alts.append(a4)
    # pass-through arguments Ghidra dropped: thread the first k parameters into zero-argument calls
    if not cpp:
        msig = re.search(r"^(\S[^\n(]*\b%s)\(([^)]*)\) \{" % re.escape(name), code, re.M)
        zero = re.findall(r"\b(fn_[0-9A-F]{8}|\w+__\w+|dtor_[0-9A-F]{8})\(\);", code)
        if msig and zero:
            have = [] if msig.group(2).strip() == "void" else [x.strip() for x in msig.group(2).split(",")]
            for k in (1, 2, 3):
                ps = list(have)
                while len(ps) < k: ps.append("s32 param_%d" % (len(ps) + 1))
                names = [re.split(r"[\s*]+", x)[-1] for x in ps[:k]]
                head, body2 = code[:msig.start()], code[msig.end():]
                body2 = re.sub(r"\b(fn_[0-9A-F]{8}|\w+__\w+|dtor_[0-9A-F]{8})\(\);", lambda m: "%s(%s);" % (m.group(1), ", ".join(names)), body2)
                a2 = head + "%s(%s) {" % (msig.group(1), ", ".join(ps)) + body2
                if a2 != code and a2 not in alts: alts.append(a2)
    # every variant also with unsigned/pointer-style types (cmplwi), since that need is independent
    for a in list(alts):
        au = a.replace("s32", "u32")
        if au != a and au not in alts: alts.append(au)

    # --- patterns learned from near-miss work (put first so the 80-alternate cap never drops them) ---
    front = []
    def balanced_end(t, i):
        d = 0
        for k in range(i, len(t)):
            d += t[k] == "("; d -= t[k] == ")"
            if d == 0: return k + 1
        return -1
    def padfix(c):
        """((VCall_X *)((T *)(EXPR + 0xOFF)))->m  ==>  ((VCall_X *)(EXPR))->m with the vptr at offset OFF:
        the call's `this` is the whole object, not the sub-object holding the vtable pointer."""
        offs = {}; out = c; pos = 0; changed = False
        pat = re.compile(r"\(\((VCall_\w+) \*\)\(\((?:s32|u32|int|u8|s8) \*\)\(")
        while True:
            m = pat.search(out, pos)
            if not m: break
            a = m.end() - 1; b = balanced_end(out, a)
            mm = re.match(r"(.*) \+ (0x[0-9a-f]+|\d+)$", out[a + 1:b - 1], re.S)
            if not mm or out[b:b + 4] != "))->" or balanced_end(out, m.start()) != b + 2:
                pos = m.end(); continue
            offs.setdefault(m.group(1), set()).add(int(mm.group(2), 0))
            rep = "((%s *)(%s))->" % (m.group(1), mm.group(1))
            out = out[:m.start()] + rep + out[b + 4:]; pos = m.start() + len(rep); changed = True
        if not changed or any(len(v) != 1 for v in offs.values()): return None
        for nm, v in offs.items():
            off = next(iter(v))
            dm = re.search(r"struct %s \{ (char vptr_pad\[(0x[0-9a-f]+)\]; )?" % nm, out)
            if not dm: return None
            base = int(dm.group(2), 16) if dm.group(2) else 0
            out = out[:dm.start()] + "struct %s { char vptr_pad[%#x]; " % (nm, base + off) + out[dm.end():]
        return out
    def subobj(c):
        """if (p != -0xOFF)  ==>  if (p + 0xOFF != 0): an inlined member destructor's null test (addic.)"""
        c2 = re.sub(r"if \((\w+) != -(0x[0-9a-f]+|\d+)\) \{", r"if (\1 + \2 != 0) {", c)
        return c2 if c2 != c else None
    def modulo(c):
        c2 = re.sub(r"\b(\w+) - \(\1 / (\w+)\) \* \2\b", r"\1 % \2", c)
        return c2 if c2 != c else None
    def ternary(c):
        """x = a; if (x == 0) x = b;  ==>  x = (a != 0) ? a : b   (beq/b shape)"""
        c2 = re.sub(r"(\s+)(\w+) = ([^;\n]+);\n\s+if \(\2 == 0\) \{\n\s+\2 = ([^;\n]+);\n\s+\}", r"\1\2 = (\3 != 0) ? \3 : \4;", c)
        return c2 if c2 != c else None
    def delete_check(c):
        """`delete p` on a polymorphic pointer: the null test is emitted twice (beq; beq)"""
        c2 = re.sub(r"(\s+)if \((\w+) != 0\) \{\n(\s+)(\(\(VCall_\w+ \*\)\(\2\)\)->m\((?:\(u32\)\(1\)|1)\);)\n\s+\}",
                    r"\1if (\2 != 0) {\n\3if (\2 != 0) {\n\3    \4\n\3}\n\1}", c)
        return c2 if c2 != c else None
    def fneg(c):
        """float `a < b` written as `!(a >= b)` (cror eq,gt,eq)"""
        c2 = re.sub(r"\((\*\(f32 \*\)\([^()]*\)) < (\w+)\)", r"!(\1 >= \2)", c)
        return c2 if c2 != c else None
    def loopinit(c):
        """offset = 0; for (i = 0; ...)  ==>  i = 0; offset = 0; for (; ...)   (counter register initialised first)"""
        c2 = re.sub(r"(\s+)(\w+) = 0;\n(\s+)for \((\w+) = 0; ", r"\1\4 = 0;\1\2 = 0;\3for (; ", c)
        return c2 if c2 != c else None
    def loopvars(c):
        """a second loop reusing the first loop's counter/offset gets its own variables (separate li/li inits)"""
        m = list(re.finditer(r"(\s+)(\w+) = 0;\n\s+for \((\w+) = 0; ", c))
        if len(m) < 2: return None
        out = c; decl_add = []
        for k, mm in enumerate(m[1:], start=2):
            off, cnt = mm.group(2), mm.group(3)
            no, nc = "%s_%d" % (off, k), "%s_%d" % (cnt, k)
            # find the loop body extent: from the for to its closing brace
            fs = out.find("for (%s = 0; " % cnt, out.find("%s = 0;" % off))
            if fs < 0: return None
            bs = out.find("{", fs); depth, e = 0, bs
            while e < len(out):
                depth += out[e] == "{"; depth -= out[e] == "}"
                if depth == 0: break
                e += 1
            seg = out[mm.start():e + 1]
            seg2 = re.sub(r"\b%s\b" % off, no, seg); seg2 = re.sub(r"\b%s\b" % cnt, nc, seg2)
            out = out[:mm.start()] + seg2 + out[e + 1:]
            for v, nv in ((off, no), (cnt, nc)):
                dm = re.search(r"^(    [\w ]+?) %s;$" % v, out, re.M)
                if dm: decl_add.append("%s %s;" % (dm.group(1), nv))
        if not decl_add: return None
        dm = list(re.finditer(r"^    [\w ]+? \*?\w+;$", out, re.M))
        if not dm: return None
        last = dm[-1]
        return out[:last.end()] + "\n" + "\n".join(decl_add) + out[last.end():]
    def inline_vcall(c):
        """v = ((VCall*)x)->m(...); f(..., v, ...)  ==>  f(..., ((VCall*)x)->m(...), ...): the result goes straight
        to its argument register instead of through a temp (mr r4, r3 instead of mr r0, r3; mr r4, r0)"""
        m = re.search(r"\n(\s+)(\w+) = (\(\(VCall_\w+ \*\)\([^\n]*\)\)->m\([^\n]*\));\n\1((?:\w+ = )?[\w>()\* -]+\()([^\n]*)\);", c)
        if not m: return None
        v, call, args = m.group(2), m.group(3), m.group(5)
        if len(re.findall(r"\b%s\b" % v, c)) != 2 or not re.search(r"\(\w+\)\(%s\)" % v, args): return None
        new_args = re.sub(r"\((\w+)\)\(%s\)" % v, lambda mm: "(%s)(%s)" % (mm.group(1), call), args, count=1)
        return c[:m.start()] + "\n%s%s%s);" % (m.group(1), m.group(4), new_args) + c[m.end():]
    bases = [code]
    pf = padfix(code)
    if pf: front.append(pf); bases.append(pf)
    for b in list(bases):
        for f in (subobj, modulo, ternary, delete_check, fneg, loopvars, loopinit, inline_vcall):
            c2 = f(b)
            if c2: front.append(c2); bases.append(c2)
    for b in bases[1:]:
        au = b.replace("s32", "u32")
        if au != b: front.append(au)
    for f in front:
        if f != code and f not in alts: alts.insert(0, f)
    alts = front + [a for a in alts if a not in front]
    job["front"] = len(front)
    # local objects: the frame only bounds the size; try the neighbouring sizes first
    if "lobj" in code and not ctorized:
        front_sz = []
        for mm in re.finditer(r"struct (C\w+) \{ char pad\[(0x[0-9a-f]+|\d+)\]; \1\(", code):
            sz = int(mm.group(2), 0)
            for s2 in ((sz + 7) & ~7, sz & ~7, sz - 4, sz + 4, sz + 8, sz - 8):
                if s2 > 0 and s2 != sz:
                    a = code.replace(mm.group(0), mm.group(0).replace("[%s]" % mm.group(2), "[%#x]" % s2))
                    if a not in front_sz: front_sz.append(a)
        alts = front_sz + [a for a in alts if a not in front_sz]
    if alts and not ctorized: job["alts"] = alts[:80]
    return job


items = []
for path in sys.argv[1:]:
    d = json.load(open(path))
    def walk(o):
        if isinstance(o, dict):
            if "pseudocode" in o and "address" in o and isinstance(o.get("pseudocode"), str):
                items.append((o["procedure"]["name"] if o.get("procedure") else o["address"], o["pseudocode"]))
            for v in o.values():
                walk(v)
        elif isinstance(o, list):
            for v in o:
                walk(v)
    walk(d)
seen, jobs, skipped = set(), [], 0
for n, pc in items:
    if n in seen:
        continue
    seen.add(n)
    j = convert(n, pc)
    if j:
        jobs.append(j)
    else:
        skipped += 1
print(json.dumps(jobs, indent=1))
print(f"{len(jobs)} jobs, {skipped} skipped", file=sys.stderr)
