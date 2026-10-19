// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800F8274(void);

u32 fn_802513F4(void) {
    u32 iVar1;
    u32 uVar2;

    iVar1 = fn_800F8274();
    if (iVar1 != 0) {
        uVar2 = *(u32 *)(iVar1 + 0x14);
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}

} /* extern "C" */
