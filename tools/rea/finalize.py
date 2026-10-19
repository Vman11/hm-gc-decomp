#!/usr/bin/env python3
"""finalize.py: after a batch, convert newly fully-matching NonMatching units to C++/-Cpp_exceptions on,
re-verify every converted unit from a clean full build (functions 100% + section layout == original), restore
the ones that don't hold, then link the rest under the main.dol checksum guard (link.py)."""
import json, os, re, shutil, subprocess, sys, tarfile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import layout
NO_LINK = "--no-link" in sys.argv

ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
S = os.path.dirname(os.path.abspath(__file__))
OD = "/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump"
SPL = "config/GHYE6S/splits.txt"
CPPRE = r'Object\((NonMatching|Matching), "(auto/text_[0-9A-F]+)\.cpp", extra_cflags'


def secs(p):
    out = subprocess.run([OD, "-h", p], capture_output=True, text=True).stdout
    r = {}
    for l in out.splitlines():
        m = re.match(r"\s*\d+\s+(\S+)\s+([0-9a-f]+)", l)
        if m and m.group(1) not in (".comment", ".mwcats.text", ".note.split") and int(m.group(2), 16):
            r[m.group(1)] = int(m.group(2), 16)
    return r


def detail(p):
    """Non-code section bytes and all relocations (local compiler labels normalized)."""
    secs_ = {}
    for blk in re.split(r"\nContents of section ", subprocess.run([OD, "-s", p], capture_output=True, text=True).stdout)[1:]:
        name, _, body = blk.partition(":\n")
        if name in (".text", ".comment", ".mwcats.text", ".note.split"): continue
        secs_[name] = "".join(l[6:41] for l in body.splitlines())
    rel, cur = [], None
    for l in subprocess.run([OD, "-r", p], capture_output=True, text=True).stdout.splitlines():
        m = re.match(r"RELOCATION RECORDS FOR \[(.*)\]", l)
        if m: cur = m.group(1); continue
        m = re.match(r"([0-9a-f]{8}) (\S+)\s+(\S+)", l)
        if m and cur not in (".comment", ".note.split"):
            sym = re.sub(r"^@.*?(\+0x[0-9a-f]+)?$", r"@\1", m.group(3))
            rel.append((cur, m.group(1), m.group(2), sym))
    return secs_, sorted(rel)


def full_build_units():
    subprocess.run(["ninja", "-k", "0"], capture_output=True)
    subprocess.run(["ninja", "-k", "0", "build/GHYE6S/report.json"], capture_output=True)
    return {u["name"][5:]: u for u in json.load(open("build/GHYE6S/report.json"))["units"]}


def verified(u, units):
    fs = units.get(u, {}).get("functions", [])
    obj = f"build/GHYE6S/src/{u}.o"
    return bool(fs) and os.path.exists(obj) and all(f.get("fuzzy_match_percent") == 100.0 for f in fs) \
        and layout.layout_ok(obj, f"build/GHYE6S/obj/{u}.o")[0]


snap_src, snap_cfg = {}, ""
units = full_build_units()
cfg = open("configure.py").read()
REJ = S + "/c2cpp_rejected.txt"
rejected = set(open(REJ).read().split()) if os.path.exists(REJ) else set()
cands = []
for m in re.finditer(r'Object\(NonMatching, "(auto/text_[0-9A-F]+)\.(c|cpp)"\)', cfg):
    u = m.group(1); fs = units.get(u, {}).get("functions", [])
    if fs and all(f.get("fuzzy_match_percent") == 100.0 for f in fs) and u not in rejected:
        cands.append(u)
print("fully matching NonMatching units:", len(cands))
if cands:
    snap_cfg, snap_spl = cfg, open(SPL).read()
    snap_src = {}
    for u in cands:
        for ext in ("c", "cpp"):
            if os.path.exists(f"src/{u}.{ext}"): snap_src[u] = (ext, open(f"src/{u}.{ext}").read())
    open(S + "/fin_cands.txt", "w").write("\n".join(cands))
    subprocess.run(["python3", S + "/c2cpp.py", S + "/fin_cands.txt", S + "/fin_ok.txt"])
    for u in cands:  # rebuild every candidate from scratch so no stale object can pass
        o = f"build/GHYE6S/src/{u}.o"
        if os.path.exists(o): os.remove(o)
    units = full_build_units()
    cfg, spl = open("configure.py").read(), open(SPL).read()
    restored = 0
    for u in cands:
        if re.search(r'"%s\.cpp", extra_cflags' % re.escape(u), cfg) and not verified(u, units):
            for ext in ("c", "cpp"):
                if os.path.exists(f"src/{u}.{ext}"): os.remove(f"src/{u}.{ext}")
            ext, txt = snap_src[u]; open(f"src/{u}.{ext}", "w").write(txt)
            old = re.search(r'Object\(\w+, "%s\.(?:c|cpp)"[^)]*\)' % re.escape(u), snap_cfg).group(0)
            cfg = re.sub(r'Object\(\w+, "%s\.(?:c|cpp)"[^)]*\)' % re.escape(u), old, cfg)
            spl = re.sub(r"\n%s\.(?:c|cpp):" % re.escape(u), f"\n{u}.{ext}:", spl)
            restored += 1
            rejected.add(u)
    open("configure.py", "w").write(cfg); open(SPL, "w").write(spl)
    cfg_now = open("configure.py").read()
    rejected |= {u for u in cands if not re.search(r'"%s\.cpp", extra_cflags' % re.escape(u), cfg_now)}
    open(REJ, "w").write("\n".join(sorted(rejected)))
    print("restored after clean-build check:", restored)
units = full_build_units()
cfg = open("configure.py").read()
link = [m.group(2) for m in re.finditer(CPPRE, cfg) if m.group(1) == "NonMatching" and verified(m.group(2), units)]
open(S + "/fin_link.txt", "w").write("\n".join(link))
if NO_LINK:
    print("verified, awaiting final link:", len(link))
    d = json.load(open("build/GHYE6S/report.json"))["measures"]
    print(f"{d['matched_functions']} / {d['total_functions']} funcs, {d['matched_code_percent']:.3f}% code")
    sys.exit(0)
subprocess.run(["python3", S + "/link.py", S + "/fin_link.txt", S + "/fin_linked.txt"])
linked = set(open(S + "/fin_linked.txt").read().split()) if os.path.exists(S + "/fin_linked.txt") else set()
unlinkable = [u for u in link if u not in linked and cands and u in snap_src]
if unlinkable:
    cfg, spl = open("configure.py").read(), open(SPL).read()
    for u in unlinkable:
        for ext in ("c", "cpp"):
            if os.path.exists(f"src/{u}.{ext}"): os.remove(f"src/{u}.{ext}")
        ext, txt = snap_src[u]; open(f"src/{u}.{ext}", "w").write(txt)
        old = re.search(r'Object\(\w+, "%s\.(?:c|cpp)"[^)]*\)' % re.escape(u), snap_cfg).group(0)
        cfg = re.sub(r'Object\(\w+, "%s\.(?:c|cpp)"[^)]*\)' % re.escape(u), old, cfg)
        spl = re.sub(r"\n%s\.(?:c|cpp):" % re.escape(u), f"\n{u}.{ext}:", spl)
        rejected.add(u)
    open("configure.py", "w").write(cfg); open(SPL, "w").write(spl)
    open(REJ, "w").write("\n".join(sorted(rejected)))
    subprocess.run(["ninja"], capture_output=True)
    print("restored unlinkable:", len(unlinkable))
d = json.load(open("build/GHYE6S/report.json"))["measures"]
print(f"{d['matched_functions']} / {d['total_functions']} funcs, {d['matched_code_percent']:.3f}% code")
