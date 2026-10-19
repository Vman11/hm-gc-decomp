// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8020A9C4_0 { char vptr_pad[0x10]; virtual void p0(); virtual int m(); };

u32 fn_8020A9C4(s32 param_1, s32 param_2) {
    u32 uVar1 = ((VCall_fn_8020A9C4_0 *)(param_2))->m();
    *(s32 *)(param_1 + 0x6a4) = *(s32 *)(param_1 + 0x6a4) + -1;
    return uVar1;
}
}
