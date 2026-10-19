// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F80DC(int, int, int);

void fn_8023A444(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 local_18;

    param_1[7] = param_4;
    *param_1 = param_2;
    fn_800F80DC((int)(param_4), (int)(param_3), (int)(&local_18));
    param_1[2] = local_18;
}

} /* extern "C" */
