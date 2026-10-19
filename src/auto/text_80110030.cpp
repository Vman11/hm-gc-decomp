// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_8010FFD0(void);

u32 fn_80110030(void) {
    u32 *puVar1;
    u32 uVar2;

    puVar1 = (u32 *)fn_8010FFD0();
    if (puVar1 != (u32 *)0x0) {
        uVar2 = *puVar1;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}

} /* extern "C" */
