// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F9FE0(int, int);

void fn_800F5630(u32 *param_1, u32 param_2) {
    u32 uVar1;

    for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
        fn_800F9FE0((int)(*param_1), (int)(9));
    }
}

} /* extern "C" */
