// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8014B124(int);

void fn_8014AD6C(s32 param_1) {
    fn_8014B124((int)(param_1 + 4));
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 3;
    *(u16 *)(param_1 + 0x1c) = 0;
    *(u16 *)(param_1 + 0x1e) = 0;
}

} /* extern "C" */
