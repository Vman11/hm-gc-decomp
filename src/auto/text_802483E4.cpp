// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8026AA88(void *, void *, void *, f32);

void fn_802483E4(u8 *p, s32 i, f32 f) {
    *(f32 *)(p + 28) = f;
    fn_8026AA88(*(void **)(p + 0x14), p, *(u8 **)(p + 0x28) + i * 4, f);
}

} /* extern "C" */
