// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80247AD4(int, int);

void fn_80240028(s32 param_1) {
    fn_80247AD4((int)(*(u32 *)(param_1 + 0x100)), (int)(*(u32 *)(param_1 + 0x104)));
}

} /* extern "C" */
