// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801A2970_0 { char vptr_pad[0x8c]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_801A2970(s32 param_1, u32 *param_2, u32 param_3) {
    ((VCall_fn_801A2970_0 *)(param_1))->m();
    *(u32 *)(param_1 + 0x88) = *param_2;
    *(u32 *)(param_1 + 0x80) = param_3;
}
}
