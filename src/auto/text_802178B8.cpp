// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800B48F4(u32, u32);

void fn_802178B8(u8 *param_1, s32 *param_2, u32 *param_3) {
    u8 *pbVar1;

    pbVar1 = (u8 *)*param_2;
    *param_1 = *pbVar1;
    param_1[1] = pbVar1[1];
    *(u16 *)(param_1 + 2) = *(u16 *)(pbVar1 + 2);
    *(u32 *)(param_1 + 8) = *(u32 *)(pbVar1 + 4);
    *param_2 = *param_2 + 8;
    *(u32 *)(param_1 + 0xc) = (param_1[1] << 1) + ((*param_1 & 2) >> 1);
    *param_3 = *param_3 + 0x1f & 0xffffffe0;
    *(u32 *)(param_1 + 4) = *param_3;
    *param_3 = *param_3 + *(s32 *)(param_1 + 8);
    fn_800B48F4(*(u32 *)(param_1 + 4), *(u32 *)(param_1 + 8));
}

} /* extern "C" */
