// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80272A48_0 { char vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(); };

void fn_80272A48(s32 param_1) {
    *(u32 *)(param_1 + 0x18) = 0;
    ((VCall_fn_80272A48_0 *)(*(s32 *)(param_1 + 0x14)))->m();
}
}
