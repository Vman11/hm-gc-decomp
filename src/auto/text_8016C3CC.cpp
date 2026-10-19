// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D6DAC(int);

void fn_8016C3CC(s32 param_1, u32 param_2) {
    s32 iVar1;

    *(u32 *)(param_1 + 0x32c) = param_2;
    iVar1 = *(s32 *)(param_1 + 0x32c);
    if (*(s32 *)(param_1 + 0x23d4) != iVar1) {
        *(s32 *)(param_1 + 0x23d4) = iVar1;
        fn_800D6DAC((int)(iVar1));
    }
}

} /* extern "C" */
