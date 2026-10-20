// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035BE98;
void fn_800662A4(void *);

void fn_80035318(u8 *p) {
    u8 *q;
    fn_800662A4(p);
    *(s32 *)(p + 384) = -1;
    *(f32 *)(p + 372) = lbl_8035BE98;
    *(f32 *)(p + 376) = lbl_8035BE98;
    *(f32 *)(p + 380) = lbl_8035BE98;
    *(f32 *)(p + 68) = lbl_8035BE98;
    *(f32 *)(p + 72) = lbl_8035BE98;
    *(f32 *)(p + 76) = lbl_8035BE98;
    q = *(u8 **)(p + 252);
    *(f32 *)(p + 68) = *(f32 *)(q + 304);
    *(f32 *)(p + 72) = *(f32 *)(q + 308);
    *(f32 *)(p + 76) = *(f32 *)(q + 312);
}

} /* extern "C" */
