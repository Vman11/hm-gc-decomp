// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_801CC694(s32 param_1) {
    __dla__FPv((int)(*(u32 *)(param_1 + 0x40)));
    *(u32 *)(param_1 + 0x40) = 0;
}

} /* extern "C" */
