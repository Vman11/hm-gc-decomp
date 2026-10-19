#!/usr/bin/env python3
"""cxx.py: synthetic C++ classes for new-expressions (the original objects carry exception-table entries
for every `new T(...)`, which only a real new expression reproduces).

  cxx.py ctor <fn> [ptype ...]   register <fn> as the constructor of class C<addr> (pending rename)
  cxx.py apply                   apply pending renames (symbols.txt, src/auto, tools/rea/best, renames.json),
                                 then re-split so the target objects carry the new names
  cxx.py decl <fn> <size>        print the class declaration for a registered constructor

Registry: tools/rea/classes.json  {fn: {"cls": "C8018E150", "ptypes": ["int"], "name": "__ct__9C8018E150Fi"}}
Renames : tools/rea/renames.json  {old: new}  (applied by conv.py to REA pseudocode)
Pending : tools/rea/pending_renames.json"""
import json, os, re, subprocess, sys, glob
S = os.path.dirname(os.path.abspath(__file__))
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"
CLASSES = S + "/classes.json"; RENAMES = S + "/renames.json"; PENDING = S + "/pending_renames.json"
MANGLE = {"void": "v", "int": "i", "unsigned int": "Ui", "u32": "Ul", "s32": "l", "unsigned long": "Ul", "long": "l",
          "f32": "f", "float": "f", "f64": "d", "double": "d", "u8": "Uc", "s8": "c", "char": "c",
          "u16": "Us", "s16": "s", "short": "s", "unsigned short": "Us"}


def load(p, d=None):
    return json.load(open(p)) if os.path.exists(p) else (d if d is not None else {})


def mangle_type(t):
    t = t.strip()
    if t.endswith("*"):
        return "P" + mangle_type(t[:-1])
    if t.startswith("const "):
        return "C" + mangle_type(t[6:])
    return MANGLE[t]


def ctor_name(cls, ptypes):
    return "__ct__%d%sF%s" % (len(cls), cls, "".join(mangle_type(t) for t in ptypes) or "v")


def register_ctor(fn, ptypes, dtor=None):
    """Register fn as a constructor (and dtor as the class destructor); returns (cls, name).
    Pending renames are recorded on first use."""
    classes = load(CLASSES)
    if fn.startswith("__ct__"):  # already renamed: look the class up by its mangled name
        fn = next((k for k, v in classes.items() if v["name"] == fn), fn)
    pend = load(PENDING)
    if fn in classes:
        c = classes[fn]
        if list(ptypes) != c["ptypes"]:
            raise ValueError("%s already registered with %s" % (fn, c["ptypes"]))
    else:
        cls = "C" + fn.split("_")[-1]
        c = classes[fn] = {"cls": cls, "ptypes": list(ptypes), "name": ctor_name(cls, ptypes)}
        pend[fn] = c["name"]
    if dtor and not dtor.startswith("__dt__"):
        dname = "__dt__%d%sFv" % (len(c["cls"]), c["cls"])
        if c.get("dtor") not in (None, dtor):
            raise ValueError("%s already has dtor %s" % (fn, c["dtor"]))
        if "dtor" not in c:
            c["dtor"] = dtor; c["dtor_name"] = dname; pend[dtor] = dname
    json.dump(classes, open(CLASSES, "w"), indent=1)
    json.dump(pend, open(PENDING, "w"), indent=1)
    return c["cls"], c["name"]


def register_dtor(fn):
    """Class for a destructor symbol: the registered class whose dtor it is, or a new class named after it."""
    classes = load(CLASSES)
    for k, v in classes.items():
        if v.get("dtor") == fn or v.get("dtor_name") == fn: return v["cls"]
    if fn.startswith("__dt__"):
        m = re.match(r"__dt__\d+(C\w+?)Fv$", fn); return m.group(1) if m else None
    cls = "C" + fn.split("_")[-1]
    if any(v["cls"] == cls for v in classes.values()): return None
    classes[fn] = {"cls": cls, "ptypes": [], "name": "__ct__%d%sFv" % (len(cls), cls), "dtor": fn, "dtor_name": "__dt__%d%sFv" % (len(cls), cls), "dtor_only": True}
    json.dump(classes, open(CLASSES, "w"), indent=1)
    pend = load(PENDING); pend[fn] = "__dt__%d%sFv" % (len(cls), cls); json.dump(pend, open(PENDING, "w"), indent=1)
    return cls


def pending_rename(old, new):
    pend = load(PENDING); ren = load(RENAMES)
    used = set(ren.values()) | set(pend.values())
    import re as _re
    taken = new in used or bool(_re.search(r"^%s = " % _re.escape(new), open(ROOT + "/config/GHYE6S/symbols.txt").read(), _re.M))
    if old in ren or old in pend or taken or old.startswith("__"):
        return False   # already renamed, or the target name is taken: never alias two symbols
    pend[old] = new
    json.dump(pend, open(PENDING, "w"), indent=1)
    return True


def decl(fn, size):
    c = load(CLASSES)[fn]
    return "struct %s { char pad[%#x]; %s(%s); };" % (c["cls"], size, c["cls"], ", ".join(c["ptypes"]) or "void")


def apply():
    pend = load(PENDING)
    if not pend:
        print("nothing pending"); return
    os.chdir(ROOT)
    sym = open("config/GHYE6S/symbols.txt").read()
    skipped = set()
    for old, new in pend.items():
        sym, n = re.subn(r"^%s = " % re.escape(old), new + " = ", sym, flags=re.M)
        if n != 1:
            print("warning: symbol %s not found exactly once in symbols.txt; skipped" % old); skipped.add(old)
    open("config/GHYE6S/symbols.txt", "w").write(sym)
    pend = {k: v for k, v in pend.items() if k not in skipped}
    files = glob.glob("src/auto/*.c") + glob.glob("src/auto/*.cpp") + glob.glob(S + "/best/*.c")
    pat = re.compile(r"\b(%s)\b" % "|".join(re.escape(o) for o in pend))
    for f in files:
        t = open(f).read()
        u = pat.sub(lambda m: pend[m.group(1)], t)
        if u != t:
            open(f, "w").write(u)
    ren = load(RENAMES); ren.update(pend)
    json.dump(ren, open(RENAMES, "w"), indent=1)
    os.remove(PENDING)
    r = subprocess.run(["ninja", "build/GHYE6S/config.json"], capture_output=True, text=True)
    print("applied %d renames; split: %s" % (len(pend), "ok" if r.returncode == 0 else r.stdout + r.stderr))


if __name__ == "__main__":
    cmd = sys.argv[1]
    if cmd == "ctor":
        print(register_ctor(sys.argv[2], sys.argv[3:]))
    elif cmd == "apply":
        apply()
    elif cmd == "rename":
        pending_rename(sys.argv[2], sys.argv[3])
    elif cmd == "decl":
        print(decl(sys.argv[2], int(sys.argv[3], 0)))
