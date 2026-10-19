// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_801EB7B0(s32 param_1) {
    if (*(u32 *)(param_1 + 8) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 8)));
    }
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0xc) = 0;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0x10) = 0;
}

} /* extern "C" */
