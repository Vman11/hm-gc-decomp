// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801B31F8_0 { char vptr_pad[0x38]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(); };

void fn_801B31F8(s32 *param_1) {
    u32 iVar1;

    if (*(s32 *)(*param_1 + 4) != 0) {
        iVar1 = param_1[9];
        if (iVar1 != 0) {
            if (((*(u32 *)(iVar1 + 8) & 8) != 0) && ((*(u32 *)(iVar1 + 8) & 0x10) != 0)) {
                ((VCall_fn_801B31F8_0 *)(iVar1))->m();
            }
        }
    }
}
}
