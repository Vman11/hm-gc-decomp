// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_80218560(s32 param_1) {
    if (*(u32 *)(param_1 + 400) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 400)));
    }
    *(u32 *)(param_1 + 400) = 0;
    *(u32 *)(param_1 + 0x194) = 0;
    *(u32 *)(param_1 + 0x198) = 0;
    *(u32 *)(param_1 + 0x19c) = 0;
    *(u32 *)(param_1 + 0x1a0) = 0;
    *(u32 *)(param_1 + 0x1a4) = 0;
    *(u32 *)(param_1 + 0x1a8) = 0;
    *(u32 *)(param_1 + 0x1ac) = 0;
    *(u16 *)(param_1 + 0x1b0) = 0;
    *(u16 *)(param_1 + 0x1b2) = 0;
}

} /* extern "C" */
