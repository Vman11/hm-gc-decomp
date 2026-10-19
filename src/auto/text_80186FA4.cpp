// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80182BAC(int);

void fn_80186FA4(s32 param_1) {
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_80182BAC((int)(param_1));
        *(u32 *)(param_1 + 0x54) = 0;
    }
}

} /* extern "C" */
