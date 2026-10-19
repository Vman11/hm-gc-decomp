// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_802139BC_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

void fn_802139BC(s32 param_1, u32 param_2) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        ((VCall_fn_802139BC_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x14) = param_2;
}
}
