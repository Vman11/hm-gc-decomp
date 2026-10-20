// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803654D0;
void fn_801EF83C(void *);
void fn_80121658(void *);
void fn_80121DC8(void *, void *);

void fn_801F7750(u8 *p) {
    if (*(s32 *)(p + 8) != 0) {
        u8 buf[16];
        fn_801EF83C(p);
        fn_80121658(buf);
        fn_80121DC8(p + 56, buf);
    *(f32 *)(p + 80) = lbl_803654D0;
    *(f32 *)(p + 84) = lbl_803654D0;
    *(f32 *)(p + 88) = lbl_803654D0;
    *(f32 *)(p + 92) = lbl_803654D0;
    *(f32 *)(p + 96) = lbl_803654D0;
    *(f32 *)(p + 100) = lbl_803654D0;
    *(s32 *)(p + 104) = 0;
    *(f32 *)(p + 108) = lbl_803654D0;
    *(f32 *)(p + 112) = lbl_803654D0;
    *(s32 *)(p + 116) = 0;
    *(f32 *)(p + 72) = lbl_803654D0;
    *(f32 *)(p + 76) = lbl_803654D0;
    }
}

} /* extern "C" */
