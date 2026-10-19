"""ins.py: merge(code, orig) -> (code, orig): drops from the candidate the declarations the unit already has
(one-line struct declarations, identical extern/prototype lines) and drops from the unit the prototypes that
conflict with the candidate's (same function, different signature: the candidate's exact prototype wins)."""
import re
PROTO = re.compile(r"^(?:extern )?[\w \*]+?\b(\w+)\s*\(([^;{]*)\);\s*$")


def merge(code, orig):
    out, cand = [], {}
    unit_protos = {m.group(1) for m in (PROTO.match(x) for x in orig.split("\n") if x[:1] not in (" ", "\t")) if m}
    for l in code.split("\n"):
        m = PROTO.match(l) if l[:1] not in (" ", "\t") else None   # declarations sit at column 0; indented lines are statements
        if m and not l.startswith("extern "):
            if m.group(2).strip() in ("void", "") and m.group(1) in unit_protos:
                continue   # value-use declaration: the unit's real prototype serves
            cand[m.group(1)] = l
        ms = re.match(r"struct (\w+) \{", l)
        if ms and re.search(r"^struct %s \{" % ms.group(1), orig, re.M):
            continue
        if l[:1] not in (" ", "\t") and "=" not in l and re.match(r"(extern |void |int |s32 |u32 |f32 |f64 |u8 |s8 |u16 |s16 |char |float |double )[^{]*;\s*$", l) \
                and l.strip() and (l + "\n") in orig:
            continue
        out.append(l)
    defined = set(re.findall(r"^(?!\s)(?:static )?(?:const )?[A-Za-z_]\w*(?: \*+| )+(\w+)(?: ?\[[^\]]*\])? = ", code, re.M))
    # functions the candidate defines: the unit's prototypes for them go (the definition's signature wins)
    for m in re.finditer(r"^(?:extern \"C\" )?[\w \*:~]+?\b(\w+)\s*\([^;{]*\)\s*\{", code, re.M):
        cand.setdefault(m.group(1), "")
    olines = []
    for l in orig.split("\n"):
        if l.startswith("extern ") and (lambda m: m and m.group(1) in defined)(re.search(r"\b(\w+)(?: ?\[[^\]]*\])?;\s*$", l)):
            continue  # the candidate defines this global
        m = PROTO.match(l) if l[:1] not in (" ", "\t") else None
        if m and m.group(1) in cand and l.strip() != cand[m.group(1)].strip():
            continue  # conflicting prototype: the candidate declares it
        olines.append(l)
    return "\n".join(out), "\n".join(olines)


def dedup(code, orig):
    return merge(code, orig)[0]
