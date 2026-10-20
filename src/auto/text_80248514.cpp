// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8026AE28(void *, void *, void *, void *, f32);

void fn_80248514(u8 *p, void *a, f32 f) {
    u32 off = 0;
    s32 i;
    for (i = 0; i < *(s32 *)(p + 36); i++) {
        fn_8026AE28(*(void **)(p + 20), p, *(u8 **)(p + 40) + off, a, f);
        off += 4;
    }
}

} /* extern "C" */
