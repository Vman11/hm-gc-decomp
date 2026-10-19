// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800EB764(int);

void fn_802079F0(u32 param_1, u32 param_2) {
    s32 iVar1;

    iVar1 = *(u32 *)(param_1 + 0x698);
    if (iVar1 != -1) {
        if (param_2 == 0) {
            *(u32 *)(param_1 + 0x698) = iVar1 + -1;
        }
        else {
            fn_800EB764((int)(param_1 + iVar1 * 0x80 + 0x298));
            *(u32 *)(param_1 + 0x698) = *(u32 *)(param_1 + 0x698) + -1;
        }
    }
}

} /* extern "C" */
