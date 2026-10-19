// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F85F0(int, int);

void fn_801C05EC(u32 param_1, u32 param_2, s32 param_3) {
    fn_800F85F0((int)(param_2), (int)(param_3 + -1));
}

} /* extern "C" */
