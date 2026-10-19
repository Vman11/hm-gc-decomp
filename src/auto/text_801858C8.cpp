// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A1444(void);

void fn_801858C8(s32 param_1, u32 param_2) {
    *(u32 *)(param_1 + 0x90) = param_2;
    fn_801A1444();
}

} /* extern "C" */
