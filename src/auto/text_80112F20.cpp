// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void memmove(int, int, int);
struct VCall_fn_80112F20_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_80112F20(s32 *param_1, s32 param_2) {
    u32 uVar1;

    uVar1 = param_2 + 1;
    if (uVar1 < *(u32 *)(*param_1 + 0x10)) {
        memmove((int)((void *)(param_1[4] + param_2 * 0x14)), (int)((void *)(param_1[4] + uVar1 * 0x14)), (int)((*(u32 *)(*param_1 + 0x10) - uVar1) * 0x14));
        memmove((int)((void *)(param_1[3] + param_2 * 4)), (int)((void *)(param_1[3] + (param_2 + 1) * 4)), (int)((*(s32 *)(*param_1 + 0x10) - (param_2 + 1)) * 4));
    }
    ((VCall_fn_80112F20_0 *)(param_1))->m((s32)(*(s32 *)(*param_1 + 0x10) + -1));
}
}
