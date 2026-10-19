// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_8021AEE8(int, int, int);

u32 fn_8021A9CC(u32 param_1, u32 param_2) {
    u32 uVar1;
    u8 auStack_8 [8];

    uVar1 = fn_8021AEE8((int)(param_1), (int)(param_2), (int)(auStack_8));
    return uVar1 >> 0x1f;
}

} /* extern "C" */
