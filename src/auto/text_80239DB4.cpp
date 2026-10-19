// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_8023B7DC(int, int, int);

void fn_80239DB4(u32 *param_1) {
    u32 iVar1;

    if (*param_1 == 0) {
        *param_1 = 4;
    }
    iVar1 = fn_8023B7DC((int)(param_1[7]), (int)(param_1[2]), (int)(*param_1));
    param_1[5] = iVar1;
}

} /* extern "C" */
