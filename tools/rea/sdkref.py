#!/usr/bin/env python3
"""sdkref.py <refdir> <out.json>: compile every .c of a Dolphin SDK reconstruction with our compiler (+ the
reference include dir), fingerprint each function (mnemonic sequence with relocatable operands blanked), and
match the fingerprints against the split asm of our not-yet-matched functions. Writes a JSON list of
(our fn, unit, ref function, ref file, exact) candidates."""
import glob, json, os, re, shlex, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
REF, OUT = os.path.abspath(sys.argv[1]), sys.argv[2]
WIBO = "/home/mi/.local/share/decompnet/toolchains/wibo/wibo"
MWCC = "/home/mi/.local/share/decompnet/toolchains/mwcc/GC/%s/mwcceppc.exe" % os.environ.get("REF_MW", "1.2.5n")
OD = "/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump"
# the reference tree's own release flags (Makefile), with our compiler
CF = ["-char", "unsigned", "-nodefaults", "-proc", "gekko", "-fp", "hard", "-Cpp_exceptions", "off", "-enum", "int", "-warn", "pragmas",
      "-requireprotos", "-pragma", "cats off", "-D__GEKKO__", "-DSDK_REVISION=2", "-O4,p", "-inline", "auto", "-DRELEASE",
      "-I-", "-Iinclude", "-Iinclude/libc", "-ir", "src"]
OBJ = os.path.join(os.path.dirname(os.path.abspath(OUT)), "refobj"); os.makedirs(OBJ, exist_ok=True)


REG = re.compile(r"^(r\d+|f\d+|cr\d|lt|gt|eq|so|qr\d)$")


def norm(ins):
    """mnemonic + operand shape: registers kept, every immediate/symbol/label blanked, no whitespace."""
    out = []
    for mn, ops in ins:
        ops = re.sub(r"<[^>]*>", "", ops).replace(" ", "")
        toks = re.split(r"([,()])", ops)
        toks = [t if (t in (",", "(", ")", "") or REG.match(t)) else "S" for t in toks]
        out.append(mn + "".join(toks))
    return tuple(out)


def compile_ref(src):
    obj = os.path.join(OBJ, os.path.relpath(src, REF).replace("/", "__")[:-2] + ".o")
    cmd = [WIBO, MWCC] + CF + ["-c", os.path.relpath(src, REF), "-o", obj]
    r = subprocess.run(cmd, capture_output=True, text=True, cwd=REF)
    if r.returncode or not os.path.exists(obj):
        return src, None
    d = subprocess.run([OD, "-d", "-r", obj], capture_output=True, text=True).stdout
    fns, cur = {}, None
    for l in d.splitlines():
        mh = re.match(r"^[0-9a-f]+ <(.+)>:$", l)
        if mh: cur = mh.group(1); fns[cur] = []; continue
        mi = re.match(r"^\s*[0-9a-f]+:\s+(?:[0-9a-f]{2} ){4}\s*(\S+)\s*(.*)$", l)
        if mi and cur: fns[cur].append((mi.group(1), mi.group(2)))
    return src, {k: norm(v) for k, v in fns.items() if v}


srcs = sorted(glob.glob(REF + "/src/**/*.c", recursive=True))
ref = {}
ok = 0
with ThreadPoolExecutor(6) as ex:
    for src, fns in ex.map(compile_ref, srcs):
        if fns is None: continue
        ok += 1
        for k, v in fns.items():
            ref.setdefault(v, []).append((k, os.path.relpath(src, REF)))
print("reference files compiled:", ok, "of", len(srcs), "fingerprints:", len(ref), file=sys.stderr)

# our side: every function not yet 100%, fingerprint from the split asm
d = json.load(open("build/GHYE6S/report.json"))
cands = []
for u in d["units"]:
    unit = u["name"][5:]
    p = f"build/GHYE6S/asm/{unit}.s"
    if not os.path.exists(p): continue
    s = open(p).read()
    for f in u.get("functions", []):
        if f.get("fuzzy_match_percent") == 100.0: continue
        mm = re.search(r"^\.fn %s,.*?^\.endfn" % re.escape(f["name"]), s, re.S | re.M)
        if not mm: continue
        ins = []
        for l in mm.group(0).splitlines():
            if not l.startswith("/*"): continue
            t = l.split("*/", 1)[1].strip().split(None, 1)
            if t: ins.append((t[0], t[1] if len(t) > 1 else ""))
        key = norm(ins)
        if len(key) < 8: continue   # tiny functions have ambiguous shapes
        if key in ref and len({r[0] for r in ref[key]}) == 1:
            for rn, rf in ref[key]:
                cands.append({"fn": f["name"], "unit": unit, "size": int(f["size"]), "ref": rn, "file": rf, "exact": True})
json.dump(cands, open(OUT, "w"), indent=1)
print("matches:", len(cands), "unique our fns:", len({c["fn"] for c in cands}), file=sys.stderr)
