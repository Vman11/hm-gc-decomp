// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8006B6C8(u8 *p) {
    *(f32 *)(p + 0x1AC) = *(f32 *)(p + 0x1A8);
    **(s32 **)(p + 0x544) = (s32)*(f32 *)(p + 0x1AC);
}

} /* extern "C" */
