// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801FBFF8(void);
struct VCall_fn_801FF76C_0 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };

void fn_801FF76C(s32 param_1, s32 param_2) {
    u32 uVar1;

    *(u32 *)(param_1 + 0x5c) = 0;
    *(u32 *)(param_1 + 100) = 0;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 0x68) = 0;
    *(u32 *)(param_1 + 0x6c) = 0;
    fn_801FBFF8();
    *(u32 *)(param_1 + 0x5c) = *(u32 *)(param_2 + 8);
    uVar1 = ((VCall_fn_801FF76C_0 *)(*(s32 *)(param_1 + 0x5c)))->m();
    *(u32 *)(param_1 + 100) = uVar1;
}
}
