// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 fn_800FB33C(int);
struct VCall_fn_80140030_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_80140030(u32 *param_1, s32 param_2) {
    u32 uVar1;

    uVar1 = fn_800FB33C((int)(param_2));
    *param_1 = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[1] = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[2] = uVar1;
    if (param_1[2] == 0) {
        ((VCall_fn_80140030_0 *)(param_2))->m((s32)(0x23));
    }
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[3] = uVar1;
}
}
