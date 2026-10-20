// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803648E0;
extern volatile f32 lbl_803648E4;
void fn_80121658(void *);
void fn_80121DC8(void *, void *);

void fn_80182BAC(u8 *p) {
    u32 c;
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 44) = 0;
    *(f32 *)(p + 12) = lbl_803648E0;
    *(f32 *)(p + 16) = lbl_803648E0;
    *(f32 *)(p + 36) = lbl_803648E0;
    *(f32 *)(p + 40) = lbl_803648E0;
    *(f32 *)(p + 48) = lbl_803648E0;
    *(f32 *)(p + 52) = lbl_803648E0;
    *(f32 *)(p + 56) = lbl_803648E0;
    *(f32 *)(p + 60) = lbl_803648E0;
    fn_80121658(&c);
    fn_80121DC8(p + 64, &c);
    *(f32 *)(p + 20) = lbl_803648E4;
    *(f32 *)(p + 24) = lbl_803648E4;
    *(f32 *)(p + 28) = lbl_803648E4;
    *(f32 *)(p + 32) = lbl_803648E4;
}

} /* extern "C" */
