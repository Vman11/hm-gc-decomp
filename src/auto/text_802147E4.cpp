// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800EB720(int, int, int);

void fn_802147E4(s32 param_1, u32 param_2, u32 param_3) {
    fn_800EB720((int)(param_1 + 200), (int)(param_2), (int)(0x1f));
    fn_800EB720((int)(param_1 + 0xe8), (int)(param_3), (int)(0x1f));
}

} /* extern "C" */
