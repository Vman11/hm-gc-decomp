#!/usr/bin/env python3
"""ctorfix.py: turn a converted job for a constructor into a real C++ constructor definition.

A ctor in Ghidra's output looks like
    RT fn_X(T *param_1[, args]) { base_ctor([param_1,] bargs); *param_1 = lbl_VT; [member_ctor(param_1 + M);] body; return param_1; }
and the original object carries DESTROYBASE/DESTROYMEMBER exception entries, which only a real
    struct CX : CB { char pad[..]; CM m; CX(args); virtual void vfx(); };  CX::CX(args) : CB(bargs) { body }
reproduces.  `ctorize(code, name, actions)` -> (code, sym) or None.  `actions` = exception actions of the
function from the unit's asm comments: [(type, offset, dtor)]."""
import json, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cxx

HDR = re.compile(r"^([\w \*]+?)\s*\b(fn_[0-9A-F]{8}|__ct__\w+)\((.*?)\) \{\n", re.M)


def actions_of(asm_unit_text, fn):
    """Exception actions of fn from the dtk asm comments (extabindex order == function order)."""
    blocks = re.findall(r"/\*\n \* Flag values:.*?\*/", asm_unit_text, re.S)
    fns = re.findall(r"^\t\.4byte (\S+)\n\t\.4byte 0x[0-9A-Fa-f]+\n\t\.4byte \"@etb_\w+\"\n", asm_unit_text, re.M)
    idx = [i for i, f in enumerate(fns) if f == fn]
    if not idx or idx[0] >= len(blocks):
        return []
    out = []
    for m in re.finditer(r" \* Type: (\w+)\n(?: \* (?:Member|Local|Pointer): ([^\n]*)\n)?(?: \* Cond: [^\n]*\n)?(?: \* Dtor: \"(\w+)\")?", blocks[idx[0]]):
        off = m.group(2) or ""
        mo = re.match(r"0x([0-9A-Fa-f]+)\(r\d+\)", off)
        out.append((m.group(1), int(mo.group(1), 16) if mo else None, m.group(3)))
    return out


def ctorize(code, name, actions):
    bases = [(o, d) for t, o, d in actions if t == "DESTROYBASE"]
    members = [(o, d) for t, o, d in actions if t == "DESTROYMEMBER"]
    if not bases and not members:
        return None
    m = HDR.search(code)
    if not m:
        return None
    ret, params = m.group(1).strip(), [p.strip() for p in m.group(3).split(",") if p.strip() and p.strip() != "void"]
    if not params:
        return None
    this = re.split(r"[\s*]+", params[0])[-1]
    t0 = re.sub(r"\s*\w+$", "", params[0]).strip()
    scale = 4 if t0.endswith("32 *") else 2 if t0.endswith("16 *") else 1   # Ghidra pointer arithmetic unit
    body_start = m.end()
    end = code.rfind("\n}")
    body = code[body_start:end]
    head = code[:m.start()]
    lines = body.split("\n")
    # 1. base ctor: first call statement, this passed (or dropped by Ghidra)
    bdecl = []
    binit = ""
    if bases:
        bo, bd = bases[0]
        for i, l in enumerate(lines):
            if not l.strip(): continue
            mc = re.match(r"    (fn_\w+|__ct__\w+)\((.*)\);$", l)
            if not mc:
                return None   # the base ctor call must be the first statement
            if mc:
                args = [a.strip() for a in mc.group(2).split(",")] if mc.group(2).strip() else []
                if args and re.sub(r"^\(int\)\(|\)$", "", args[0]) == this: args = args[1:]
                elif args and re.search(r"\b%s\b" % this, args[0]):
                    return None   # first arg is a member/offset of this, not this itself
                elif args and re.match(r"^-?(0x[0-9a-f]+|\d+)$", args[0]):
                    return None   # constant first argument: not a constructor
                ptypes = ["int"] * len(args)
                try:
                    bcls, _ = cxx.register_ctor(mc.group(1), ptypes, bd)
                except ValueError:
                    return None
                bdecl.append(("%s", bcls, ptypes))   # filled in once the vptr offset is known
                binit = " : %s(%s)" % (bcls, ", ".join(args))
                lines.pop(i)
                break
        else:
            return None
    # 2. own vtable store: *this = lbl / this[k] = lbl / *(u32 **)this = lbl  (first store of an lbl_ to this)
    vt, vtoff = None, None
    for i, l in enumerate(lines):
        mv = re.match(r"\s*(?:\*\(?[\w ]*\*+\)?\(?)?%s(?:\)| \+ (0x[0-9a-f]+|\d+)\)|\[(\d+)\])? = \((?:u32|u8 \*|u32 \*)\)(lbl_[0-9A-F]{8}|__vt__\w+);" % this, l) or \
             re.match(r"\s*\*%s = \((?:u32|u8 \*|u32 \*)\)(lbl_[0-9A-F]{8}|__vt__\w+);" % this, l)
        if mv:
            g = mv.groups()
            vt = g[-1]
            vtoff = int(g[0], 0) if len(g) > 1 and g[0] else (scale * int(g[1]) if len(g) > 2 and g[1] else 0)
            lines.pop(i); break
    cls = "C" + name.split("_")[-1]
    if bdecl:
        _, bcls, bptypes = bdecl[0]
        if vt is None or vtoff:   # non-polymorphic base of vtoff bytes (or unknown: 4)
            bdecl[0] = "struct %s { char pad[%#x]; %s(%s); ~%s(); };" % (bcls, vtoff or 4, bcls, ", ".join(bptypes) or "void", bcls)
        else:
            bdecl[0] = "struct %s { %s(%s); ~%s(); virtual void vf(); };" % (bcls, bcls, ", ".join(bptypes) or "void", bcls)
    if vt and vt.startswith("lbl_"):
        cxx.pending_rename(vt, "__vt__%d%s" % (len(cls), cls))
    # 3. member sub-objects: ctor(this + M) matching a DESTROYMEMBER offset
    mdecl, mfields = [], []
    for mo, md in sorted(members):
        for i, l in enumerate(lines):
            mc = re.match(r"\s*(fn_\w+|__ct__\w+)\(\(?(?:int\))?\(?(?:\(u32 \*\))?\(?%s \+ (0x[0-9a-f]+|\d+)\)?\)?\);$" % this, l) or \
                 re.match(r"\s*(fn_\w+|__ct__\w+)\(\(int\)\(%s \+ (0x[0-9a-f]+|\d+)\)\);$" % this, l)
            if mc and int(mc.group(2), 0) * scale == mo:
                try:
                    mcls, _ = cxx.register_ctor(mc.group(1), [], md)
                except ValueError:
                    return None
                mdecl.append("struct %s { char pad[4]; %s(); ~%s(); };" % (mcls, mcls, mcls))
                mfields.append((mo, mcls)); lines.pop(i); break
        else:
            return None
    # 4. drop `return this;`
    lines = [l for l in lines if l.strip() != "return %s;" % this]
    # 5. this-expressions
    body = "\n".join(lines)
    body = re.sub(r"\b%s\[(0x[0-9a-f]+|\d+)\]" % this, lambda mm: "(*(u32 *)((char *)this + %#x))" % (scale * int(mm.group(1), 0)), body)
    body = re.sub(r"(?<![\w)])\*%s\b" % this, "(*(u32 *)this)", body)
    body = re.sub(r"\(%s \+ (0x[0-9a-f]+|\d+)\)" % this, lambda mm: "((char *)this + %#x)" % (scale * int(mm.group(1), 0)), body)
    body = re.sub(r"\(int\)\(%s\)" % this, "(int)this", body)
    body = re.sub(r"\b%s\b" % this, "this", body)
    body = re.sub(r"= this;", "= (int)this;", body)
    ptypes = [re.sub(r"\s*\b\w+$", "", p).strip() for p in params[1:]]
    pnames = [re.split(r"[\s*]+", p)[-1] for p in params[1:]]
    try:
        _, sym = cxx.register_ctor(name, [{"s32": "int", "u32": "int"}.get(t, t) for t in ptypes])
    except ValueError:
        return None
    base_size = (vtoff or 4) if (vt is None or vtoff) else 4      # sizeof(base) as declared above
    fields, cur = [], ((bases[0][0] or 0) + base_size if bases else 0)
    if not bases:
        fields.append("char vptr[4];"); cur = 4
    for mo, mcls in mfields:
        if mo < cur: return None
        if mo > cur: fields.append("char pad%d[%#x];" % (len(fields), mo - cur))
        fields.append("%s m%d;" % (mcls, len(fields))); cur = mo + 4
    cdecl = "struct %s%s { %s %s(%s); %s};" % (cls, (" : " + bdecl[0].split()[1]) if bases else "",
                                                                 " ".join(fields), cls, ", ".join("%s %s" % (t, n) for t, n in zip(ptypes, pnames)) or "void",
                                                                 "virtual void vfx(); " if vt is not None else "")
    defn = "%s::%s(%s)%s {\n%s\n}\n" % (cls, cls, ", ".join("%s %s" % (t, n) for t, n in zip(ptypes, pnames)), binit, body)
    code = head.rstrip("\n") + "\n" + "\n".join(bdecl + mdecl + [cdecl]) + "\n\n" + defn + code[end + 2:]
    return code, sym


if __name__ == "__main__":
    print(ctorize(open(sys.argv[1]).read(), sys.argv[2], eval(sys.argv[3])))


DTOR_HDR = re.compile(r"^([\w \*]+?)\s*\b(dtor_[0-9A-F]{8}|__dt__\w+|fn_[0-9A-F]{8})\((\w[\w \*]*?)\b(\w+),\s*s16 (\w+)\) \{\n", re.M)


def dtorize(code, name):
    """RT __dt__X(this, s16 flag) { if (this) { [vptr store;] [member dtors;] [base_dtor(this, 0);]
    if (0 < flag) __dl__FPv(this); } return this; }   ->   CX::~CX() { body }  (compiler emits the rest)."""
    m = DTOR_HDR.search(code)
    if not m: return None
    this, flag = m.group(4), m.group(5)
    body_start = m.end(); end = code.rfind("\n}")
    body = code[body_start:end]
    head = code[:m.start()]
    t0 = m.group(3).strip(); scale = 4 if t0.endswith("32 *") else 1
    mb = re.match(r"\s*if \(%s != (?:0|\(\w+ \*\)0x0)\) \{\n(.*)\n\s*\}\n\s*return %s;\n?$" % (this, this), body, re.S)
    if not mb: return None
    inner = mb.group(1).split("\n")
    # tail: if (0 < flag) { __dl__FPv(this); }
    tail = "\n".join(inner[-3:])
    if not re.search(r"if \(0 < %s\) \{\n\s*__dl__FPv\((?:\(int\))?\(?%s\)?\);\n\s*\}" % (flag, this), tail): return None
    inner = inner[:-3]
    classes = cxx.load(cxx.CLASSES)
    me = next((k for k, v in classes.items() if v.get("dtor_name") == name or v.get("dtor") == name or k == name), None)
    cls = classes[me]["cls"] if me is not None else cxx.register_dtor(name)   # unregistered: a dtor-only class
    if cls is None: return None
    # own vptr reset (first store of a vtable into this)
    vt, vtoff = None, None
    for i, l in enumerate(inner):
        mv = re.match(r"\s*\*\(u8 \*\*\)\(%s \+ (0x[0-9a-f]+|\d+)\) = (lbl_[0-9A-F]{8}|__vt__\w+);" % this, l) or \
             re.match(r"\s*\*\(u8 \*\*\)\(?%s\)? = (lbl_[0-9A-F]{8}|__vt__\w+);" % this, l)
        if mv:
            g = mv.groups(); vt = g[-1]; vtoff = int(g[0], 0) if len(g) > 1 else 0; inner.pop(i); break
    if vt and vt.startswith("lbl_"):
        cxx.pending_rename(vt, "__vt__%d%s" % (len(cls), cls))
    elif vt and vt.startswith("__vt__"):
        mv2 = re.match(r"__vt__\d+(C\w+)$", vt)
        if mv2 and mv2.group(1) != cls:   # the vtable belongs to another synthetic class (another ctor of the same class)
            other = mv2.group(1)
            taken = next((v for v in classes.values() if v["cls"] == other and v.get("dtor") not in (None, me, name)), None)
            if taken: return None
            cls = other
            newsym = "__dt__%d%sFv" % (len(cls), cls)
            if name != newsym:
                pend = cxx.load(cxx.PENDING); pend[name] = newsym; json.dump(pend, open(cxx.PENDING, "w"), indent=1)
                for k, v in classes.items():
                    if v["cls"] == other: v["dtor"] = me or name; v["dtor_name"] = newsym
                json.dump(classes, open(cxx.CLASSES, "w"), indent=1)
    # base dtor: last statement  base(this, 0)
    bdecl, bname = [], None
    if inner and re.match(r"\s*(fn_\w+|dtor_\w+|__dt__\w+)\((?:\(int\))?\(?%s\)?, ?(?:\(int\))?\(?0\)?\);$" % this, inner[-1]):
        bfn = re.match(r"\s*(\w+)\(", inner[-1]).group(1)
        bcls = cxx.register_dtor(bfn)
        if bcls is None: return None
        bname = bcls
        if vt is None or vtoff:
            bdecl.append("struct %s { char pad[%#x]; ~%s(); };" % (bcls, vtoff or 4, bcls))
        else:
            bdecl.append("struct %s { ~%s(); virtual void vf(); };" % (bcls, bcls))
        inner = inner[:-1]
    body = "\n".join(inner)
    body = re.sub(r"\b%s\[(0x[0-9a-f]+|\d+)\]" % this, lambda mm: "(*(u32 *)((char *)this + %#x))" % (scale * int(mm.group(1), 0)), body)
    body = re.sub(r"\(%s \+ (0x[0-9a-f]+|\d+)\)" % this, lambda mm: "((char *)this + %#x)" % (scale * int(mm.group(1), 0)), body)
    body = re.sub(r"\(int\)\(%s\)" % this, "(int)this", body)
    body = re.sub(r"\b%s\b" % this, "this", body)
    body = re.sub(r"= this;", "= (int)this;", body)
    body = "\n".join(l[4:] if l.startswith("    ") else l for l in body.split("\n"))
    virt = "virtual void vfx(); " if vt is not None else ""
    cdecl = "struct %s%s { %s~%s(); %s};" % (cls, " : " + bname if bname else "", "" if bname else "char pad[4]; ", cls, virt)
    defn = "%s::~%s() {\n%s\n}\n" % (cls, cls, body)
    sym = "__dt__%d%sFv" % (len(cls), cls)
    return head.rstrip("\n") + "\n" + "\n".join(bdecl + [cdecl]) + "\n\n" + defn + code[end + 2:], sym
