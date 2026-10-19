// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F6E88(int);

void fn_802237B8(s32 param_1) {
    *(u32 *)(param_1 + 0x308) = 1;
    fn_800F6E88((int)(param_1 + 0x30c));
}

} /* extern "C" */
