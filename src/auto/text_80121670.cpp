// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800FB33C(int);

void fn_80121670(u8 *param_1, u32 param_2) {
    u8 uVar1;

    uVar1 = fn_800FB33C((int)(param_2));
    *param_1 = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[1] = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[2] = uVar1;
    uVar1 = fn_800FB33C((int)(param_2));
    param_1[3] = uVar1;
}

} /* extern "C" */
