// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803666B0;
void fn_80261AD4(void *);

void fn_8025764C(u8 *p) {
    *(s32 *)(p + 180) = 0;
    *(s32 *)(p + 188) = 0;
    *(s32 *)(p + 184) = 0;
    *(f32 *)(p + 80) = lbl_803666B0;
    *(f32 *)(p + 84) = lbl_803666B0;
    *(f32 *)(p + 88) = lbl_803666B0;
    *(f32 *)(p + 104) = lbl_803666B0;
    *(f32 *)(p + 108) = lbl_803666B0;
    *(f32 *)(p + 112) = lbl_803666B0;
    *(f32 *)(p + 92) = lbl_803666B0;
    *(f32 *)(p + 96) = lbl_803666B0;
    *(f32 *)(p + 100) = lbl_803666B0;
    fn_80261AD4(p);
}

} /* extern "C" */
