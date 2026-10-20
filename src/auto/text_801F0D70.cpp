// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

f32 fn_800FB2E0(void *);
void fn_801EF720(void *, void *, s32);

void fn_801F0D70(u8 *p, void *q, s32 c) {
    switch (c) {
    case 142:
        *(f32 *)(p + 68) = fn_800FB2E0(q);
        *(f32 *)(p + 76) = fn_800FB2E0(q);
        *(f32 *)(p + 72) = fn_800FB2E0(q);
        *(f32 *)(p + 80) = fn_800FB2E0(q);
        break;
    case 143:
        *(f32 *)(p + 48) = fn_800FB2E0(q);
        break;
    case 133:
        *(f32 *)(p + 52) = fn_800FB2E0(q);
        break;
    default:
        fn_801EF720(p, q, c);
        break;
    }
}

} /* extern "C" */
