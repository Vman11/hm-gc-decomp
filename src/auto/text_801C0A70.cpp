// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364FBC;
void __dla__FPv(void *);

void fn_801C0A70(u8 *p) {
    if (*(void **)(p + 104) != NULL) {
        __dla__FPv(*(void **)(p + 104));
    }
    *(s32 *)(p + 116) = 0;
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 104) = 0;
    *(s32 *)(p + 112) = 0;
    *(s32 *)(p + 108) = 3;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 120) = 0;
    *(f32 *)(p + 88) = lbl_80364FBC;
    *(f32 *)(p + 92) = lbl_80364FBC;
    *(f32 *)(p + 96) = lbl_80364FBC;
    *(f32 *)(p + 100) = lbl_80364FBC;
    *(f32 *)(p + 56) = lbl_80364FBC;
    *(f32 *)(p + 60) = lbl_80364FBC;
    *(f32 *)(p + 64) = lbl_80364FBC;
    *(f32 *)(p + 68) = lbl_80364FBC;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 20) = 0;
    *(f32 *)(p + 36) = lbl_80364FBC;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 24) = 0;
    *(f32 *)(p + 40) = lbl_80364FBC;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 28) = 0;
    *(f32 *)(p + 44) = lbl_80364FBC;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 32) = 0;
    *(f32 *)(p + 48) = lbl_80364FBC;
}

} /* extern "C" */
