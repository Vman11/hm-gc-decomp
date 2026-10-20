// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1A74[];
extern volatile f32 lbl_803661B0;
extern f32 lbl_80366198;
void __ct__9C80249F58Fv(void *);

void *__ct__9C8024262CFv(u8 *p) {
    __ct__9C80249F58Fv(p);
    *(void * *)(p + 0) = lbl_802F1A74;
    *(s32 *)(p + 124) = 0;
    *(s32 *)(p + 128) = 0;
    *(s32 *)(p + 192) = 0;
    *(s32 *)(p + 208) = 0;
    *(s32 *)(p + 212) = 0;
    *(s32 *)(p + 184) = 1;
    *(s32 *)(p + 216) = -1;
    *(s32 *)(p + 220) = -1;
    *(s32 *)(p + 248) = 0;
    *(s32 *)(p + 256) = 0;
    *(s32 *)(p + 264) = 0;
    *(s32 *)(p + 156) = 0;
    *(s32 *)(p + 160) = 0;
    *(s32 *)(p + 164) = 0;
    *(s32 *)(p + 244) = 0;
    *(s32 *)(p + 252) = 0;
    *(s32 *)(p + 136) = 0;
    *(s32 *)(p + 140) = 0;
    *(s32 *)(p + 260) = -1;
    *(s32 *)(p + 148) = 0;
    *(s32 *)(p + 268) = 0;
    *(s32 *)(p + 272) = 0;
    *(s32 *)(p + 276) = 0;
    *(f32 *)(p + 172) = lbl_803661B0;
    *(f32 *)(p + 176) = lbl_803661B0;
    *(f32 *)(p + 180) = lbl_80366198;
    *(s32 *)(p + 152) = 0;
    *(s32 *)(p + 224) = 0;
    return p;
}

} /* extern "C" */
