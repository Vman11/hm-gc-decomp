// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80210480(void);

u32 fn_8020FF50(void) {
    u32 uVar1;

    uVar1 = fn_80210480();
    return uVar1 >> 0x1f;
}

} /* extern "C" */
