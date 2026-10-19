// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801EA624_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(); };

void fn_801EA624(s32 param_1) {
    if (*(s32 *)(param_1 + 0x3c) == 0) {
        if ((*(s32 *)(param_1 + 0x38) != 0) && ((*(u32 *)(param_1 + 0x34) & 2) != 0)) {
            ((VCall_fn_801EA624_0 *)(param_1))->m();
        }
    }
    *(u32 *)(param_1 + 0x38) = *(u32 *)(param_1 + 0x3c);
}
}
