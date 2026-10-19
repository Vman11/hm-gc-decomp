// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_800FBD10(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    if (param_1[2] != 0) {
        if ((param_1[2] != 0) && ((*param_1 & 1) == 0)) {
            __dla__FPv((int)(param_1[2]));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
    }
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_2;
    *param_1 = 1;
}

} /* extern "C" */
