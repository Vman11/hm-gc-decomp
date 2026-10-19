// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801482DC(int, int);

void fn_8014CB00(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6) {
    *param_1 = param_2;
    param_1[1] = param_3;
    fn_801482DC((int)(param_1 + 2), (int)(param_4));
    param_1[7] = param_5;
    param_1[8] = param_6;
}

} /* extern "C" */
