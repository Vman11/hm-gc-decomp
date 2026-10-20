// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2554[];
extern volatile f32 lbl_803666B0;
void __ct__9C80261CB0Fv(void *);

void *__ct__9C80257738Fv(u8 *p) {
    __ct__9C80261CB0Fv(p);
    *(void * *)(p + 0) = lbl_802F2554;
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
    return p;
}

} /* extern "C" */
