// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801071C0(void *, void *);

void fn_80103B64(u8 *p, u8 *q) {
    *(u32 *)(p + 0x10) = *(u32 *)(q + 0x10);
    *(u32 *)(p + 0x14) = *(u32 *)(q + 0x14);
    *(f32 *)(p + 0x18) = *(f32 *)(q + 0x18);
    *(f32 *)(p + 0x1C) = *(f32 *)(q + 0x1C);
    *(f32 *)(p + 0x20) = *(f32 *)(q + 0x20);
    *(f32 *)(p + 0x24) = *(f32 *)(q + 0x24);
    fn_801071C0(p, q);
}

} /* extern "C" */
