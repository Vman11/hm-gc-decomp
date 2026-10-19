// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_800FBCB8(u32 *param_1) {
    if ((param_1[2] != 0) && ((*param_1 & 1) == 0)) {
        __dla__FPv((int)(param_1[2]));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
}

} /* extern "C" */
