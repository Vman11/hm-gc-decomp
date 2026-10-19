// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80111134(int, int);

void fn_8010F17C(s32 param_1, s32 param_2, u32 param_3) {
    fn_80111134((int)(param_1 + param_2 * 0x20 + 0x38), (int)(param_3));
}

} /* extern "C" */
