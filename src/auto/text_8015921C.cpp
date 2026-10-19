// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8015921C_0 { char vptr_pad[0x44]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

void fn_8015921C(s32 param_1, s32 param_2) {
    *(s32 *)(param_1 + 0x28) = param_2;
    ((VCall_fn_8015921C_0 *)(*(s32 *)(param_1 + 0x2c) + *(s32 *)(*(s32 *)(param_1 + 0x2c) + 0xe0) * 0x70
                                             ))->m();
    *(s32 *)(*(s32 *)(param_1 + 0x2c) + 0xe4) = *(s32 *)(*(s32 *)(param_1 + 0x2c) + 0xe4) + param_2;
}
}
