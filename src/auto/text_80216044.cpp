// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80207BF4(int, int);

void fn_80216044(s32 param_1, u32 param_2) {
    s32 iVar2;
    u32 uVar1;

    iVar2 = 0;
    for (uVar1 = 0; uVar1 < *(u32 *)(param_1 + 0x5c); uVar1 = uVar1 + 1) {
        fn_80207BF4((int)(*(u32 *)(*(s32 *)(param_1 + 100) + iVar2)), (int)(param_2));
        iVar2 = iVar2 + 4;
    }
}

} /* extern "C" */
