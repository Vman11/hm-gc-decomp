// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EAAB8[];
extern volatile f32 lbl_80364E9C;
extern f32 lbl_80364EA0;
extern f32 lbl_80364EA4;
void __ct__9C800F9688Fv(void *);
void __ct__9C800F9B64Fv(void *);
void __ct__9C801A6A24Fv(void *);
void fn_801A6E60(void *);

void *__ct__9C801AAEA0Fv(u8 *p) {
    *(void * *)(p + 288) = lbl_802EAAB8;
    __ct__9C800F9688Fv(p + 36);
    __ct__9C800F9B64Fv(p + 60);
    __ct__9C800F9688Fv(p + 96);
    __ct__9C800F9B64Fv(p + 120);
    __ct__9C800F9688Fv(p + 156);
    __ct__9C800F9B64Fv(p + 180);
    __ct__9C801A6A24Fv(p + 216);
    fn_801A6E60(p + 236);
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 24) = 0;
    *(f32 *)(p + 272) = lbl_80364E9C;
    *(f32 *)(p + 276) = lbl_80364E9C;
    *(f32 *)(p + 280) = lbl_80364EA0;
    *(f32 *)(p + 284) = lbl_80364EA4;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    return p;
}
