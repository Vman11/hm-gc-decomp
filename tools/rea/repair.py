#!/usr/bin/env python3
"""repair.py <unit>...: re-add declarations a unit lost (undefined identifiers reported by the compiler):
functions from symbols.txt get `void name();` (or `s32` when their result is used), data gets an extern of the
right section kind. Loops until the unit compiles or no progress."""
import os, re, shlex, subprocess, sys
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
WIBO = "/home/mi/.local/share/decompnet/toolchains/wibo/wibo"
MWCC = "/home/mi/.local/share/decompnet/toolchains/mwcc/{}/mwcceppc.exe"
SYM = {}
for l in open("config/GHYE6S/symbols.txt"):
    m = re.match(r"(\S+) = (\.\w+):0x([0-9A-F]+); // (.*)", l)
    if m: SYM[m.group(1)] = (m.group(2), m.group(4))
bn = open("build.ninja").read().replace("$\n", "")


def compile_unit(unit):
    m = re.search(r"^build (build/GHYE6S/src/%s.o): mwcc\s+(\S+).*?\n((?:  .*\n)+)" % re.escape(unit), bn, re.M)
    var = dict(re.findall(r"^  (\w+) = (.*)$", m.group(3), re.M))
    r = subprocess.run([WIBO, MWCC.format(var["mw_version"])] + shlex.split(var["cflags"]) + ["-c", m.group(2), "-o", var["basedir"]], capture_output=True, text=True)
    return r.returncode == 0, r.stdout + r.stderr, m.group(2)


for unit in sys.argv[1:]:
    added = []
    for _ in range(60):
        ok, log, src = compile_unit(unit)
        if ok: break
        mu = re.search(r"undefined identifier '(\w+)'", log)
        mc = re.search(r"^#\s+\d+:\s*(\w+)\(.*\n#\s+Error:.*\n#\s+call of non-function", log, re.M)
        if not mu and mc:
            text = open(src).read(); nm = mc.group(1)
            text = re.sub(r"^extern \w+ %s(?:\[[^\]]*\])?;\n" % re.escape(nm), "extern void (*%s)();\n" % nm, text, flags=re.M)
            open(src, "w").write(text); added.append("fnptr " + nm); continue
        if not mu: print(unit, "other error:", log[-400:]); break
        name = mu.group(1)
        if name not in SYM: print(unit, "unknown identifier", name); break
        sec, attrs = SYM[name]
        text = open(src).read()
        if sec == ".text":
            used = re.search(r"=\s*%s\s*\(|return\s+%s\s*\(|\(\s*%s\s*\(" % ((re.escape(name),) * 3), text)
            decl = ("s32 %s();" if used else "void %s();") % name
            if src.endswith(".cpp"): decl = decl.replace("();", "(...);")
        elif re.search(r"\b%s\s*\(" % re.escape(name), text):   # data symbol that is called: a function pointer
            decl = "extern void (*%s)();" % name
        else:
            sz = re.search(r"size:0x([0-9A-F]+)", attrs); sz = int(sz.group(1), 16) if sz else 4
            kind = "f32" if "data:float" in attrs else "u8" if sz > 4 else "u32"
            decl = "extern %s %s%s;" % (kind, name, "[%#x]" % sz if (sz > 4 and kind != "f32") else "")
        # insert after the #include block
        lines = text.split("\n"); k = 0
        while k < len(lines) and (lines[k].startswith(("//", "#include", "/*")) or not lines[k].strip()): k += 1
        lines.insert(k, decl); open(src, "w").write("\n".join(lines)); added.append(decl)
    print(unit, "ok" if ok else "FAILED", "added:", added)
