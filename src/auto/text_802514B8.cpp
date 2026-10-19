// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800F8274(void);

void fn_802514B8(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;

    iVar1 = fn_800F8274();
    if (iVar1 != 0) {
        *(u32 *)(iVar1 + 0x10) = param_3;
    }
}

} /* extern "C" */
