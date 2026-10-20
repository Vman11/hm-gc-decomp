// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0008[];
extern u32 lbl_803658B4;
void *memset(void *, s32, u32);

void *fn_80216AD8(u8 *p) {
    *(void * *)(p + 96) = lbl_802F0008;
    memset(p + 4, 0, 76);
    *(u32 *)(p + 76) |= lbl_803658B4;
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    *(s32 *)(p + 88) = 0;
    *(s32 *)(p + 92) = 0;
    return p;
}

} /* extern "C" */
