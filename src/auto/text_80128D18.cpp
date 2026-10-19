// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_80128D18(s32 param_1) {
    if (*(void **)(param_1 + 0x54) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x54)));
    }
    *(u32 *)(param_1 + 0x38) = 0xffffffff;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x4c) = 0;
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
}

} /* extern "C" */
