// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800FB33C(int);

void fn_8021DACC(s32 param_1, u32 param_2) {
    u16 uVar1;
    s32 iVar3;
    u32 uVar2;

    iVar3 = 0;
    for (uVar2 = 0; uVar2 < *(u32 *)(param_1 + 0xc); uVar2 = uVar2 + 1) {
        uVar1 = fn_800FB33C((int)(param_2));
        *(u16 *)(*(s32 *)(param_1 + 0x28) + iVar3) = uVar1;
        iVar3 = iVar3 + 2;
    }
}

} /* extern "C" */
