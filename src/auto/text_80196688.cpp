// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019626C(int);

void fn_80196688(s32 param_1) {
    s32 iVar2;
    u32 uVar1;

    iVar2 = 0;
    for (uVar1 = 0; uVar1 < *(u32 *)(param_1 + 0xa0); uVar1 = uVar1 + 1) {
        fn_8019626C((int)(*(s32 *)(param_1 + 0xa4) + iVar2));
        iVar2 = iVar2 + 0x34;
    }
}

} /* extern "C" */
