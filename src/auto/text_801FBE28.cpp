// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8036558C;
extern volatile f32 lbl_80365594;
void fn_801FA800(void *, void *);
void *memset(void *, s32, u32);

void fn_801FBE28(u8 *p) {
    if (*(void **)(p + 4) != NULL && (*(u32 *)p & 0x18)) {
        fn_801FA800(*(void **)(p + 4), p);
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 12) = 1;
    *(f32 *)(p + 16) = lbl_8036558C;
    *(f32 *)(p + 20) = lbl_8036558C;
    *(f32 *)(p + 24) = lbl_80365594;
    *(s32 *)(p + 44) = 0;
    memset(p + 48, 0, 16);
    *(f32 *)(p + 64) = lbl_80365594;
    *(f32 *)(p + 68) = lbl_80365594;
    *(f32 *)(p + 72) = lbl_80365594;
    *(f32 *)(p + 76) = lbl_80365594;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 80) = 2;
    *(s32 *)(p + 84) = 1;
}

} /* extern "C" */
