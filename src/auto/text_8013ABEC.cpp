// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_8013ABEC(u16 *param_1) {
    if (*(u32 *)(param_1 + 4) != 0) {
        if (*(u32 *)(param_1 + 4) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 4) + -0x10));
        }
    }
    if (*(u32 *)(param_1 + 6) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 6)));
    }
    if (*(u32 *)(param_1 + 8) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 8)));
    }
    if (*(u32 *)(param_1 + 10) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 10)));
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(u8 *)(param_1 + 3) = 0;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 6) = 0;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 10) = 0;
}

} /* extern "C" */
