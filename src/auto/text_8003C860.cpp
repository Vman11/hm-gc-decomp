// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FA474(int, int, int);

void fn_8003C860(s32 param_1, s32 param_2, u32 param_3) {
    fn_800FA474((int)(param_3), (int)(param_1 + (param_2 + -1) * 0x1e + 0x1c), (int)(0x1e));
}

} /* extern "C" */
