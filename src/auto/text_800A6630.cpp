// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_8029ADE8[];
extern char lbl_80361E64[0x8];
struct VCall_fn_800A6630_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_800A6630_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_800A6630(s32 *param_1) {
    ((VCall_fn_800A6630_0 *)(param_1))->m((s32)(lbl_8029ADE8)); /* "LIGHTOFF" */
    ((VCall_fn_800A6630_1 *)(param_1))->m((s32)(lbl_80361E64)); /* "LIGHTON" */
}
}
