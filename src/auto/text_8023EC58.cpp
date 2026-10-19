// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800FBB9C(void);

void fn_8023EC58(s32 param_1, u32 param_2) {
    u32 uVar1;

    *(u32 *)(param_1 + 8) = param_2;
    *(u32 *)(param_1 + 0xc) = *(u32 *)(param_1 + 8);
    uVar1 = fn_800FBB9C();
    *(u32 *)(param_1 + 4) = uVar1;
}

} /* extern "C" */
