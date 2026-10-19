// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035A9F0;
extern s32 lbl_8035A9F4;
s32 fn_800F7640(int);
void fn_800F7670(int, int, int);
s32 fn_800F7B04(int, int, int);
void fn_800FB4CC(int);

void fn_80060F0C(s32 param_1) {
    u32 uVar1;
    s32 iVar2;
    u32 uVar3;

    uVar1 = fn_800F7B04((int)(lbl_8035A9F0), (int)(0xf00000), (int)(4));
    *(u32 *)(param_1 + 0x34e0) = uVar1;
    uVar1 = fn_800F7B04((int)(lbl_8035A9F0), (int)(0x12400), (int)(4));
    *(u32 *)(param_1 + 0x34e4) = uVar1;
    iVar2 = fn_800F7640((int)(lbl_8035A9F0));
    uVar3 = iVar2 - 0x400;
    if (uVar3 > 0xf00000) {
        uVar3 = 0xf00000;
    }
    uVar1 = fn_800F7B04((int)(lbl_8035A9F0), (int)(uVar3), (int)(4));
    *(u32 *)(param_1 + 0x34e8) = uVar1;
    fn_800F7670((int)(lbl_8035A9F0), (int)(*(u32 *)(param_1 + 0x34e0)), (int)(*(u32 *)(param_1 + 0x34e8)));
    fn_800FB4CC((int)(lbl_8035A9F4));
}

} /* extern "C" */
