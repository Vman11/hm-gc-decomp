// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800BD338(int, int);

void fn_80208BB8(s32 param_1, u32 param_2) {
    u32 uVar1;

    uVar1 = fn_800BD338((int)(param_2), (int)(param_1 + 4));
    *(u32 *)(param_1 + 0x40) = uVar1;
}

} /* extern "C" */
