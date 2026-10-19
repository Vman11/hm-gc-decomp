// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8016CBA8(int, int);

void fn_801716A0(s32 param_1, u32 param_2) {
    *(u32 *)(param_1 + 0x2c) = param_2;
    fn_8016CBA8((int)(*(u32 *)(param_1 + 0x2c)), (int)(param_1));
}

} /* extern "C" */
