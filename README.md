# HauntedMansion (GHYE6S) decompilation

Started from scratch with [decomp.wtf](https://decomp.wtf) on [dtk-template](https://github.com/encounter/dtk-template),
the layout GameCube and Wii decomps use. Every build rebuilds `main.dol` and checks it against your copy, byte for byte.

1. Put your own copy of the game in `orig/GHYE6S/` (never commit it).
2. `python configure.py` (downloads the tools it needs), then `ninja`.
3. Decompiled code goes in `src/`; `objdiff` (objdiff.json) shows each function's progress.

Compiler: CodeWarrior GC/1.3.2 (change `config.linker_version` in configure.py if the game used another).
