// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

s32 fn_801C05EC();
void fn_801DBE0C();

u32 fn_801BA3D4(s32 param_1, u32 param_2) {
    u32 *puVar1;
    s32 *piVar2;
    u32 uVar3;
    s32 iVar5;
    u32 uVar4;

    fn_801DBE0C();
    uVar4 = 0;
    iVar5 = 0;
    for (; uVar4 < *(u32 *)(param_1 + 0x198); uVar4 = uVar4 + 1) {
        uVar3 = fn_801C05EC(param_1,param_2,*(u32 *)(*(s32 *)(param_1 + 0x174) + iVar5));
        *(u32 *)(*(s32 *)(param_1 + 0x174) + iVar5) = uVar3;
        puVar1 = (u32 *)(*(s32 *)(param_1 + 0x178) + iVar5);
        piVar2 = (s32 *)(*(s32 *)(param_1 + 0x174) + iVar5);
        iVar5 = iVar5 + 4;
        *(u32 *)(*piVar2 + 0x170) = *puVar1;
    }
    return 0;
}
