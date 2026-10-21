// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800BD810(void *, u32, u32, u32, u32, u32);
s32 fn_800BFAA8(void *);
void *memset(void *, int, unsigned long);

void fn_80205504(u32 param_1, u8 *param_2) {
    u32 uVar1;
    s32 iVar3;
    u8 *iVar4;
    u32 uVar2;
    u32 iVar5;

    iVar4 = *(u8 **)(param_2 + 0x2c);
    iVar3 = *(s32 *)(iVar4 + 0x44);
    uVar1 = iVar3 + 0x1fU & 0xffffffe0;
    uVar2 = *(s32 *)(iVar4 + 0x48) + 0x1fU & 0xffffffe0;
    memset((void *)(*(s32 *)(iVar4 + 0x4c) + iVar3), 0, uVar1 - iVar3);
    iVar5 = *(s32 *)(iVar4 + 0x4c) + uVar1;
    if (fn_800BFAA8(iVar4 + 0x70) == 0) {
        fn_800BD810(iVar4 + 0x70, iVar5, uVar2, 0, 0, 2);
    } else if (fn_800BFAA8(iVar4 + 0xac) == 0) {
        fn_800BD810(iVar4 + 0xac, iVar5, uVar2, 0, 0, 2);
    } else if (fn_800BFAA8(iVar4 + 0xe8) == 0) {
        fn_800BD810(iVar4 + 0xe8, iVar5, uVar2, 0, 0, 2);
    }
}

} /* extern "C" */
