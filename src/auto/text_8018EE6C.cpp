// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018FF64(int, int, int);

void fn_8018EE6C(u32 *param_1, s32 param_2) {
    u32 *puVar1;
    u32 *puVar2;
    s32 iVar4;
    u32 uVar3;

    iVar4 = 0;
    for (uVar3 = 0; uVar3 < *param_1; uVar3 = uVar3 + 1) {
        puVar1 = (u32 *)(*(s32 *)(param_2 + 4) + iVar4);
        puVar2 = (u32 *)(param_1[1] + iVar4);
        *puVar2 = *puVar1;
        fn_8018FF64((int)(puVar2 + 1), (int)(puVar1 + 1), (int)(*puVar2));
        iVar4 = iVar4 + 0x40;
    }
}

} /* extern "C" */
