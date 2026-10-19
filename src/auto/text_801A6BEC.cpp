// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_800F8DD0(int);

void fn_801A6BEC(s32 param_1) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        if (*(u32 *)(param_1 + 0x14) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0x14) + -0x10));
        }
    }
    fn_800F8DD0((int)(param_1));
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
}

} /* extern "C" */
