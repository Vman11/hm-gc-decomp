// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80147CD8(int);

void fn_80160E24(s32 param_1, u32 param_2, s32 param_3) {
    u16 uVar1;

    uVar1 = fn_80147CD8((int)(*(u32 *)(param_1 + 0x14)));
    *(u16 *)(*(s32 *)(param_1 + 0x18) + param_3 * 2) = uVar1;
}

} /* extern "C" */
