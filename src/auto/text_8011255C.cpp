// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 strncmp(int, int, int);
s32 fn_800F8274(int, int);
s32 fn_80112340(int, int);

u32 fn_8011255C(s32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;
    u32 uVar2;

    if ((*(u32 *)(param_1 + 0x20) == 0) ||
          (iVar1 = strncmp((int)(*(s32 *)(param_1 + 0x20)), (int)(param_2), (int)(8)), iVar1 != 0)) {
        iVar1 = fn_800F8274((int)(param_1), (int)(param_2));
        if ((u32)iVar1 == 0) {
            return 0;
        }
        *(u32 *)(param_1 + 0x20) = iVar1;
    }
    uVar2 = fn_80112340((int)(*(u32 *)(param_1 + 0x20)), (int)(param_3));
    return uVar2;
}

} /* extern "C" */
