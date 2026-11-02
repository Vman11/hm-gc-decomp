# AGENTS.md: handoff notes for game-code decompilation

This is the matching decompilation of The Haunted Mansion (GameCube, GHYE6S). Read this before starting.

## Status and ownership

- Progress is in `build/GHYE6S/report.json`; `python3 tools/rea/finalize.py` prints the totals. The latest numbers are in `git log`. At handoff it was about 6,950 / 10,159 functions and about 27% of code.
- **You own the game code**: every `auto/text_*` unit EXCEPT the library units below.
- **Library units are owned by another agent. Do not edit them:**
  - `auto/text_800B2E70` (Dolphin SDK, `GC/1.2.5n`)
  - `auto/text_800E40A0` (MSL / Metrowerks runtime, `GC/2.0`)
  - `src/sdk/*` (SDK EXI/SI/DB units split out of text_800E40A0)
  - `auto/text_80273E10` (asm-heavy low-level SDK)
  - `auto/text_800DAA80` (MetroTRK)
  - `bink/*` (RAD Bink, `ProDG/3.5`; was `auto/text_802752DC`, split into 16 TUs)

  If you need a symbol or declaration from one of them, declare it locally in your own unit.
- Game code compiles with **GC/1.3.2**, flags `-O4,p -inline auto` (see `configure.py`). Some units are C++ (`-Cpp_exceptions on`) and some also need `-use_lmw_stmw on`.

## Hard rules

1. `build/GHYE6S/main.dol` must stay **byte-identical**: `sha1sum -c config/GHYE6S/build.sha1` must say OK before every commit.
2. Commit in batches. End commit messages with the project's standard trailer (see existing commits).
3. On the machine set up by decomp.wtf (toolchains under `~/.local/share/decompnet`), never run bare `python3 configure.py`: it would switch `build.ninja` to downloaded tools under `build/`. ninja re-runs configure automatically when `configure.py` changes. If you must regenerate by hand:
   ```
   T=$HOME/.local/share/decompnet/toolchains
   ~/.local/share/uv/tools/decompnet/bin/python configure.py --wrapper $T/wibo/wibo --compilers $T/mwcc \
     --binutils $T/gc-wii-binutils --dtk $T/dtk/dtk --objdiff $T/objdiff-cli/objdiff-cli --sjiswrap $T/sjiswrap/sjiswrap.exe
   ```
   On any other machine, plain `python3 configure.py` (as in README.md) downloads the tools into `build/` and is correct; `ninja build/binutils` fetches objdump for the scripts.
4. Apply a candidate exactly once. Applying, then `git checkout`, then re-applying leaves untracked `.cpp` files and creates duplicate definitions. To roll back use `git checkout -- . && git clean -fdq -e 'zz_q*' src/`.
5. The judge writes temp files `src/auto/zz_*`. They are gitignored; never commit them.

## Tools (tools/decomp_agent/)

Copy them into a scratch dir and run from there. Scripts locate each other through `$DECOMP_SCRATCH`:
```
export DECOMP_SCRATCH=/tmp/decomp-scratch; mkdir -p $DECOMP_SCRATCH
cp tools/decomp_agent/* $DECOMP_SCRATCH/; cp $DECOMP_SCRATCH/game_skip.txt $DECOMP_SCRATCH/skip.txt
```
These scripts and the `tools/rea/*.py` ones hardcode the original checkout (`/home/mi/Decomp/hauntedmansion-ghye6s`) and
toolchain (`~/.local/share/decompnet/toolchains/...`). On another machine, sed those paths in your scratch copies to your
checkout and to `build/tools/{wibo,objdiff-cli,dtk}`, `build/compilers/` and `build/binutils/` (copy `apply_q.py`,
`finalize.py`, `c2cpp.py`, `link.py` and `layout.py` too, keeping finalize's state files in `tools/rea`).
| tool | purpose |
|---|---|
| `q.py UNIT FN cand.c [cpp]` | Local judge: compiles the candidate standalone (game flags) and diffs FN against the built object. Prints `MATCH` or a diff. Env `QV=<ver>` (bare, e.g. `1.3.2`, `2.0`), `QX=<extra flags>`. Parallel-safe. It compares relocation types, not symbol names: a candidate that calls the wrong function or ctor still prints `MATCH` (the layout check catches it later), so check names, especially in sibling copies. |
| `qa3.sh DIR LIST [jobs]` | Parallel judge over `fn unit` lines. Picks `DIR/FN.*`; a `.lmw` suffix adds `-use_lmw_stmw on`. Prints `ok …` / `FAIL …` lines. |
| `unitcheck.py UNIT FN cand.c [QV]` | Merges the candidate into a temp copy of the unit, as apply does, and compiles the whole unit. Catches declaration conflicts the standalone judge misses. Run it on every C match (it compiles `src/UNIT.c` with `-lang=c`, so it reports ERROR for C++ candidates; build those instead). |
| `dumpasm2.py N skip.txt` | Compact asm of the N smallest unmatched functions (excludes library units). Writes to stdout. |
| `applyres.sh res…` | Applies `ok FN UNIT path` lines through `tools/rea/apply_q.py`. FAIL lines go to skip.txt. |
| `addctors.py res…` | Adds the `.ctors` entry for sinit functions whose unit has `.ctors` in splits.txt. Without it the layout check fails. |
| `families.py` / `sibling.py` / `sibimm.py` | Groups unmatched functions by normalized asm; copies a matched sibling's source with symbols and immediates remapped. Large free wins. |
| `relocs.py` | Per-instruction relocation helper used by the above. |
| `ps.py FN` | REA saved pseudocode lookup. It needs `pseudo.json`, an index built from `tools/rea/rea/*.json`. Rebuild it or use the REA MCP tools directly. |
| `permdecl.py`, `perm.py` | Brute-force declaration-order permutations for register-allocation misses. |
| `voltry.py` | Retries failures with float externs made `volatile`. |

After applying: `ninja`, then remove the touched units from `tools/rea/c2cpp_rejected.txt` (finalize skips units listed there), then `python3 tools/rea/finalize.py` (converts, re-verifies from a clean build, links), then the sha check, then commit.

## Workflow loop

1. `python3 -I $DECOMP_SCRATCH/dumpasm2.py 60 $DECOMP_SCRATCH/skip.txt > batch.txt`. Small functions (<150 B) are mostly done; most of what is left is 150 to 1500 bytes. Use REA pseudocode for those.
2. Write candidates `DIR/FN.c` or `FN.cpp` (add `.lmw` if the target uses stmw/lmw). Make them self-contained: declare all prototypes and externs locally.
3. Run `qa3.sh DIR list`. Fix the failures in a second directory (`q.py` shows the diff).
4. Apply, then build, finalize, check the sha and commit, as above. Add the batch to skip.txt.
5. Every few batches re-run `families.py` + `sibling.py`; newly matched functions unlock siblings.

## Matching cookbook (GC/1.3.2)

- **Virtual calls**: vtable slot = (disp − 8) / 4. If the vptr is at offset N, model the class as `struct V { u8 pad[N]; virtual …; }`.
- **Register order**: the first-declared local tends to get r31, and parameter registers follow first use. Try permutations (`perm.py`). Reusing a parameter (`p = p->next`) reproduces register reuse. Declare all locals at the top for sequential loops.
- **Branches**: `beq x; b y` comes from a ternary or a single-case `switch`. Two compares on the same cr come from an inline helper with its own check.
- **Constants**: repeated reloads of the same float global mean `extern volatile f32`. A float kept in a register means the source used a local copy.
- **Copies**: interleaved load/store mean `__restrict` pointers. A two-word `lwz/lwz/stw/stw/lwz/stw` is a struct with an array member assigned by value. Use 12-byte struct copies (`T12`) for vec3-style copies.
- **Indexed fields**: `mulli; addi off; add base` or `add; lwz off(r)` means member-array indexing through a struct type (`((S*)p)->arr[i]`, `&(*(T**)(p+X))[i].field`), not manual `p+i*K+off`. Plain `arr[i]` reproduces `li r5,0; li r6,0; mr r4,r5` loop setups.
- **Masks**: `& 0xFB` gives `andi.`; `&= ~4` gives `rlwinm`. f32 vs double return types matter (`frsp` or not).
- **Epilogue tell**: `lwz r0,20(r1)` *before* the r30/r31 restores means the function returns a value.
- **Constructors / destructors**: write a base ctor call, vtable store and field inits as plain C. For `new T[n]` with `__ct__9CXXXFv/__dt__9CXXXFv` relocs use `struct CXXX { CXXX(); ~CXXX(); }`; extab layout may still differ.
- **Destructor pattern**: `if (p) { …; if (f > 0) __dl__FPv(p); } return p;` with `s16 f`. For C++ destructors with virtual calls take `u8 *p` and cast; typing the param as `V*` grows the frame.
- **Static initializers**: `__register_global_object` / `__construct_array` / cos-sinit families need `__declspec(section ".ctors") static void (*const ctor_X)(void) = fn_X;` (`addctors.py`).
- **Thunks**: `asm` functions with `nofralloc` (`addi r3,r3,-N; b tgt`).
- **Loop hoisting**: `#pragma opt_loop_invariants off` stops `p+K` being hoisted out of parse loops.
- **Forwarded parameters**: a temporary in r6/r7 while r4/r5 are never set before a call means the function passes its own parameters through (`fn_80272F28(p, a, b)` calls `fn_801AA960(x, a, b)`). Add the parameters.
- **Scheduling only**: identical instructions in a different order (e.g. a void function whose epilogue restores r31 before `lwz r0`) can need `#pragma scheduling off` … `#pragma scheduling reset` around the function.
- **Byte locals**: `u8` vs `s8`/`char`/`int` for a loaded byte changes register allocation even when the instructions are the same.

- **More GC/1.3.2 tricks that matched large game functions** (library agent, 2026-10-22):
  - In C++, `int` vs `s32` (`long`) on a parameter can change register coloring.
  - Unfolded arithmetic in the original (`mulli 3; slwi 2`) comes from a repeated block in an inline helper.
  - A float the original reloads at every use is `extern volatile f32`.
  - String pools with gaps: a padding array plus a dead static function holding the filler literals.
  - State-table switch walkers: tables as static arrays at their real offsets, and the loop written as
    `for (q = b + idx; t > 0; q++) { if (*q > t) break; t -= b[idx++]; }`.
  - Virtual calls that load through r12 only come out of C++ with real virtual classes.

## Linking units whose code already matches

Many NonMatching units have every function at 100% and only fail the unit check (functions plus section layout vs
`build/GHYE6S/obj/<unit>.o`, see `tools/rea/layout.py`) or the C++ conversion. Check these before decompiling new code:

- **extab garbage**: some actions (e.g. DELETEPOINTERCOND) end in two uninitialized bytes; the original has `b1 02` (or
  `b0 02`). Add `extab_padding=[0xB1, 0x02]` to the unit's `Object(...)`; the `mwcc_extab` rule (`dtk extab clean`)
  then reproduces them. dtk consumes the padding bytes once over the whole table, so with several such actions repeat
  the pair once per action (`extab_padding=[0xB1, 0x02, 0xB1, 0x02]`).
- **C units that need `-use_lmw_stmw on`**: `tools/rea/apply_q.py` drops the flag for `.c` candidates, so a C match
  that uses `stmw`/`lmw` silently fails in the build. Convert such units to C++ with both flags (24 units on
  2026-10-21 matched only this way).
- **Missing `.ctors`/`.dtors` entries** for static initializers (`addctors.py`).
- **C to C++ conversion**: any integer cast on an argument (`(int)(p)`, even `(s32)` on an `s32`, or an implicit
  conversion through an `int` prototype) changes register allocation and saved registers in C++ mode. Give callees
  pointer prototypes and keep argument types equal to parameter types. C++ also needs explicit casts for `void *`
  results (`__nw__FUl`, `NULL`), and calls through `(RT (*)())` casts need their parameter list.
- **12-byte copies** in C++ must be `struct { u32 v[3]; }` (a struct of three scalars is copied memberwise).
- **Comparisons are `bool`** in C++: `return a == b;` from an `s32` function becomes `cntlzw; extrwi`; use a `bool`
  return or `x ? 1 : 0`, and `bool` locals for stored comparisons.
- **Function order** in the object follows source order (asm thunks included).
- **Dead functions**: a function only referenced by its own unit (e.g. by its jump table) is dead-stripped once the
  unit links from C; add it to `force_active` in `config/GHYE6S/config.yml`.
- **Literals** the original takes from named `.sdata`/`.sdata2` objects must use those externs (`extern const f64
  lbl_X;`, `extern char lbl_X[6];`, sized so small-data addressing is used).
- **Jump table at 4 mod 8**: a unit whose `.data` (a switch jump table) starts at 4 mod 8 cannot link alone, since
  the linker 8-aligns each object's `.data`. When the object in front of it is the class vtable sitting in a
  synthetic `jt_*` data unit, move the vtable into the unit (shrink the `jt_*` range, extend the unit's `.data` in
  splits.txt) and define it in the source before the functions: `void *lbl_X[7] = { 0, 0, (void *)fn_A, ... };`.
  When it is another function's jump table, the two units were one TU and need merging.
- **Shared compiler constants**: two adjacent units that reference the same `.sdata2` int-to-float double (or a
  string pool in `.rodata`) were one TU. Merge them and give the merged unit that range.
- **Mislabeled switch cases**: when only the jump table differs, the case labels can be attached to the wrong
  blocks (e.g. globals shifted by one case); the code bytes still match.
- **A failed link leaves the old main.dol in place**, so `sha1sum -c` still says OK. Check that ninja exited 0
  before trusting the sha (or delete `build/GHYE6S/main.dol` first).
- **Linker hangs forever** (`mwldeppc` at 100% CPU; a normal link takes about 15 s): an object whose `.text` starts with
  a global function and a global label at offset 0 (e.g. `SystemCallVector` and `__OSSystemCallVectorStart` in
  OSSync). Make the function `scope:local` in symbols.txt. To find the culprit, link with `timeout` while leaving out
  one object at a time from `build/GHYE6S/main.elf.rsp`.

## Exception-table constructs (C++, GC/1.3.2)

The decoded extab in `build/GHYE6S/asm/<unit>.s` says which C++ construct the original used:

- **DELETEPOINTER** on the `new` result: `p = new C;` with `sizeof(C)` equal to the `__nw__FUl` size and a ctor
  (often inline) holding the code inside `if (p)`. A plain-named base ctor is called as `fn_X(this)` first in it; a
  mangled one (`__ct__9CXXXXFv`) comes from deriving from `struct CXXXX { CXXXX(); };` (empty bases take no space).
- **DESTROYBASE / DESTROYMEMBER / DESTROYMEMBERARRAY**: real base classes, member objects and member arrays whose
  destructors are the Dtor symbols. Actions only cover throwing calls after the subobject is built, so a missing
  action does not mean there is no destructor. Several DESTROYMEMBER at one offset = a union of class-type members.
- **DESTROYBASE at `0x8(SP)`** (`06 00 0008`) for `new Derived` with an inline ctor: `#pragma optEH2 on` for the file
  (or `throw()` on the callees inside the inlined ctor body). Without it GC/1.3.2 names the register (`06 80 001f`).
  Don't use the pragma where the original names a register: under it multi-call ctor bodies also get the stack form.
- **DESTROYLOCAL**: `__ct__9CX(&obj); … __dt__9CX(&obj, -1);` is a local `CX obj;`.
- **Plain vtable labels**: MWCC puts the vptr after the data members of the class that introduces it. For a vtable named
  `lbl_X`, store it from a holder: an empty base whose inline ctor stores `lbl_X` at the vptr offset (when stored before
  all member ctors), or a member `struct V { u8 *vt; V() { vt = lbl_X; } }` (when stored between base and members).
- **Plain-named destructors** (`dtor_XXXX`, `fn_XXXX`) in extab cannot be produced: MWCC has no aliasing. Rename them
  (symbols.txt + sources, as `tools/rea/cxx.py apply` does) to the mangled destructor of their class. A class's dtor
  sits right before its ctor in this binary (dtor address + size = ctor address), which tells you the class name.
- `__ct__9CXXXXFs` is the ctor of a class with a virtual base (hidden `short` in r4); MWCC mangles it `…Fv`.

## Known blockers (skip unless you crack them)

- **Inlined base ctor** `mr r30,r3; mr r0,r30; mr r31,r0` (e.g. `__ct__9C80155460Fv`, `80155E80`, `8020E5C0`). Inline ctors, multiple inheritance and member-object variants were all tried without success.
- **Member ctor held in r30** (e.g. `__ct__9C80064474Fv` family, `80239B40`, `8022F98C`).
- **Zero-then-assign** at +40/+44 after `fn_801EF9A0` (`li r3,0; lwz r4,8(q); stw r3,44; …`): e.g. `fn_801DEE18`, `801E812C`, `801DE80C`, `801E0384`, `801E7D14`.
- **Descriptor init / factory family** (about 20 functions near 0x8004–0x800B): they address the unit's own `.data` through a section-base register, so they need that data defined as statics in the same TU. The same goes for pooled string literals (`fn_80068D50`, `80046BB8`, `80267CF8`, …).
- **Local objects whose dtor is `dtor_XXXX`** (`fn_8012D774`, `80138AA8`, `8013EF3C`): need the dtor renamed (see "Plain-named destructors" above).
- **Symbol renames** (done): 41 plain-named ctors/dtors used by exception tables were renamed to mangled names (recorded in `tools/rea/renames.json`), which matched the `fn_8012CF08` family, `fn_80105B88` and 30 other units. `fn_80117DC4` matched without a rename (inline ctor/dtor calling the two literal names). 0x80118DE0 is now `__dt__9C80118E78Fv`, which freed `__dt__9C8011F770Fv` for `dtor_8011F6FC`. `fn_8013D770` still needs renames for its four member-array classes.
- **Switch jump tables** (data must match too): `fn_8012F7F8`, `8010CF00`, `801FA224`, `8021C124`. The others in the old list are linked (vtable moves, case relabeling, extab padding). Units whose jump table follows another function's jump table (`800447E8`, `800501FC`, `80052028`, `8008CA0C`, `80090C68`, `800919A4`) need merging with undecompiled neighbours.
- **Near misses (scheduling or register allocation only)**: `fn_80153D4C`, `8017CB04`, `801BB258`, `801BCA04`, `8016E4D4`, `801B2504`, `80191360`, `8019F53C`, `8019FCB0`, `801A0424`, `80158E34`, `801547BC`, `80149C68`, `80186960`, `8022202C`, `801DF270`, `8023C3F4`, `80213F6C`, `8021F4A4`, `80240948`, `801C9C40`, `8024973C`, `801F13F0`, `801C1774`, `8003C674`, `8003C778`, `801135BC`, `80112FD4`, `8010E280`, `80112190`, `80102730`, `800F9838`, `80112698`, `8011FA98`, `800FA69C`, `80071CE8`.
- **Factory `new` functions** (solved): real classes with an inline derived ctor storing the vtable label by hand, plus `#pragma optEH2 on` for the stack-slot DESTROYBASE (see above), matched 37 factories with base `C8024262C` and others.
- `fn_800F8410` only matches with GC/2.0; its unit would need a compiler switch.

## Coordination

**Claimed game functions (2026-10-22):** the library agent now also works on game code, but only on the functions in
`tools/decomp_agent/claimed_by_library_agent.txt`: units whose only unmatched functions are 1,000 bytes or larger
(352 functions), extended on 2026-10-23 to 500 bytes or larger. Re-run the awk line below after pulling. Your `dumpasm2.py` loop works up from the smallest, so add that file's names to your skip.txt
(`awk '!/^#/{print $2}' tools/decomp_agent/claimed_by_library_agent.txt >> $DECOMP_SCRATCH/skip.txt`) and the two
loops won't overlap. Pull often: both agents commit to `main`.

The library-unit agent works in this repo too and commits its own batches. Commit only your own units: `git add` specific paths rather than `-A`. If a library unit shows up as modified in `git status`, leave it alone.

**Absorbed units (2026-10-30):** `text_80268290` was merged into `text_80268178.cpp` (one TU, namespace-wrapped, with `-use_lmw_stmw on`; `fn_80268290` is in `force_active`). The `text_80268290` unit no longer exists.

**Renamed ctor/dtor placeholders (2026-10-31, user-approved):** `fn_8010CDAC` -> `__dt__9B8010CE30Fv` and `__ct__9C8010CE30Fv` -> `__ct__9B8010CE30Fv` (base class; `__dt__9C8010CE30Fv` at 0x8010C9E0 is the derived dtor), updated in `text_8010CDAC`, `text_8010CE30`, `text_80110FA0`, `text_80111028`, `text_80112190`; plus 38 `new[]` pairs used by `fn_801EB890`/`fn_801F7E0C` (e.g. `fn_801E6C0C` -> `__dt__9C801E6C80Fv`, `fn_801EB420`/`fn_801EB3AC` -> `__ct__/__dt__9C801EB420Fv`), renamed to `__ct__/__dt__9C<ctor addr>Fv` in symbols.txt and all src (`text_801ECB44`, `text_801F7B04`, and each pair's own unit).

**Collaborator-unit work kept (2026-10-31, user-approved):** matched `fn_8021D988` and `fn_80196B18`; merged `text_80121158`..`text_80121848` (8 units) into `text_80121158.cpp` (one TU, GC/2.0p1, shares one .sdata2 pool); promoted `text_80190120`, `text_8019EE68`, `text_801F05C4`, `text_80039EA4`, `text_8007C9DC` by giving each its own int->float magic in `.sdata2`. Rule behind it: MWCC pools `.sdata2` literals per TU and never across TUs, so units sharing a compiler constant were one source file. Further merges of such spans are user-approved and are listed below as they land.
- main (user-approved, collaborator units, 2026-11-01): empty `void f(void) {}` stubs in 151 src/auto/*.c files (253 fns) rewritten as `int f(int a) { return a; }` per user rule; same code (bare blr), fresh link byte-identical, all still 100% in report.
- main (user-approved, collaborator units, 2026-11-01): linked as Matching (all fns already 100%): text_80055EFC, text_80056590, text_8005748C.
- wCS (user-approved, collaborator units, 2026-11-01): linked as Matching: text_80235858 text_80072E18
- wCU (user-approved, collaborator units, 2026-11-01): merged `text_80222F8C` (new: matched `fn_80222F8C`), `text_80222FE8`, `text_8022340C`, `text_8022345C`, `text_802234B0`, `text_802237B8`, `text_802237E4`, `text_80223934`, `text_80223A50` into `text_80222ED0.cpp` (one TU, GC/2.0p1 + lmw; owns the int->float magic .sdata2 80365A88-80365A90 and .sbss 8035B2B0-8035B2C8 = `lbl_8035B2B0` + fn_80223A50's two guarded statics; other pool consts/strings stay extern), Matching.
- wCS (user-approved, collaborator units, 2026-11-01): matched fn_80235858 (pointer select written null-arm first with a local: `o->m == 0 ? &o->sub->m : o->m` gives bne without the beq/b pair) fn_80072E18 (sda store kept ahead of a later sda load: make BOTH globals volatile)
- wCS (user-approved, collaborator units, 2026-11-01): extab_padding for text_8020EFE4 [B1 02 B1 02] and text_80247F54 [B0 02]; linked as Matching: text_8025180C text_80247F54 text_8020EFE4
- wCS (user-approved, collaborator units, 2026-11-01): matched fn_8025180C (call results moved into a look() inline, wCQ trick), fn_80247F54 fn_8020EFE4 (`li i,0; mr off,i` IV init = indexed loop inside an inline taking the start index as a param, called with 0)
- wCQ (user-approved, collaborator units, 2026-11-01): matched fn_801EF9A0 (wCK hi-before-lo locals + `#pragma opt_propagation off`), unit moved to .cpp for its extab.
- wCQ (user-approved, collaborator units, 2026-11-01): text_801B12FC moved to .cpp (-Cpp_exceptions on: the target has an extab entry) so it can link.
- wCQ (user-approved, collaborator units, 2026-11-01): matched fn_801B12FC (`switch (x) { default: return -6; case 16: return 1; }` gives the beq/li/b layout); text_8015E11C/text_80208924: Mid class gets a declared dtor too (no weak implicit dtor emitted) and the ctor moved to the top of the unit so the units link.
- wCQ (user-approved, collaborator units, 2026-11-01): matched __ct__9C8015E11CFv, __ct__9C80208924Fv (base with declared dtor), __ct__9C800645ECFv, __ct__9C800646A8Fv (wCO Derived:Mid:Base; renamed dtor_80120314 -> __dt__9C80064764Fv and lbl_802E9F48 -> __vt__9C800646A8 in symbols.txt + text_80120314/text_801A2790), fn_802108B4, fn_80136C30 (call results via inline helpers).
- wCR (user-approved, collaborator units, 2026-11-01): merged `text_8023EA4C` into `text_8023E96C.cpp` (shared .sdata2 `lbl_80366118`; pool 80366118-80366128 owned, zero const as char array; GC/2.0p1), Matching.
- wCR (user-approved, collaborator units, 2026-11-01): merged `text_8004DF70` `text_8004DF90` `text_8004DFB0` `text_8004E024` `text_8004E150` (.c) `text_8004E158` (sinit) into `text_8004DDAC.cpp`; TU owns .data 802B7B90-802B8100 (table `lbl_802B7B90` as C initializers split at tA/tB/tC, `lbl_802B8068`, all force_active; jt_802B7B8C truncated to its 4-byte pad), Matching.
- wCR (user-approved, collaborator units, 2026-11-01): matched fn_801FBA4C and fn_801FBB60 (flag-clear test read through a volatile cast for the reload) and merged them as `text_801FBA4C.cpp` (shared int->float magic `lbl_803655A0`, owned .sdata2 803655A0-803655A8, GC/2.0p1; other pool consts stay extern), Matching.
- wCU (user-approved, collaborator units, 2026-11-01): matched fn_80222FE8 (camera shake: local-t compare + `#pragma opt_propagation off`) and fn_80223A50 (camera update; real string literals + `-str reuse,readonly` with a dead pool fn for GmAcCamera..GmAcActor, fn_80223934 auto-inlined, fn_802237E4 body hand-inlined, volatile reloads of 0/1 consts); both units moved to .cpp (extab), still NonMatching (TU merge 80222ED0..80223A50+ pending).
- wCY (user-approved, collaborator units, 2026-11-01): matched fn_80176910 (4572 B bytecode interpreter, NonMatching unit text_80176910.cpp, lmw): case 61 `Par *e` landed in r22 (target r21) until case 11 used FUNCTION-LEVEL counters `u32 r11, i11;` declared before `Par *e;` (callee-saved coloring follows declaration order: earlier-colored r/i take r22/r21 first, then e reuses r21).
- wCY (user-approved, collaborator units, 2026-11-01): matched fn_80177D88 (NonMatching unit text_80177D88.cpp, GC/2.0p1): Col passed as `const Col &`, literal 255.0f, inline V4::set into lbl_8032F718[reg]; the pointer-param form schedules the first lbz after the table lis.
- wDA (user-approved, collaborator units, 2026-11-02): matched fn_801B3844 (elem ptr written through the dead `h` variable `h = (Hnd *)&elems[idx]` so it lands in m's r29; tail via its own block-scoped `Elem *x`).
- wCZ (user-approved, collaborator units, 2026-11-02): matched fn_80268504 (music fade update; inner clamp regs need `#pragma opt_propagation off`, and under it the 19-down scan loop needs a shifted base `for (j = 19, q = (s32 *)m + 19; j >= 0; q--, j--) q[0x568 / 4]` to get the `addi r3,r30,76` SR init).
- wCZ (user-approved, collaborator units, 2026-11-02): matched fn_80231AD8 (camera shot setup, sibling of fn_80232064: rand term split into statements to avoid fmsubs, zero-vector re-fill via a volatile read of the 0.0f constant so it reloads).

- user-approved merge of collaborator units: promoted `text_800FF778` (.sdata2 80363798-803637A0) and `text_801796CC` (.sdata2 803647D8-803647E8) with their own int->float magic.
- user-approved merge of collaborator units: merged `text_8007FC84`..`text_8008007C` (6 units) plus the `jt_802C3FE0` .data (802C3FE0-802C4370: tables + vtable `lbl_802C4320`, force_active since its only user addresses it off `lbl_802C3FE0`) into `text_8007FC84.cpp`, Matching.
- user-approved merge of collaborator units: merged `text_802021A8` (new: matched `fn_802021A8`), `text_802022C8`, `text_802025B8` into `text_802021A8.cpp` (shared int->float magic .sdata2 80365728), Matching.
- user-approved merge of collaborator units: merged `text_800A882C`, `text_800A8BD4`, `text_800A8DBC`, `text_800A8EB0` (new: matched `fn_800A8EB0`), `text_800A911C`, `text_800A91A0` into `text_800A882C.cpp` (GC/2.0p1; owns .sdata2 803620A8-803620F8 incl. named floats/strings, and .data 802D1B48-802D1F48 taken from `jt_802D1B44`: tables + vtable `lbl_802D1ED4`), Matching.
- user-approved merge of collaborator units: merged `text_801E1DF0`, `text_801E1F94`, `text_801E20BC` (new: matched `fn_801E20BC`, which inlines copies of 1DF0/1F94) into `text_801E1DF0.cpp` (GC/2.0p1; owns .sdata2 803652B8-803652C8), Matching.
- user-approved merge of collaborator units: merged `text_801CF1FC`..`text_801D12BC` (21 units; new: matched `fn_801CFFB8`) into `text_801CF1FC.cpp` (GC/2.0p1, -use_lmw_stmw on; owns the shared int->float magic .sdata2 80365170-80365178), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800B10B8`, `text_800B1378`, `text_800B13D0`, `text_800B1428`, `text_800B1478`, `text_800B1530` into `text_800B10B8.cpp` (shared .rodata pool 8029BAD0-8029BBA0 and .sdata2 strings 80362E18-80362E9C; owns .data 802D68A0-802D6D3C incl. absorbed `jt_802D68A0`; `lbl_802D6CB0`/`wAX_802D6CE0` force_active), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800AC4A0`, `text_800AE100`, `text_800AE1DC`, `text_800AE2B8`, `text_800AE408`, `text_800AE4AC`, `text_800AE5F4`, `text_800AE770`, `text_800AE7E4` into `text_800AC4A0.cpp` (GC/2.0p1, -use_lmw_stmw on, -str reuse,readonly; shared .rodata string pool 8029B3E0-8029B768, .sdata2 80362568-803629A0 as named defs, .data 802D3A50-802D4D28 incl. most of `jt_802D3A4C` and vtable `lbl_802D4BA0`), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80042BD4`..`text_80043908` (13 units, new: matched `fn_80042BD4`) into `text_80042BD4.cpp` (.data 802B2588-802B2CE8: `lbl_802B2588` + walker tables + vtable `__vt__10CV802B2C18` + jumptable, taken from `jt_802B2538` which now ends at 802B2588; .ctors sinit `fn_80043908`) and `text_8004397C`..`text_80044664` (8 units) into `text_8004397C.cpp` (.data 802B2CE8-802B382C absorbing `jt_802B2CE4`: `lbl_802B2CE8` tables + vtable `lbl_802B3728`; float literals -> pool externs, .sdata2 stays in asm). Two TUs, not one: 397C/4445C address their tables off 802B2CE8 as the TU's data anchor. force_active: lbl_802B2588, lbl_802B2CE8, lbl_802B3728, __vt__10CV802B2C18. Matching (wBG).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800A92A8` into `text_800A882C.cpp` (GC/2.0p1; shared .rodata pool 8029AFE8-8029B100 with global `lbl_8029AFE8` (an .sdata pointer uses it), .sdata2 now 80362030-80362108), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80041730`, `text_80042750`, `text_800427DC`, `text_80042868`, `text_8004289C`, `text_800428BC`, `text_80042944`, `text_800429A4` into `text_80041730.cpp` (-str reuse,readonly; shared .rodata pool 80295110-80295350, .sdata2 8035C400-8035C7D0 as named defs, .data 802B0E20-802B2588 incl. most of `jt_802B0E1C` and the vtable at 802B2538; vtable `lbl_802B234C` force_active), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80096AAC`, `text_800981E4`, `text_80098240`, `text_8009829C`, `text_80098470`, `text_80098804`, `text_80098900`, `text_80098A98` into `text_80096AAC.cpp` (GC/2.0p1, -use_lmw_stmw on, -str reuse,readonly; shared .rodata string pool 80299DC8-8029A1BC (2 unreferenced pool strings via a linker-stripped helper), .sdata2 803610D8-803614D8 as named defs, .data 802CC2B8-802CD678 incl. all of `jt_802CC2B8`), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800A3688`, `text_800A3D18`, `text_800A3DA4`, `text_800A3E30`, `text_800A41DC`, `text_800A4534`, `text_800A4620`, `text_800A46B8`, `text_800A47D8`, `text_800A4824`, `text_800A4898`, `text_800A4930`, `text_800A4938` into `text_800A3688.cpp` (-str reuse,readonly; .rodata pool 8029AB08-8029AC60 as literals, .data 802CFEE0-802D0440 (statics split at 46B8 refs, `lbl_802CFEE0` force_active, vtable `lbl_802D0398`, truncates `jt_802CFB40`), .sdata2 80361C88-80361D00 named defs, .sdata `lbl_80359438`), Matching (wBK).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_8005B390`, `text_8005BA4C`, `text_8005BE14`, `text_8005BE98`, `text_8005BF98` into `text_8005B390.cpp` (.rodata 80296F98-802970F8 incl. pool head as bytes, .sdata2 8035E3A0-8035E428 as named defs, .data 802BC6A0-802BCC00 incl. most of `jt_802BC69C` with the class vtable `lbl_802BCB64`), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80047DA0`, `text_800483EC`, `text_80048528` into `text_80047DA0.cpp` (.rodata 80295A90-80295B24 as named strings, `lbl_80295B14` resized + `lbl_80295B24` added in symbols.txt, .sdata2 8035D180-8035D1C8 as named defs + magic pool, .data 802B5970-802B5E10 absorbing `jt_802B5970` and `jt_802B5E0C`), Matching.
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80048A50`, `text_80048AB8`, `text_80048B40`, `text_80048BC8`, `text_80048C40`, `text_80048D10`, `text_80048E4C`, `text_80048EC0`, `text_80048F58`, `text_80048F60` into `text_80047DA0.cpp` (true TU end 80048FD0 incl. sinit + .ctors 80293F6C; .rodata 80295A90-80295B90 (pool tail 80295B24 as bytes, force_active), .sdata2 8035D138-8035D1E8 as named defs, vtable `lbl_802B5D70`), Matching (wBY).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80098DD4`, `text_80098E48`, `text_80098EE0`, `text_80098F48`, `text_8009902C` into `text_80096AAC.cpp` (true TU end 8009909C incl. sinit + .ctors 80294068; vtable `lbl_802CD4FC` users, jumptable 802CD678, .rodata to 8029A1C8 ("Behavior"), .sdata2 to 803614E8 as named defs; `#pragma opt_propagation reset` before the tail), Matching (wCC).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_8005C1B4`, `text_8005C228`, `text_8005C2C0`, `text_8005C2C8` into `text_8005B390.cpp` (true TU end 8005C338 incl. sinit + .ctors 80293FA4; vtable `lbl_802BCB64` users, .rodata to 80297108 ("Behavior"), .sdata2 to 8035E438 as named defs), Matching (wCC).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800B168C`, `text_800B1700`, `text_800B1798`, `text_800B17D0` into `text_800B10B8.cpp` (true TU end 800B1844 incl. sinit + .ctors 802940E0; vtable `lbl_802D6CB0` users, .rodata to 8029BBB8 ("Behavior","BFallRgn"), .sdata2 to 80362EA8 as named defs; `#pragma opt_propagation reset` before the tail), Matching (wCC).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800AE87C`, `text_800AE8E4`, `text_800AE9F0` into `text_800AC4A0.cpp` (true TU end 800AEA64 incl. sinit + .ctors 802940C8; jumptable 802D4D28, .rodata to 8029B780 ("Behavior","BAtticus"), .sdata2 to 803629A8 as named defs), Matching (wCC).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80042AF0`, `text_80042AF8` into `text_80041730.cpp` (true TU end 80042B68 incl. sinit + .ctors 80293F48; .rodata to 80295360 ("Behavior"), .sdata2 to 8035C7E0 as named defs), Matching (wCC).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800446D8`, `text_80044770`, `text_800447E8`, `text_8004486C` into `text_8004397C.cpp` (true TU end 800448DC incl. sinit + .ctors 80293F54; vtable `lbl_802B3728` users, jumptable 802B382C; pools still extern), Matching (wCC).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_801F6590`, `text_801F66EC` into `text_801F6334.cpp` (`fn_801F6590` is the out-of-line copy of the inline `load()` (shared string `lbl_802A5C20`; written as `return load(r);` its extab gets the `C801F6554` dtor action), `801F66EC` = virtual thunks to `fn_801F6334`/`fn_801F60FC`; text-only, pools still extern), Matching (wCC).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800A9558`, `text_800A95E4`, `text_800A969C`, `text_800A96D4` into `text_800A882C.cpp` (tail users of its .data `lbl_802D1ED4` up to the sinit + .ctors 802940AC; rodata to 8029B118, sdata2 to 80362110), Matching (wCG).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_800801B4`, `text_8008021C` into `text_8007FC84.cpp` (true TU end 8008028C = sinit + .ctors 80293FF4; rodata 80298A50-80298A60, sdata2 to 8035FB50), Matching (wCG).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80202958`, `text_80202A50`, `text_80202B48` (.c, now C++ in an extern "C" block), `text_80203040`, `text_802030D8` into `text_802021A8.cpp` (shared .sdata2 pool 80365720-80365740 as named defs; `.data` `lbl_802EF7C0` stays extern), Matching (wCG).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_801CF1FC` (itself merged), `text_801D1A94`, `text_801D1B70`, `text_801D1BE4`, `text_801D1C0C`, `text_801D1C2C`, `text_801D1D6C` (.c), `text_801D1D78` (sinit + .ctors 802941E4) into `text_801CECFC.cpp` (shared .sdata2 pool 80365160-80365188 as named defs, rodata `lbl_802A2CC8`; GC/2.0p1 + lmw), Matching (wCG).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_80268020`, `text_802680D8`, `text_80268178` (itself merged), `text_8026848C` into `text_80268004.cpp` (shared .sdata2 `lbl_80366D48`; contiguous .data 802F3260-3360; pools still extern), Matching (wCG).
- user-approved merge of collaborator units (collaborator away, 2026-11-01): merged `text_8023C398` (.c), `text_8023C3BC` (sinit + .ctors 80294288, sdata2 `lbl_80366068`) into `text_8023C1BC.cpp`, Matching (wCG).
- user-approved rename + merge of collaborator unit (collaborator away, 2026-11-01): `dtor_801F6554` renamed `__dt__9C801F6554Fv` (symbols.txt); `text_801F6554` merged into `text_801F6334.cpp` as the inline dtor of local class `C801F6554` (inline ctor calls `fn_801F12D4`; weak out-of-line dtor emitted in place), Matching.
- wCI (user-approved, collaborator units, 2026-11-01): matched fn_801E9660 fn_80108EFC fn_8015B020 fn_80190C48 fn_8015F600 fn_8015F7B4 fn_8015F708 fn_801FC18C fn_8011532C fn_8022CBD4 fn_8016E400 fn_80216044 fn_801FA5A0 fn_801AAAB0 fn_801ECF38 fn_800F5E44 fn_801061A4 fn_8020B610 fn_801FFB90 fn_801E38BC fn_80171438 fn_800F5DBC fn_8010904C fn_801158A8 fn_801DDB90 fn_801EAFD4 fn_802134DC fn_80131E80 fn_801F2F54 (GC/1.2.5n); promoted text_801E9660 text_8016E400 text_80216044 text_8020B610 text_801FFB90 text_8010904C text_801DDB90 text_802134DC text_80131E80 text_801F2F54
- wCL (user-approved, collaborator units, 2026-11-01): matched fn_8026A820 fn_8026AF6C fn_8026B140 fn_8026AE28 fn_8010BF74 fn_8026A944 fn_8026AA88 fn_8026ACE0 fn_8003F940 fn_80045808 fn_80086E08 fn_80107C10 fn_801A4CD0 fn_801A881C fn_801DA398 fn_801DA4C0 fn_801DA82C fn_801DAAE4 fn_801DAC0C fn_801DAD34 fn_801DAEE4 fn_80129040 
- wCK (user-approved, collaborator units, 2026-11-01): matched fn_8011521C fn_800FB8AC fn_8026102C fn_800FB828 fn_80151030 fn_801510CC fn_80151168 fn_801DF714 
- wCL (user-approved, collaborator units, 2026-11-01): linked as Matching: text_8026A820 text_8026AF6C text_8026B140 text_8026AE28 text_8010BF74 text_8026A944 text_8026AA88 text_8026ACE0 text_8003F940 text_80045808 text_80086E08 text_80107C10 text_801A4CD0 text_801A881C text_801DA398 text_801DA4C0 text_801DA82C text_801DAAE4 text_801DAC0C text_801DAD34 text_801DAEE4
- wCK (user-approved, collaborator units, 2026-11-01): matched fn_80066050 fn_8013F0E8 fn_801DB01C fn_800AEC40 fn_800A99DC fn_8009F64C fn_800AAF08 fn_800AFA0C fn_800B2CD8 
- wCK (user-approved, collaborator units, 2026-11-01): matched fn_801B8E6C fn_8002B14C fn_8002A860 fn_8026ABCC fn_8016C7BC fn_801966EC fn_80223934 fn_8023BD28 
- wCL (user-approved, collaborator units, 2026-11-01): matched fn_801DFAC8 fn_801E9ABC fn_80248668 fn_800FD2A0 fn_8011CE44 fn_801A7BF8 fn_801BB984 fn_801A8478 fn_801A797C fn_801BC0CC 
- wCL (user-approved, collaborator units, 2026-11-01): linked as Matching: text_801DFAC8 text_801E9ABC text_80248668 text_8011CE44 text_801A7BF8 text_801BB984 text_801A8478 text_801BC0CC
- wCK (user-approved, collaborator units, 2026-11-01): matched fn_801A0A1C 
- wCK (user-approved, collaborator units, 2026-11-01): promoted  text_8011521C text_800FB8AC text_8026102C text_800FB828 text_80151030 text_801510CC text_80151168 text_801DF714 text_80066050 text_8013F0E8 text_801DB01C text_801B8E6C text_8002B14C text_8002A860 text_8026ABCC text_8016C7BC text_801966EC text_80223934 text_8023BD28 text_801A0A1C
- wCJ (user-approved, collaborator units, 2026-11-01): matched fn_80163364, fn_8012D634, fn_8012D5F0, fn_8011511C, fn_801D35B4, __ct__9C80208C80Fiii, fn_80115398, fn_8015F658, fn_80271A0C, fn_8019D0B0, fn_8016B9D4, fn_80160D54, fn_801FC1F4, fn_801B6144, fn_80115714, __dl__FPv, fn_800F771C, fn_8021C644, fn_800F6E88, fn_8016C968, fn_801153D4, fn_80175C10, fn_801F0050, fn_8022FCA0, fn_8018EEFC, fn_8022D6FC, fn_800F5EC0, fn_801D6DD8, fn_801EFC78, fn_8026A544, fn_801D2518, fn_8020B960, fn_801FC99C, fn_801089F0, fn_801CA588, fn_8021B384, __ct__9C801EFA90Fv, fn_8019A504, fn_801C0614, __cvt_fp2unsigned; promoted 35 units to Matching: auto/text_800F5EC0, auto/text_800F6E88, auto/text_800F771C, auto/text_801089F0, auto/text_8011511C, auto/text_801153D4, auto/text_80115714, auto/text_8012D5F0, auto/text_8012D634, auto/text_8015F658, auto/text_80160D54, auto/text_8016B9D4, auto/text_8016C968, auto/text_80175C10, auto/text_8018EEFC, auto/text_8019A504, auto/text_8019D0B0, auto/text_801B6144, auto/text_801C0614, auto/text_801CA588, auto/text_801D2518, auto/text_801D35B4, auto/text_801D6DD8, auto/text_801EFC78, auto/text_801F0050, auto/text_801FC1F4, auto/text_801FC99C, auto/text_80208C80, auto/text_8020B960, auto/text_8021B384, auto/text_8021C644, auto/text_8022D6FC, auto/text_8022FCA0, auto/text_8026A544, auto/text_80271A0C.
- wCL (user-approved, collaborator units, 2026-11-01): matched fn_801B090C fn_801A9168 fn_801A9350 fn_8013D97C fn_8004DDAC 
- wCL (user-approved, collaborator units, 2026-11-01): linked as Matching: text_801B090C text_801A9168 text_801A9350
- wCM (user-approved, collaborator units, 2026-11-01): matched fn_80227F9C fn_80229F08 fn_80257838 (new/new[] + extab_padding; renamed fn_80227F60/80227EEC, fn_80229EC4/80229E50, fn_802588D4/80258860 to __ct__/__dt__9C<addr>Fv); rewrote text_800AEC40 800A99DC 8009F64C 800AAF08 800AFA0C 800B2CD8 with real new (missing DELETEPOINTER extab; 800B2CD8 now defines its .data, vtable lbl_802D7528 force_active) and linked them, plus text_80227F9C text_80229F08, as Matching
- wCO (user-approved, collaborator units, 2026-11-01): matched __ct__9C80155460Fv __ct__9C80155E80Fv __ct__9C80129A9CFv fn_800391E4 (r0 copy-chain family: `mr r0,r30; mr r31,r0` this-copy = the inlined middle-base ctor of a class whose base has a declared dtor (EH DESTROYBASE); `mr r31,r0` after null check = CSE of a re-read field `if (g->o == 0) return; o = g->o;`)
- wCO (user-approved, collaborator units, 2026-11-01): matched __ct__9C8020E5C0Fv (real vptr classes; renamed base dtor/vtable 80211728/802EFB94 to `C80211728` and lbl_802EFB38 to `__vt__9C8020E5C0`, updating text_80211728/text_8020E4FC)
- wCO (user-approved, collaborator units, 2026-11-01): matched __ct__9C80064530Fv __ct__9C80064764Fv (member pointer kept in r30 = inlined member ctor whose base has a declared dtor; renamed dtor_801A3A0C -> `__dt__9C800645ECFv`, lbl_802F0058 -> `__vt__9C80064530`, updating text_80216D0C/text_801A3A0C)
- wCO (user-approved, collaborator units, 2026-11-01): linked as Matching: text_80155460 text_80155E80 text_80129A9C text_8020E5C0 text_80064530 text_80064764

- wCN (user-approved, collaborator units, 2026-11-01): linked as Matching (all fns already 100%): text_80083120 text_8009565C text_80210830 text_8021DACC text_8023CA84 text_800A0EE4 text_800A1860 text_801A3260 text_801DD8B4 text_801FE894 text_80234028 
- wCP (user-approved, collaborator units, 2026-11-01): matched fn_80207A54 (path normalizer, indexed loop) fn_801A9540 (vcall checks; bit test via int local, bool type inline)
- wCP (user-approved, collaborator units, 2026-11-01): linked as Matching: text_80207A54 text_801A9540
- wCN (user-approved, collaborator units, 2026-11-01): linked as Matching: text_8002FDFC text_80030594 text_80053D34 text_80053D9C text_8007115C text_80090470 text_800F5DBC text_800F5E44 text_80106120 text_801061A4 text_80108EB4 text_80108EFC text_8011532C text_80115450 text_80115784 text_801158A8 text_80116320 text_8012EF00 text_8012EF44 text_80138BC4 text_801499CC text_8015B020 text_8015F600 text_8015F6B0 text_8015F708 text_8015F760 text_8015F7B4 text_80164460 text_8016BA38 text_80171438 text_801757B8 text_80190C48 text_801952A0 text_80197C40 text_801AAAB0 text_801E38BC text_801E96A0 text_801EAA74 text_801EAFD4 text_801ECF38 text_801EF648 text_801EF6AC text_801FA5A0 text_801FC18C text_8020B224 text_8022CBD4 text_80241D80 text_80265DFC text_800FD2A0 text_8019628C text_8025E6F4 text_80115398 text_80129040 text_80051A40 (.c units: added -Cpp_exceptions on, C mode emits the extab; extab_padding for 800FD2A0/8019628C/8025E6F4; own int->float magic .sdata2 for 80115398/80129040/80051A40)
- wCQ (user-approved, collaborator units, 2026-11-01): linked as Matching: text_800645EC text_800646A8 text_802108B4 text_80136C30

- wCN (user-approved, collaborator units, 2026-11-01): linked as Matching: text_801A797C (callee made extern "C"), text_8012D280 text_801B9028 text_801DE24C (8-aligned trailing vtable moved in from the jt_ unit, wG mvvt), text_8018F424 (extab_padding repeated per entry: [B1 02 B1 02]), text_8023D494 text_800F7138 text_801EFA90 (function definitions put back in address order)
- wCP (user-approved, collaborator units, 2026-11-01): matched fn_8023EA4C (timer manager tick, GC/2.0p1 for the int->float lfd placement)
- wCQ (user-approved, collaborator units, 2026-11-01): linked as Matching: text_8015E11C text_80208924
- wCQ (user-approved, collaborator units, 2026-11-01): linked as Matching: text_801B12FC

- wCN (user-approved, collaborator units, 2026-11-01): linked as Matching: text_8004C20C text_80089CC0 text_8007ED4C text_80089FC4 text_8008A2B4 text_8008A5A4 (each unit's static .data table carved out of its jt_ unit into the unit as the global lbl_ name, table words refilled from main.dol where the source had a copy of another unit's table; -Cpp_exceptions on)
- wCQ (user-approved, collaborator units, 2026-11-01): linked as Matching: text_801EF9A0

- wCT (user-approved, collaborator units, 2026-11-01): merged into one TU each (unit .data started at 4 mod 8 right after the preceding unit's table, so they were one source file), linked as Matching: text_8004F034..text_800501FC (10 units), text_80083DAC..text_80084588 (8 units, GC/2.0p1), text_8008C3B8..text_8008CA0C (7 units).
- wCT (user-approved, collaborator units, 2026-11-01): merged text_8009145C..text_800919A4 (8 units) into one TU with its full .data 802C9AA0-802CA04C (descriptor table lbl_802C9AA0 and vtable lbl_802C9F94 now defined in C from DOL words, pointers as relocations; lbl_802C9F94 force_active since only base+0x4F4 reaches it), linked as Matching.
- wCT (user-approved, collaborator units, 2026-11-01): linked as Matching after giving each unit its whole .data (descriptor table + the 0x38/0x50 vtable that sat between it and the unit's own jumptable, defined in C from DOL words with pointers as relocations; vtables force_active as they are reached only via base+offset): text_80044D78 text_8007F03C text_80093000 text_800A51D8 text_800A81EC text_800A9748 (jt_802D1F48 absorbed).
- wCV (user-approved, collaborator units, 2026-11-01): matched fn_80236808 (loop nest: outer loop indexed in a static inline taking the start index, called with 0) and fn_8014193C (end ptr `e = d + p->count` off the local).
- wCV (user-approved, collaborator units, 2026-11-01): linked as Matching: text_80236808
- wCT (user-approved, collaborator units, 2026-11-01): same full-.data treatment (descriptor table + 0x50 vtable defined in C, vtable force_active), linked as Matching: text_8008B124 text_800949B4 text_800A9F04 (jt_802CB720 absorbed).
- wCX (user-approved, collaborator units, 2026-11-01): matched fn_80148B68 (PNG unfilter; Paeth predictor as a static inline returning u32 with u8 params, row byte read into a local and stored as `v + r`) and merged text_80148E6C into text_80148B68.cpp (adjacent .data jump tables need one TU: E6C's 8-aligned .data started at 0x...D4); linked as Matching.
- wCW (user-approved, collaborator units, 2026-11-01): matched fn_8014CC80 (frustum planes; the reused k*y temp split into two named vars, decl order fixed the FPR colours) and fn_80065B48 (unit now owns .bss 0x803064F8..0x80306630: MWCC anchors TU-defined bss arrays on one base reg, which is what the target's 'addi r31,lbl_803064F8; addi r3,r31,0x120' shape is).
- wCW (user-approved, collaborator units, 2026-11-01): linked as Matching: text_80065B48 text_8014CC80
- wCH (user-approved, collaborator units, 2026-11-01): matched fn_8012EF44 fn_8012EF00 fn_80108EB4 fn_801757B8 fn_8015F760 fn_8015F6B0 fn_80164460 fn_801EF648 fn_8016BA38 fn_80116320 fn_801EAA74 fn_80265DFC fn_8002FDFC fn_8007115C fn_801499CC fn_801EF6AC fn_8020B224 fn_8021DACC fn_801A3260 fn_80030594 fn_80115784 fn_801E96A0 fn_80138BC4 fn_801952A0 fn_80106120 fn_801DD8B4 fn_80210830 fn_80115450 fn_80197C40 (units 801A3260/801DD8B4/80210830 now .cpp for vcalls); none promoted yet.
- wCW (user-approved, collaborator units, 2026-11-01): matched fn_801FCB64 (wE draft + case bodies in jump-table layout order, 'while ((t = Next()) != 6)', null-check-first select into a local) and fn_801EA69C (vptr after a 0x14-byte non-virtual base; 'ents[i].b == t->f30' compare order needed both fields typed as pointers; 44-byte item array at +0xc of the e2 object gives the mulli/addi/lhzx form).
- wCW (user-approved, collaborator units, 2026-11-01): linked as Matching: text_801FCB64 text_801EA69C
- wDB (user-approved, collaborator units, 2026-11-02): landed wCH matches fn_800F9BBC (text_800F9BB4), __dla__FPv (text_800F7EEC .c->.cpp; symbol __unexpected__FP9CatchInfo renamed __unexpected + extern "C" in Gecko_ExceptionPPC.cp since MWCC emits an unmangled ref for exception specs), fn_8024841C; all three linked as Matching.
- wCW (user-approved, collaborator units, 2026-11-01): matched fn_801A7F70 (wD's c7f3 draft + wCL's bit-test inline 'int v = (f >> 1) & 1; return v;' used for both the '== 1' and '== 0' tests, the busy check returning s32 from a u8 local, and 'Ent7F *t = o->f1bc; if (t) x = t[idx].f0;').
- wCW (user-approved, collaborator units, 2026-11-01): linked as Matching: text_801A7F70
- wDA (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801B3844
- wDD (user-approved, collaborator units, 2026-11-02): matched fn_8019F244/fn_8019F9B8/fn_801A012C (wCL plane-split draft; fixed the lfs order + FP colouring with volatile reads of pa->x and n->d, then d1 = pb->x; d1 -= d; d0 = ax - d; decls ax, d1, d, d0).
- wCZ (user-approved, collaborator units, 2026-11-02): linked as Matching: text_80268504
- wDC (user-approved, collaborator units, 2026-11-02): matched fn_8020F43C, fn_800AEFEC, fn_800AA0B0 (GetPos inline with volatile dest stores), fn_8021EFF4, fn_8021F314 (tri tests: opt_common_subs off + decl/stmt-order search).
- wDC (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8020F43C text_800AEFEC text_800AA0B0 text_8021EFF4 text_8021F314
- wDD (user-approved, collaborator units, 2026-11-02): matched fn_80126268 (wH draft; bit reader as an inline with a COUNT-DOWN loop for (i = n; i > 0; i--) { r <<= 1; r |= ...; } under opt_propagation off, int r, copied inline params b/k, pb = &bs local only for the first test, decl perms) and fn_80133AB8 (wH draft; volatile reads of f2.f24 and f2.f2C fix the load order before fn_80207A54).
- wDD (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8019F244 text_8019F9B8 text_801A012C text_80126268 text_80133AB8
- wDE (user-approved, collaborator units, 2026-11-02): matched fn_8017FD8C (renamed __dt__9C8017FFACFv: real C++ dtor of C8017FFAC, delete[] on a ctor-only class gives subi 16/__dla), fn_80225038 (extern string-pool base + both sda globals volatile), fn_8009C018 (extern pool base under opt_propagation off), fn_80070490 (asm-order stores, lmw), fn_80153FC0 (owns .data 0x802E67E0..0x802E683C as 3 tables, carved out of jt_802E664C; manual pointer/offset IVs).
- wDE (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8017FD8C text_80225038 text_8009C018 text_80070490 text_80153FC0
- wDE (user-approved, collaborator units, 2026-11-02): matched fn_8024A3D0 (local pair table = struct copy of extern rodata, decl order for the constraint loop, named f32 t = dist - rest), fn_80214590 (first lowercase loop indexed s[i], null-first return), fn_80087BD0 (dead store w.z kept via volatile store + volatile K read), fn_80039330/fn_8003A600/fn_8003A118 (float-store scheduling: volatile V locals + only the non-CSEd constants extern volatile).
- wDE (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8024A3D0 text_80214590 text_80087BD0 text_80039330 text_8003A600 text_8003A118
- wDE (user-approved, collaborator units, 2026-11-02): matched fn_80206164 (Dot() inline into named locals, natural x*x+y*y+z*z sums), fn_8007D9F8 (CB arg built by mk() inline + loop in a start-index inline fixes both arg-temp slots and IV regs), fn_80120D78 (bpp read before f56 store; palette loop in start-index inline).
- wDE (user-approved, collaborator units, 2026-11-02): linked as Matching: text_80206164 text_8007D9F8 text_80120D78
- wDE (user-approved, collaborator units, 2026-11-02): matched fn_8012E15C (palette blit loop: W()/H() rect inlines re-index t->f2c[i] per use, count read via inline cnt(), decl order it,buf,fl,i,n).
- wDE (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8012E15C
- wDF (user-approved, collaborator units, 2026-11-02): matched fn_8020F664/fn_80213704 (rest of fn after the reader fetch moved into an inline tail(p, getrd(p), name) fixes r/res colouring + call-result copy), fn_80032478 (type test as goto chain avoids MWCC range-merging; o read via n->o60 again for the r4 copy), fn_80116810 (int-cast byte ptr ((u32)dst + n*4) keeps base+off add), fn_802376C0 (in-place px -= from->x), fn_801BB258 (re-read field in the if gives the lwz r3/mr r29 copy), fn_80068AC4 (vector add via loaded temps, block-local q = o->a124).
- wDF (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8020F664 text_80213704 text_80032478 text_80116810 text_802376C0 text_801BB258 text_80068AC4
- wDH (user-approved, collaborator units, 2026-11-02): matched fn_801E17AC (wCH draft; volatile read of a->f8 pins load order), fn_8022CC44 (wK draft; volatile read of o->m->f168 before the trs load), fn_801FAB7C (wN draft; the 4 post-parse loops moved into one static inline with its own single u32 counter -> li/mr IV init), fn_80191484 (wS draft; wCQ trick: get3() in an inline returning it + the o lookup as an inline returning o in cases 97/159).
- wDH (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801E17AC text_8022CC44 text_801FAB7C
- wDE (user-approved, collaborator units, 2026-11-02): matched fn_8010A244 (alloc pairs: new u16[n]/new char[n] after the heap lock so the size is computed late; per-branch tmp/buf declared at function scope for the 5th saved reg).
- wDE (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8010A244
- wDH (user-approved, collaborator units, 2026-11-02): matched fn_801A0070 (wCI draft; volatile reads of the constant and a[5] into locals declared w,k), fn_8017BCCC (wG draft; 0/1 identity init with both constants read once via volatile into f32 o, z and volatile stack stores), fn_801B4DDC (wI draft; volatile z=0 store + one volatile read of lbl_80364F40 for the v[] init).
- wDF (user-approved, collaborator units, 2026-11-02): matched fn_800F8FF4 (probe loop in inline ins(p,e,v,hash) + #pragma auto_inline off around the fn so the recursive call is not inlined), fn_80187774 (m = getm(o) inline), fn_8016FDE4 (volatile lazy-const stores, proj with -= and a volatile v->x reload), fn_8014DEBC (both fill loops in a start-index inline, volatile struct stores with the sum computed before the k store, volatile entry loads + decl order).
- wDH (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801A0070 text_8017BCCC text_801B4DDC
- wDF (user-approved, collaborator units, 2026-11-02): linked as Matching: text_80187774 text_8016FDE4 text_8014DEBC
- wDH (user-approved, collaborator units, 2026-11-02): matched fn_801E3F70 / fn_801EB340 (wCI drafts) + fn_801E7008 / fn_801E7D14 (new): the `li r0,0` before the field load (load hoisted above the zero stores) = BOTH params `__restrict`, with the field read into a local before the stores.
- wDH (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801E3F70 text_801EB340 text_801E7008 text_801E7D14
- wDI (user-approved, collaborator units, 2026-11-02): matched fn_801044C4 fn_8009E85C fn_8015C998
- wDF (user-approved, collaborator units, 2026-11-02): (extab_padding=[0xB1,0x02]) linked as Matching: text_800F8FF4
- wDI (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801044C4 text_8009E85C text_8015C998
- wDJ (user-approved, collaborator units, 2026-11-02): matched + linked fn_80232440 (wCZ draft, parked): volatile component stores to c2 + `extern S308 * volatile lbl_8035B308` keep the global load after the stores; t/e scaled in place as scalar locals (`tx *= sx`, `ex -= cx` ... `ex *= sc`).
- wDH (user-approved, collaborator units, 2026-11-02): matched fn_801B673C (wAA draft; the desel loops written as the same static inline as fn_801B4654 - shared u32 i, both loops for (i = 0; ...) - gives the target mr IV init) and fn_80189660 (wCH draft; both params __restrict lets the z loads hoist above the o->fc store).
- wDH (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801B673C
- wDH (user-approved, collaborator units, 2026-11-02): matched fn_801CB700 (wAA draft; the v52 notify loop moved into a static inline with its own Node *m, setState hand-inlined using a fn-level Node *q declared after n, f).
- wDH (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801CB700
- wDH (user-approved, collaborator units, 2026-11-02): matched fn_8014C784 (wCI draft; plain field copies with both params __restrict give the hoisted byte loads) and re-did fn_80189660 as .cpp (its unit has extab, the .c match could not link).
- wDK (user-approved, collaborator units, 2026-11-02): matched and linked as Matching: text_801DBACC text_801FC3F8 (wE drafts)
- wDH (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8014C784 text_80189660
- wDI (user-approved, collaborator units, 2026-11-02): matched fn_801040E0 (self-recursive, inline_depth(3))
- wDI (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801040E0
- wDI (user-approved, collaborator units, 2026-11-02): matched fn_801F6EA0
- wDI (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801F6EA0
- wDM (user-approved, collaborator units, 2026-11-02): matched fn_80061358, fn_801DEE18, fn_80253B70 by adding __restrict to pointer params of saved near-miss drafts (wCJ/ae.c, wCH/m_801DEE18.cpp, wK/af_a.cpp; wDH restrict sweep).
- wDL (user-approved, collaborator units, 2026-11-02): matched fn_8018019C (chunk-type t passed as 3rd arg to the default handler, (u32) loop test + signed switch), fn_8024E7BC (sized extern char[] sdata2 strings, buf/tmp reverse decl order, cached base/obj locals before the dead flag tests), fn_8020C1FC (block-align inline with q *= bs in the loop, bs re-read in the first one).
- wDM (user-approved, collaborator units, 2026-11-02): linked as Matching: text_801DEE18 text_80253B70
- wDL (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8024E7BC text_8020C1FC
- wDK (user-approved, collaborator units, 2026-11-02): matched and linked as Matching: text_8008B3F8 (volatile vec-sub stores + volatile K read) text_801DB7A8 (inline flag test as '?1:0')
- wDL (user-approved, collaborator units, 2026-11-02): (extab_padding=[0xB1,0x02,0xB1,0x02]: two new[] cleanup actions each need the pad) linked as Matching: text_8018019C
- wDM (user-approved, collaborator units, 2026-11-02): fn_80061358 re-done as .cpp (unit has extab; the .c match could not link).
- wDM (user-approved, collaborator units, 2026-11-02): linked as Matching: text_80061358
- wDK (user-approved, collaborator units, 2026-11-02): matched and linked as Matching: text_801B7FF4 (shared loop counter, volatile idx/K, volatile box.x0 re-read) text_80031D80 (recursive walker; getters return u32)
- wDL (user-approved, collaborator units, 2026-11-02): matched fn_8020C558 (async read twin of fn_8020C1FC: volatile flags, vptr at 0x10 in F, decl-order perm), fn_801B63C0 (mirror of matched fn_801B673C), fn_802466B4 (eval inline called for t and t-times[i], *pos = *def copies, volatile K0 read in the wrap loop).
- wDL (user-approved, collaborator units, 2026-11-02): linked as Matching: text_8020C558 text_801B63C0 text_802466B4
- wDK (user-approved, collaborator units, 2026-11-02): matched and linked as Matching: text_801B3EB0 (scroll-family idioms from text_801B58B4)
- wDN (user-approved, collaborator units, 2026-11-02): matched fn_801748B0 (volatile recipe + owns .rodata 802A0F20-802A0FE8), fn_801C8BD0 (fresh block-scoped flag in last notify loop); linked as Matching: text_801748B0 text_801C8BD0
- wDK (user-approved, collaborator units, 2026-11-02): matched and linked as Matching: text_801D52A0 (node-pool alloc, written from asm)
