// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memcpy(void *, const void *, u32);

void fn_800FB5B4(u8 *p, s32 a) {
    u16 *d = *(u16 **)(p + 0x10) + *(s32 *)(p + 4) + a;
    memcpy(d, d + 1, ((*(s32 *)(p + 8) - *(s32 *)(p + 4)) - a + 1) * 2);
    *(s32 *)(p + 8) -= 1;
}

} /* extern "C" */
