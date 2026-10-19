// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

s32 fn_801C05EC();
void fn_801DBE0C();

u32 fn_801BCC3C(s32 param_1, u32 param_2) {
    u32 uVar1;
    s32 iVar3;
    s32 iVar2;

    fn_801DBE0C();
    iVar2 = 0;
    iVar3 = 0;
    for (; iVar2 < *(s32 *)(param_1 + 0x16c); iVar2 = iVar2 + 1) {
        uVar1 = fn_801C05EC(param_1,param_2,*(u32 *)(*(s32 *)(param_1 + 0x164) + iVar3));
        *(u32 *)(*(s32 *)(param_1 + 0x164) + iVar3) = uVar1;
        iVar3 = iVar3 + 4;
    }
    return 0;
}
