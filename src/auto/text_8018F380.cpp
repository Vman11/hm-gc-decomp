// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018EE6C(int, int);

void fn_8018F380(s32 param_1) {
    fn_8018EE6C((int)(*(s32 *)(param_1 + 8) + (*(s32 *)(param_1 + 4) + 1) * 8), (int)(*(s32 *)(param_1 + 8) + *(s32 *)(param_1 + 4) * 8));
    *(s32 *)(param_1 + 4) = *(s32 *)(param_1 + 4) + 1;
}

} /* extern "C" */
