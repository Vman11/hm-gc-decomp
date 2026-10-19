// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80101124(void *, void *);
double fn_800FB2E0(void *);

void fn_800FF6D0(u8 *p, void *q) {
    fn_80101124(p, q);
    *(f32 *)(p + 0xC) = __fabs(fn_800FB2E0(q));
    *(f32 *)(p + 0x10) = __fabs(fn_800FB2E0(q));
    *(f32 *)(p + 0x14) = __fabs(fn_800FB2E0(q));
}

} /* extern "C" */
