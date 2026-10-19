#!/usr/bin/env python3
"""layout.py: section-layout comparison of our object against the original split object that tolerates weak
inline-function copies (MWCC emits an out-of-line copy of an inline ctor/dtor whose address is needed by the
exception table; the linker keeps one copy for the whole program, so the original unit object had it too but
the DOL split cannot show it).  The copies sit at the end of .text with their own extab/extabindex entries;
they are stripped before comparing.  `layout_ok(ours, target)` -> (ok, reason)."""
import re, subprocess
OD = "/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump"
SKIP = (".comment", ".mwcats.text", ".note.split")


def dump(p):
    secs = {}
    for blk in re.split(r"\nContents of section ", subprocess.run([OD, "-s", p], capture_output=True, text=True).stdout)[1:]:
        name, _, body = blk.partition(":\n")
        if name in SKIP: continue
        secs[name] = bytes.fromhex("".join(l[6:41] for l in body.splitlines()).replace(" ", ""))
    rel = {}
    cur = None
    for l in subprocess.run([OD, "-r", p], capture_output=True, text=True).stdout.splitlines():
        m = re.match(r"RELOCATION RECORDS FOR \[(.*)\]", l)
        if m: cur = m.group(1); continue
        m = re.match(r"([0-9a-f]{8}) (\S+)\s+(\S+)", l)
        if m and cur not in SKIP:
            rel.setdefault(cur, []).append((int(m.group(1), 16), m.group(2), m.group(3)))
    syms = []
    for l in subprocess.run([OD, "-t", p], capture_output=True, text=True).stdout.splitlines():
        m = re.match(r"([0-9a-f]{8}) (.{7}) (\S+)\s+([0-9a-f]{8}) (?:\.hidden )?(\S+)$", l)
        if m: syms.append((int(m.group(1), 16), "w" if "w" in m.group(2) else " ", "F" if "F" in m.group(2) else " ",
                           m.group(3), int(m.group(4), 16), m.group(5)))
    return secs, rel, syms


def norm(sym):
    sym = re.sub(r"^jumptable_[0-9A-F]+", "@", sym)   # dtk names switch tables; the compiler's are anonymous locals
    return re.sub(r"^@.*?(\+0x[0-9a-f]+)?$", r"@\1", sym)


def strip_weak(secs, rel, syms):
    """Drop trailing weak .text functions and their extab/extabindex entries. Returns (secs, rel) or None."""
    weak = sorted((a, z, n) for a, w, f, sec, z, n in syms if w == "w" and sec == ".text" and f == "F")
    if not weak:
        return secs, rel
    text = secs.get(".text", b"")
    cut = weak[0][0]
    if cut + sum(z for _, z, _ in weak) != len(text) or any(a < cut for a, _, _ in weak[1:]):
        return None  # not a trailing block
    names = {n for _, _, n in weak}
    secs = dict(secs); rel = {k: list(v) for k, v in rel.items()}
    secs[".text"] = text[:cut]
    rel[".text"] = [r for r in rel.get(".text", []) if r[0] < cut]
    # extabindex entries (12 bytes: function reloc at +0, size, extab object reloc at +8) of weak functions
    idx = rel.get("extabindex", [])
    drop_ext = set()
    keep = len(secs.get("extabindex", b""))
    for off, _, sym in idx:
        if off % 12 == 0 and sym in names:
            keep = min(keep, off)
            for o2, _, s2 in idx:
                if o2 == off + 8: drop_ext.add(s2.split("+")[0])
    if keep % 12 or any(off >= keep and sym not in names for off, _, sym in idx if off % 12 == 0):
        return None
    secs["extabindex"] = secs.get("extabindex", b"")[:keep]
    rel["extabindex"] = [r for r in idx if r[0] < keep]
    # the dropped extab objects must be trailing too
    objs = sorted((a, z, n) for a, w, f, sec, z, n in syms if sec == "extab" and n in drop_ext)
    if objs:
        ecut = objs[0][0]
        if ecut + sum(z for _, z, _ in objs) != len(secs.get("extab", b"")):
            return None
        secs["extab"] = secs["extab"][:ecut]
        rel["extab"] = [r for r in rel.get("extab", []) if r[0] < ecut]
    return secs, rel


def layout_ok(ours, target):
    so, ro, syo = dump(ours); st, rt, _ = dump(target)
    def view(secs, rel):
        return ({k: v for k, v in secs.items() if k != ".text"}, {k: len(v) for k, v in secs.items()},
                {k: sorted((o, t, norm(s)) for o, t, s in v) for k, v in rel.items() if v})
    if view(so, ro) == view(st, rt):
        return True, "identical"
    s = strip_weak(so, ro, syo)
    if s is None:
        return False, "layout differs"
    if view(*s) == view(st, rt):
        return True, "identical after stripping weak inline copies"
    return False, "layout differs (even after stripping weak copies)"


if __name__ == "__main__":
    import sys
    print(layout_ok(sys.argv[1], sys.argv[2]))
