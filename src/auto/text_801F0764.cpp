// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

f32 fn_800FB2E0(void *);
u32 fn_800FB33C(void *);
void fn_801EB474(void *, void *, s32);

void fn_801F0764(u8 *p, void *q, s32 c) {
    switch (c) {
    case 112:
        *(f32 *)(p + 24) = fn_800FB2E0(q);
        break;
    case 113:
        *(f32 *)(p + 32) = fn_800FB2E0(q);
        break;
    case 114:
        *(u32 *)(p + 36) = fn_800FB33C(q);
        break;
    default:
        fn_801EB474(p, q, c);
        break;
    }
}

} /* extern "C" */
