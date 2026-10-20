// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E2820[];
extern f32 lbl_803596E0[];
void *memset(void *, s32, u32);

void *__ct__9C8010C958Fv(u8 *p) {
    *(void * *)(p + 28) = lbl_802E2820;
    memset(p, 0, 8);
    *(s32 *)(p + 8) = 13;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 1;
    *(s32 *)(p + 20) = 0x80000000;
    *(s32 *)(p + 24) = 0x7FFFFFFF;
    *(f32 *)(p + 20) = -lbl_803596E0[0];
    *(f32 *)(p + 24) = lbl_803596E0[0];
    return p;
}

} /* extern "C" */
