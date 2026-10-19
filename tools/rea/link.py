#!/usr/bin/env python3
"""link.py <units.txt> <linked_out.txt>: mark units Matching, keeping main.dol byte-identical to the original.
Links them all, then repeatedly finds the first byte where main.dol differs from orig main.dol, maps the address
to its unit via splits.txt and puts that unit back to NonMatching, until the checksum passes."""
import os, re, struct, subprocess, sys

ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
ORIG = "orig/GHYE6S/sys/main.dol"
units = open(sys.argv[1]).read().split()


def set_state(us, state):
    s = open("configure.py").read()
    for u in us:
        s = re.sub(r'Object\((?:Matching|NonMatching), "%s\.(c|cpp)"' % re.escape(u),
                   lambda m: 'Object(%s, "%s.%s"' % (state, u, m.group(1)), s)
    open("configure.py", "w").write(s)


def build():
    r = subprocess.run(["ninja"], capture_output=True, text=True)
    if r.returncode:
        err = [l for l in (r.stdout + r.stderr).splitlines() if "Error" in l or "error" in l or "FAILED" in l or "multiply" in l]
        print("ninja failed:", "\n".join(err[:8])); sys.stdout.flush()
    return r.returncode == 0, r.stdout


def dol_sections(path):
    h = open(path, "rb").read(0x100)
    offs = struct.unpack(">18I", h[0:72]); addrs = struct.unpack(">18I", h[72:144]); sizes = struct.unpack(">18I", h[144:216])
    return [(o, a, s) for o, a, s in zip(offs, addrs, sizes) if s]


def first_diff_addr():
    a, b = open(ORIG, "rb").read(), open("build/GHYE6S/main.dol", "rb").read()
    n = min(len(a), len(b))
    i = next((k for k in range(0, n, 4) if a[k:k + 4] != b[k:k + 4]), None)
    if i is None:
        if len(a) == len(b): return None
        # same prefix, different length: a section grew/shrank; report and attribute to the first differing section
        sa, sb = dol_sections(ORIG), dol_sections("build/GHYE6S/main.dol")
        print("DOL size %d vs %d; sections orig %s ours %s" % (len(a), len(b), [(hex(x), hex(z)) for _, x, z in sa], [(hex(x), hex(z)) for _, x, z in sb])); sys.stdout.flush()
        for (o1, a1, s1), (o2, a2, s2) in zip(sa, sb):
            if s1 != s2: return a1 + min(s1, s2)
        return -1
    for o, ad, s in dol_sections(ORIG):
        if o <= i < o + s:
            return ad + (i - o)
    if i < 0x100:  # the header differs: a section changed size/offset
        sa, sb = dol_sections(ORIG), dol_sections("build/GHYE6S/main.dol")
        print("DOL header differs at %#x; sections orig %s ours %s" % (i, [(hex(x), hex(z)) for _, x, z in sa], [(hex(x), hex(z)) for _, x, z in sb])); sys.stdout.flush()
        for (o1, a1, s1), (o2, a2, s2) in zip(sa, sb):
            if s1 != s2: return a1 + min(s1, s2)
    return -1


ranges = []  # (start, end, unit)
cur = None
for line in open("config/GHYE6S/splits.txt"):
    m = re.match(r"^(\S+)\.(c|cpp|s):\s*$", line)
    if m: cur = m.group(1); continue
    m = re.search(r"start:0x([0-9A-Fa-f]+) end:0x([0-9A-Fa-f]+)", line)
    if m and cur: ranges.append((int(m.group(1), 16), int(m.group(2), 16), cur))


def unit_at(addr):
    for s, e, u in ranges:
        if s <= addr < e: return u
    return None


# units whose claimed .data range (switch jump tables) starts at 4 mod 8 cannot link: the MW linker aligns every
# input .data section to 8 (the original object had the previous item of the same file in front)
_spl = open("config/GHYE6S/splits.txt").read()
_skip = []
for u in list(units):
    m = re.search(r"^%s\.c(?:pp)?:\n((?:\t.*\n)+)" % re.escape(u), _spl, re.M)
    d = m and re.search(r"\.data\s+start:0x([0-9A-F]+)", m.group(1))
    if d and int(d.group(1), 16) % 8 == 4:
        _skip.append(u)
if _skip:
    print("skipping %d units with 4-aligned jump tables: %s" % (len(_skip), " ".join(_skip))); sys.stdout.flush()
    units = [u for u in units if u not in _skip]
set_state(units, "NonMatching")
ok, _ = build()
assert ok, "build must be byte-identical before linking anything"
pending = set(units)
set_state(units, "Matching")
while True:
    ok, out = build()
    if ok:
        break
    addr = first_diff_addr()
    u = unit_at(addr) if addr not in (None, -1) else None
    if u not in pending:
        # can't attribute the difference (compile error or size change elsewhere): fall back to halving
        print("unattributed failure at", hex(addr) if addr else addr, "-> reverting all pending"); sys.stdout.flush()
        set_state(sorted(pending), "NonMatching"); pending.clear()
        assert build()[0]
        break
    print("cannot link", u, "(first difference at %#x)" % addr); sys.stdout.flush()
    set_state([u], "NonMatching"); pending.discard(u)
open(sys.argv[2], "w").write("\n".join(sorted(pending)))
print(f"linked {len(pending)} of {len(units)}; main.dol byte-identical")
