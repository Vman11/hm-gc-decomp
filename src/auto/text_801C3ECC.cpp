// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364FD8;
extern f32 lbl_80364FE4;
extern f32 lbl_80364FDC;
void __dla__FPv(void *);

void fn_801C3ECC(u8 *p) {
    if (*(void **)(p + 100) != NULL) {
        __dla__FPv(*(void **)(p + 100));
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 100) = 0;
    *(s32 *)(p + 76) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 96) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    *(f32 *)(p + 88) = lbl_80364FD8;
    *(f32 *)(p + 92) = lbl_80364FE4;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 108) = 0;
    *(s32 *)(p + 44) = 0;
    *(f32 *)(p + 72) = lbl_80364FDC;
}

} /* extern "C" */
