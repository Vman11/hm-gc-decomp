// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_8011EDA8(int);

s32 fn_8014DC98(s32 *param_1) {
    s32 iVar1;
    s32 *piVar2;
    u32 uVar3;

    iVar1 = fn_8011EDA8((int)(*param_1));
    if (iVar1 != 0) {
        return iVar1;
    }
    {
        piVar2 = *(s32 **)(*param_1 + 0x4c);
        for (uVar3 = 0; uVar3 < *(u32 *)*param_1; uVar3 = uVar3 + 1) {
            *piVar2 = uVar3 + 0x30000000;
            piVar2 = piVar2 + 2;
        }
        piVar2 = (s32 *)((u32 *)*param_1)[0x14];
        for (uVar3 = 0; uVar3 < *(u32 *)(*param_1 + 4); uVar3 = uVar3 + 1) {
            *piVar2 = uVar3 + 0x40000000;
            piVar2 = piVar2 + 2;
        }
        iVar1 = 0;
        *(u32 *)(*param_1 + 0x58) = 0x60000000;
    }
    return iVar1;
}

} /* extern "C" */
