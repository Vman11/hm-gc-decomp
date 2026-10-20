// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8026ACE0(void *, void *, void *, f32);

void fn_80248498(u8 *p, f32 a) {
    u32 off = 0;
    s32 i;
    for (i = 0; i < *(s32 *)(p + 36); i++) {
        fn_8026ACE0(*(void **)(p + 20), p, *(u8 **)(p + 40) + off, a);
        off += 4;
    }
}

} /* extern "C" */
