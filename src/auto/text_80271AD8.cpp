// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F35BC[];
extern f32 lbl_80366E98;
extern f32 lbl_80366E9C;
extern f32 lbl_80366EA0;
extern f32 lbl_80366EA4;
extern f32 lbl_80366EA8;
void __ct__9C80261CB0Fv(void *);

void *__ct__9C80271AD8Fv(u8 *p) {
    __ct__9C80261CB0Fv(p);
    *(void * *)(p + 0) = lbl_802F35BC;
    *(s32 *)(p + 340) = 0;
    *(s32 *)(p + 176) = 0;
    *(f32 *)(p + 304) = lbl_80366E98;
    *(f32 *)(p + 320) = lbl_80366E9C;
    *(f32 *)(p + 324) = lbl_80366EA0;
    *(f32 *)(p + 316) = lbl_80366EA4;
    *(f32 *)(p + 312) = lbl_80366EA8;
    *(s32 *)(p + 180) = 0;
    return p;
}

} /* extern "C" */
