# REA decompilation pipeline

Scripts used to decompile functions with the REA MCP (Ghidra, Gekko/Broadway profile) and turn its
pseudocode into matching C/C++ for this project.

1. `next.sh N` — next N unattempted functions (smallest first), as a JSON list for REA `batch_decompile`.
2. `cycle.sh <rea result file>` — convert (`conv.py`), compile + judge in parallel (`try_par.py`, keeps only
   byte-identical matches), then convert fully matching units to C++ built with `-Cpp_exceptions on` and
   verify functions, section bytes and relocations against the original objects (`finalize.py --no-link`).
3. `link.py <units> <out>` — marks verified units Matching, keeping `main.dol` byte-identical (unlinks any
   unit whose bytes differ, found from the first differing address).

`nm.py show|diff|test <fn> [file]` inspects near-misses saved in `best/`.
The game was compiled as C++ with exceptions on, so linkable units need `.cpp` + `-Cpp_exceptions on`
(renamed in configure.py and config/GHYE6S/splits.txt).

## C++ classes (exception tables)

The original objects carry exception-table entries (`extab`/`extabindex`) for every `new T(...)`, local object
with a destructor, and constructor with base/member sub-objects. Only real C++ constructs reproduce them, so:

- `cxx.py` keeps a registry of synthetic classes (`classes.json`: constructor symbol → class `C<addr>`,
  mangled `__ct__9C<addr>F<args>` / `__dt__9C<addr>Fv` names) and the symbol renames
  (`renames.json`, applied to REA pseudocode by `conv.py`; `pending_renames.json` applied with `cxx.py apply`:
  symbols.txt + sed over src/auto and best/ + re-split). Runtime symbols were renamed once:
  `__nw__FUl`, `__dl__FPv`, `__nwa__FUl`, `__dla__FPv`, `__construct_new_array`; vtables become `__vt__9C<addr>`.
- `conv.py` rewrites `p = __nw__FUl(N); if (p) ctor(p, …)` → `(int) new C(...)`, array news →
  `new C[n]`, `ctor(auStack_N); … dtor(auStack_N, -1)` → a local object, and (via `ctorfix.py`) constructor
  functions with DESTROYBASE/DESTROYMEMBER entries → `CX::CX(args) : CB(...) { … }` (job key `sym` holds the
  mangled name that try_par/hx judge).
- `newfix.py <fn>` does the `new` rewrite on a `best/` near-miss; `HX_SYM=<mangled> hx.py keep <fn> <file>`
  judges a constructor candidate.
- `layout.py layout_ok(ours, target)` compares section layouts while ignoring the weak out-of-line copies
  MWCC emits for inline ctors/dtors (the linker drops them; verified byte-identical DOL).
- `ins.py merge(code, unit)` drops declarations the unit already has and prototypes that conflict with the
  candidate's before insertion.
