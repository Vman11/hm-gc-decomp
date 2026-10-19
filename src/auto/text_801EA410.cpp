// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_801DF7E0(void);

void fn_801EA410(s32 param_1) {
    s32 iVar1;

    if (((*(u32 *)(param_1 + 4) & 1) != 0) && (iVar1 = fn_801DF7E0(), iVar1 != 0)) {
        *(u32 *)(param_1 + 0x18) = 0;
    }
}

} /* extern "C" */
