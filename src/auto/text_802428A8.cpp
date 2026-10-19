// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800EB1B4(void);
void fn_80116B10(int, int, int);

u32 fn_802428A8(u32 param_1, u32 param_2, s32 param_3) {
    u32 uVar1;
    u32 uVar2;
    u8 auStack_18[4];

    fn_80116B10((int)(param_2), (int)(*(u32 *)(param_3 + 4)), (int)(auStack_18));
    uVar2 = *(u32 *)(param_3 + 4);
    uVar1 = 0;
    if (uVar2 != 0) {
        uVar1 = fn_800EB1B4();
        uVar1 = uVar1 % uVar2;
    }
    return uVar1 & 0xffff;
}

} /* extern "C" */
