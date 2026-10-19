#!/usr/bin/env python3
"""strfix.py <out.json>: replace inline string-literal call arguments in best/ near-misses with the sized
extern symbol of that string in the original binary (the compiler reuses one copy; relocations must point at it)."""
import glob, json, os, re, struct, sys
S = os.path.dirname(os.path.abspath(__file__))
BEST = S + "/best" if os.path.isdir(S + "/best") else "/tmp/claude-1000/-home-mi-Decomp-hauntedmansion-ghye6s/d3210fda-7b08-4893-af30-3fda1dc100c2/scratchpad/best"
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"
dol = open(ROOT + "/orig/GHYE6S/sys/main.dol", "rb").read()
offs = struct.unpack(">18I", dol[0:72]); addrs = struct.unpack(">18I", dol[72:144]); sizes = struct.unpack(">18I", dol[144:216])
def read(addr, n):
    for o, a, s in zip(offs, addrs, sizes):
        if s and a <= addr < a + s: return dol[o + addr - a: o + addr - a + n]
    return b""
strings = {}  # text -> (name, size)
for line in open(ROOT + "/config/GHYE6S/symbols.txt"):
    m = re.match(r"(\S+) = \.(?:rodata|data|sdata|sdata2):0x([0-9A-F]+); // type:object size:0x([0-9A-F]+) data:string", line)
    if m:
        a, sz = int(m.group(2), 16), int(m.group(3), 16)
        b = read(a, sz)
        txt = b.split(b"\0")[0].decode("latin1")
        strings.setdefault(txt, (m.group(1), sz))
def cesc(t):
    return t.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n").replace("\t", "\\t").replace("\r", "\\r")
LIT = re.compile(r'\(int\)\("((?:[^"\\]|\\.)*)"\)')
jobs = []
for f in sorted(glob.glob(BEST + "/*.c")):
    hdr, code = open(f).read().split("\n", 1)
    _, unit, fn, pct = hdr.split()
    lits = LIT.findall(code)
    if not lits: continue
    new, decls, ok = code, [], True
    for lit in sorted(set(lits)):
        raw = lit.encode().decode("unicode_escape")
        if raw not in strings: ok = False; break
        name, sz = strings[raw]
        new = new.replace('(int)("%s")' % lit, "(int)(%s)" % name)
        if not re.search(r"\bextern char %s\[" % name, new):
            decls.append("extern char %s[0x%x];" % (name, sz))
    if not ok: continue
    if decls:
        k = new.find("\n", new.find('extern "C" {')) + 1 if 'extern "C" {' in new else 0
        new = new[:k] + "\n".join(decls) + "\n" + new[k:]
    jobs.append(dict(unit=unit, fn=fn, code=new, cpp='extern "C"' in new or "virtual" in new, alts=[]))
json.dump(jobs, open(sys.argv[1], "w"))
print(len(jobs), "jobs")
