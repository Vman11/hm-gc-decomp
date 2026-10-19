// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800FBB9C(void);

BOOL fn_8003AEEC(u8 *p) {
    if (fn_800FBB9C() > (u32)(*(s32 *)(p + 0x10) + *(s32 *)(p + 0x1C))) return TRUE;
    return FALSE;
}

} /* extern "C" */
