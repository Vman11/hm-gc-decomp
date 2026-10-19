// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801358C8(int);

void fn_801635E4(s32 param_1) {
    *(u32 *)(*(s32 *)(param_1 + 0x1934) + 0x27a0) = 0;
    fn_801358C8((int)(param_1));
}

} /* extern "C" */
