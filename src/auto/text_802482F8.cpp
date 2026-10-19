// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8026ABCC(int, int, int, int);

void fn_802482F8(s32 param_1, s32 param_2, u32 param_3) {
    fn_8026ABCC((int)(*(u32 *)(param_1 + 0x14)), (int)(param_1), (int)(*(s32 *)(param_1 + 0x28) + param_2 * 4), (int)(param_3));
}

} /* extern "C" */
