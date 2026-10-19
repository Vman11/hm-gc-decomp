// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 strlen(int);

void fn_800FB7EC(s32 param_1) {
    u32 sVar1;

    *(u32 *)(param_1 + 4) = 0;
    sVar1 = strlen((int)(*(s8 **)(param_1 + 0x10)));
    *(u32 *)(param_1 + 8) = sVar1;
}

} /* extern "C" */
