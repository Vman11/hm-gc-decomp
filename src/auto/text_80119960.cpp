// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
typedef struct { u8 b[8]; } Copy8;
struct VCall_fn_80119960_0 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_80119960(u32 *param_1, u32 *param_2, u32 param_3) {
    u32 uVar1;

    if (param_1[5] != 0) {
        ((VCall_fn_80119960_0 *)(param_1))->m();
    }
    param_1[5] = param_3;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(u16 *)(param_1 + 2) = *(u16 *)(param_2 + 2);
    *(u16 *)((s32)param_1 + 10) = *(u16 *)((s32)param_2 + 10);
    *(Copy8 *)(param_1 + 3) = *(Copy8 *)(param_2 + 3);
}
}
