// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80110444(int, int, int);

u32 fn_80110AA4(u32 param_1, u32 param_2) {
    u32 *puVar1;
    u32 uVar2;

    puVar1 = (u32 *)fn_80110444((int)(param_1), (int)(param_2), (int)(0));
    if (puVar1 == (u32 *)0x0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *puVar1;
    }
    return uVar2;
}

} /* extern "C" */
