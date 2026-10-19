// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802F29A0[];
extern f32 lbl_80357AE0[3];
extern f32 lbl_80366950;
extern f32 lbl_80366954;
void __ct__9C80257738Fv(void *);
void __ct__9C8025E920Fv(void *);

void *fn_8025E5B4(u8 *p) {
    __ct__9C80257738Fv(p);
    *(void **)p = lbl_802F29A0;
    __ct__9C8025E920Fv(p + 0x13C);
    lbl_80357AE0[0] = lbl_80366950;
    lbl_80357AE0[1] = lbl_80366950;
    lbl_80357AE0[2] = lbl_80366950;
    *(s32 *)(p + 348) = 4;
    *(s32 *)(p + 344) = 0;
    *(s32 *)(p + 336) = 0;
    *(f32 *)(p + 352) = lbl_80366954;
    *(f32 *)(p + 384) = lbl_80366950;
    *(f32 *)(p + 388) = lbl_80366950;
    *(s32 *)(p + 204) = 0;
    *(f32 *)(p + 208) = lbl_80366950;
    *(f32 *)(p + 212) = lbl_80366950;
    *(f32 *)(p + 216) = lbl_80366950;
    *(f32 *)(p + 280) = lbl_80366950;
    *(s32 *)(p + 284) = 0;
    *(f32 *)(p + 288) = lbl_80366950;
    *(f32 *)(p + 292) = lbl_80366950;
    *(f32 *)(p + 296) = lbl_80366950;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    return p;
}
