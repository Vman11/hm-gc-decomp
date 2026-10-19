// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801EDAE4_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(int, int); };

void fn_801EDAE4(s32 param_1) {
    if ((*(u32 *)(*(s32 *)(param_1 + 0x18) + 0x70) & *(u32 *)(param_1 + 0x1c)) != 0) {
        ((VCall_fn_801EDAE4_0 *)(param_1))->m((u32)(*(s32 *)(param_1 + 0x18)), (u32)(*(u32 *)(param_1 + 0x1c)));
    }
}
}
