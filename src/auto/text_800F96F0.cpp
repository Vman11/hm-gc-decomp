// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800F6CD0(int, int);
s32 fn_800F8274(int, int);
void fn_800F9324(int, int, int);

void fn_800F96F0(s32 param_1, u32 param_2, u32 param_3, u8 *param_4) {
    s32 iVar1;

    if ((*(u32 *)(param_1 + 0x20) == 0) || (iVar1 = fn_800F6CD0((int)(*(u32 *)(param_1 + 0x20)), (int)(param_2)), iVar1 == 0)) {
        iVar1 = fn_800F8274((int)(param_1), (int)(param_2));
        if ((u32)iVar1 == 0) {
            *param_4 = 0;
            return;
        }
        *(s32 *)(param_1 + 0x20) = iVar1;
    }
    fn_800F9324((int)(*(u32 *)(param_1 + 0x20)), (int)(param_3), (int)(param_4));
}

} /* extern "C" */
