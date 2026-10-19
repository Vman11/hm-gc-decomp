// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80272A10_0 { char vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };

void fn_80272A10(s32 param_1) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        ((VCall_fn_80272A10_0 *)(*(u32 *)(param_1 + 0x14)))->m();
    }
}
}
