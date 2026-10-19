// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801C12B0(int, int);

void fn_801C1284(s32 param_1) {
    *(u32 *)(param_1 + 0x20) = 0;
    fn_801C12B0((int)(param_1), (int)(*(u32 *)(param_1 + 0x10)));
}

} /* extern "C" */
