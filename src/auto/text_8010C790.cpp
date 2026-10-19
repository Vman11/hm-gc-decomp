// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
void *memset(void *, s32, u32);

s32 fn_8010C790(u8 *p, s32 a, s32 b) {
    if (*(u32 *)(p + 0xC) & 1) {
        memset(p, 0, 8);
        *(s32 *)(p + 8) = 13;
        *(s32 *)(p + 0xC) = 0;
        *(s32 *)(p + 0x10) = 1;
        *(s32 *)(p + 0x14) = 0x80000000;
        *(s32 *)(p + 0x18) = 0x7FFFFFFF;
        *(f32 *)(p + 0x14) = -lbl_803596E0[0];
        *(f32 *)(p + 0x18) = lbl_803596E0[0];
    }
    *(s32 *)(p + 8) = a;
    *(s32 *)(p + 0x10) = b;
    *(u32 *)(p + 0xC) |= 1;
    return 0;
}

} /* extern "C" */
