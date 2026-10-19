// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_80261BC4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_80261BC4_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80261BC4_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_80261BC4(s32 *param_1, u32 param_2) {
    s32 iVar1;

    iVar1 = ((VCall_fn_80261BC4_0 *)(param_1))->m();
    if (iVar1 != 0) {
        ((VCall_fn_80261BC4_1 *)(param_1))->m();
    }
    ((VCall_fn_80261BC4_2 *)(param_1))->m((s32)(param_2));
}
}
