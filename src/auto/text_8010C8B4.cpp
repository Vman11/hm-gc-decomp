// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E2820[];
extern f32 lbl_803596E0[];
void *memset(void *, s32, u32);
void __dl__FPv(void *);

void *__dt__9C8010C958Fv(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 0x1C) = lbl_802E2820;
        memset(p, 0, 8);
        *(s32 *)(p + 8) = 13;
        *(s32 *)(p + 0xC) = 0;
        *(s32 *)(p + 0x10) = 1;
        *(s32 *)(p + 0x14) = 0x80000000;
        *(s32 *)(p + 0x18) = 0x7FFFFFFF;
        *(f32 *)(p + 0x14) = -lbl_803596E0[0];
        *(f32 *)(p + 0x18) = lbl_803596E0[0];
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
