// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A75B8(void);

void fn_801CB394(s32 param_1) {
    fn_801A75B8();
    *(u32 *)(param_1 + 0x168) = 0;
    *(u32 *)(param_1 + 0x16c) = 0;
}

} /* extern "C" */
