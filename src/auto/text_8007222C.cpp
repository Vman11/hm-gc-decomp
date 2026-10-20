// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8007222C(u8 *p, f32 f) {
    *(f32 *)(p + 0x1A8) += f;
    **(s32 **)(p + 0x548) = (s32)*(f32 *)(p + 0x1A8);
}

} /* extern "C" */
