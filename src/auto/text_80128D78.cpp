// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_80128D78(s32 param_1) {
    if ((*(u32 *)(param_1 + 8) & 0x10) != 0) {
        if (*(void **)(param_1 + 0x54) != 0) {
            __dla__FPv((int)(*(void **)(param_1 + 0x54)));
        }
        *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) & 0xffffffef;
    }
}

} /* extern "C" */
