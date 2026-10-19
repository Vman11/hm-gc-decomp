// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_801AAA5C(int, int, int);

void fn_801CC64C(u32 *param_1, s32 param_2) {
    u32 uVar1;

    uVar1 = fn_801AAA5C((int)(*param_1), (int)(param_1[0x10]), (int)(*(u32 *)(param_2 + (u32)*(u8 *)(param_1 + 0xf) * 4)));
    param_1[9] = uVar1;
}

} /* extern "C" */
