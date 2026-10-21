#!/usr/bin/env python3
"""Compile one file with SN Systems' ProDG (GCC for GameCube), for files configure.py builds with mw_version
"ProDG/<version>" (added by decomp.wtf: some games link libraries built with it, MusyX among them).

usage: prodg.py [wrapper] <ngccc.exe> <source> <object> <flags...>

ngccc reads its settings from the sn.ini next to it (SN_NGC_PATH) and writes its dependency file where it likes,
under a name of its own and with Windows paths in old versions: it runs in a folder of its own, and the .d file
ninja reads is written next to the object."""

import os
import re
import shutil
import subprocess
import sys
import tempfile

args = sys.argv[1:]
at = next(i for i, a in enumerate(args) if a.lower().endswith("ngccc.exe"))
run, src, out, flags = args[:at + 1], os.path.abspath(args[at + 1]), os.path.abspath(args[at + 2]), args[at + 3:]
run = [os.path.abspath(r) if os.path.exists(r) else r for r in run]  # it runs in another folder (wibo, ngccc.exe)
flags = [os.path.abspath(f) if i and flags[i - 1] == "-I" else f for i, f in enumerate(flags)]
env = dict(os.environ, SN_NGC_PATH=os.path.dirname(os.path.abspath(run[-1])))
with tempfile.TemporaryDirectory(prefix="prodg-") as tmp:
    obj = os.path.join(tmp, "out.o")
    code = subprocess.call([*run, *flags, "-MMD", "-c", src, "-o", obj], cwd=tmp, env=env)
    if code:
        sys.exit(code)
    os.makedirs(os.path.dirname(out), exist_ok=True)
    shutil.move(obj, out)
    deps = [src]
    for name in os.listdir(tmp):
        if name.endswith(".d"):
            with open(os.path.join(tmp, name), errors="replace") as f:
                text = f.read().replace("\\\n", " ")
            for dep in text.split(":", 1)[1].split() if ":" in text else []:
                if re.match(r"^\\[^\\]", dep) and os.name != "nt":  # \tmp\x.h: a Unix path wibo gave as Windows'
                    dep = dep.replace("\\", "/")
                deps.append(dep)
    with open(os.path.splitext(out)[0] + ".d", "w") as f:
        f.write(out.replace(" ", "\\ ") + ": " + " ".join(d.replace(" ", "\\ ") for d in dict.fromkeys(deps)) + "\n")
