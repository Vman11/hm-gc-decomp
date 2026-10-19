// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C801178ECFv[];
void fn_800E1E88(int, int);
void fn_800F8DD0(int);

void fn_801179B0(s32 param_1) {
    s32 iVar1;

    iVar1 = *(s32 *)(param_1 + 0x14);
    if (iVar1 != 0) {
        if ((u32)iVar1 != 0) {
            fn_800E1E88((int)(iVar1), (int)(__dt__9C801178ECFv));
        }
        *(u32 *)(param_1 + 0x18) = 0;
        *(u32 *)(param_1 + 0x14) = 0;
        *(u32 *)(param_1 + 0x1c) = 0;
        fn_800F8DD0((int)(param_1));
    }
}

} /* extern "C" */
