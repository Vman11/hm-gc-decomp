// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_801BDA0C(s32 param_1, u32 param_2) {
    if (*(void **)(param_1 + 0x68) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x68)));
        *(u32 *)(param_1 + 0x68) = 0;
    }
    *(u32 *)(param_1 + 0x70) = param_2;
}

} /* extern "C" */
