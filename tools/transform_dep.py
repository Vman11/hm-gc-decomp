#!/usr/bin/env python3

###
# Transforms .d files, converting Windows paths to Unix paths.
# Allows usage of the mwcc -MMD flag on platforms other than Windows.
#
# Usage:
#   python3 tools/transform_dep.py build/src/file.d build/src/file.d
#
# If changes are made, please submit a PR to
# https://github.com/encounter/dtk-template
###

import argparse
import sys
import os
from platform import uname

wineprefix = os.path.join(os.environ["HOME"], ".wine")
if "WINEPREFIX" in os.environ:
    wineprefix = os.environ["WINEPREFIX"]
winedevices = os.path.join(wineprefix, "dosdevices")


def in_wsl() -> bool:
    return "microsoft-standard" in uname().release


def import_d_file(in_file: str) -> str:
    out_text = ""

    with open(in_file) as file:
        for idx, line in enumerate(file):
            if idx == 0:
                if line.endswith(" \\\n"):
                    out_text += line[:-3].replace("\\", "/") + " \\\n"
                else:
                    out_text += line.replace("\\", "/")
            else:
                suffix = ""
                if line.endswith(" \\\n"):
                    suffix = " \\"
                    path = line.lstrip()[:-3]
                else:
                    path = line.strip()
                # lowercase drive letter
                path = path[0].lower() + path[1:]
                if path[0] == "z":
                    # shortcut for z:
                    path = path[2:].replace("\\", "/")
                elif in_wsl():
                    path = path[0:1] + path[2:]
                    path = os.path.join("/mnt", path.replace("\\", "/"))
                else:
                    # use $WINEPREFIX/dosdevices to resolve path
                    path = os.path.realpath(
                        os.path.join(winedevices, path.replace("\\", "/"))
                    )
                out_text += "\t" + path + suffix + "\n"

    return out_text


def main() -> None:
    parser = argparse.ArgumentParser(
        description="""Transform a .d file from Wine paths to normal paths"""
    )
    parser.add_argument(
        "d_file",
        help="""Dependency file in""",
    )
    parser.add_argument(
        "d_file_out",
        help="""Dependency file out""",
    )
    args = parser.parse_args()

    output = import_d_file(args.d_file)

    with open(args.d_file_out, "w", encoding="UTF-8") as f:
        f.write(output)


if __name__ == "__main__":
    main()


def patch_data_align(d_file: str) -> None:
    """// dtk: data-align 4  in the unit's source -> .data sh_addralign = 4 in its object (ELF32 big-endian)."""
    import struct
    obj = d_file[:-2] + ".o"
    src = None
    try:
        with open(d_file) as f:
            first = f.readline()
        src = first.split(":", 1)[1].split()[0] if ":" in first else None
    except Exception:
        return
    if not src or not os.path.exists(src) or "// dtk: data-align 4" not in open(src, errors="replace").read():
        return
    with open(obj, "rb") as f:
        e = bytearray(f.read())
    shoff, shentsize, shnum, shstrndx = struct.unpack(">I", e[32:36])[0], struct.unpack(">H", e[46:48])[0], struct.unpack(">H", e[48:50])[0], struct.unpack(">H", e[50:52])[0]
    names_off = struct.unpack(">I", e[shoff + shstrndx * shentsize + 16:shoff + shstrndx * shentsize + 20])[0]
    for i in range(shnum):
        h = shoff + i * shentsize
        name_idx = struct.unpack(">I", e[h:h + 4])[0]
        name = e[names_off + name_idx:e.index(b"\0", names_off + name_idx)].decode()
        if name == ".data":
            e[h + 32:h + 36] = struct.pack(">I", 4)
    with open(obj, "wb") as f:
        f.write(e)


if __name__ == "__main__":
    try:
        patch_data_align(sys.argv[1] if len(sys.argv) > 1 else "")
    except Exception:
        pass
