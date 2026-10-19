// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8026A544(int, int, int);

void fn_80248630(s32 param_1, s32 param_2) {
    fn_8026A544((int)(*(u32 *)(param_1 + 0x14)), (int)(param_1), (int)(*(s32 *)(param_1 + 0x28) + param_2 * 4));
}

} /* extern "C" */
