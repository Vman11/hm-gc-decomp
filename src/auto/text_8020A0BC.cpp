// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8020A0BC_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

void fn_8020A0BC(s32 param_1, u32 param_2) {
    if (*(s32 *)(param_1 + 0xb4) != 0) {
        ((VCall_fn_8020A0BC_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x18) = param_2;
    *(u32 *)(param_1 + 0xb4) = 1;
}
}
