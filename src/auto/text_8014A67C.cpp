// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_8014A67C(s32 param_1) {
    if (*(void **)(param_1 + 0x8c) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x8c)));
    }
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0x88) = 0;
    *(u32 *)(param_1 + 0x8c) = 0;
    *(u32 *)(param_1 + 0x90) = 0;
}

} /* extern "C" */
