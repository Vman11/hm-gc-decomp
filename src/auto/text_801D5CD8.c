// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

s32 fn_801C05EC();
void fn_801DBE0C();

u32 fn_801D5CD8(s32 param_1, u32 param_2) {
    u32 uVar1;
    s32 iVar3;
    u32 uVar2;

    fn_801DBE0C();
    if (*(u32 *)(param_1 + 0x2dc) != 0) {
        uVar1 = fn_801C05EC(param_1,param_2,*(u32 *)(param_1 + 0x2dc));
        *(u32 *)(param_1 + 0x2dc) = uVar1;
    }
    if (*(u32 *)(param_1 + 0x2e0) != 0) {
        uVar1 = fn_801C05EC(param_1,param_2,*(u32 *)(param_1 + 0x2e0));
        *(u32 *)(param_1 + 0x2e0) = uVar1;
    }
    if (*(u32 *)(param_1 + 0x31c) != 0) {
        uVar2 = 0;
        iVar3 = 0;
        for (; uVar2 < *(u32 *)(param_1 + 0x360); uVar2 = uVar2 + 1) {
            if (*(u32 *)(*(u32 *)(param_1 + 0x31c) + iVar3 + 0x14) != 0) {
                uVar1 = fn_801C05EC(param_1,param_2,*(u32 *)(*(u32 *)(param_1 + 0x31c) + iVar3 + 0x14));
                *(u32 *)(*(u32 *)(param_1 + 0x31c) + iVar3 + 0x14) = uVar1;
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}
