// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EAAB8[];
extern volatile f32 lbl_80364E9C;
extern f32 lbl_80364EA0;
extern f32 lbl_80364EA4;
void fn_801A6DEC(void *, s32);
void __dt__9C800F9B64Fv(void *, s32);
void __dl__FPv(void *);

void *fn_801AADCC(u8 *p, s16 f) {
    if (p != 0) {
    *(void * *)(p + 288) = lbl_802EAAB8;
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
        fn_801A6DEC(p + 236, -1);
        __dt__9C800F9B64Fv(p + 180, -1);
        __dt__9C800F9B64Fv(p + 120, -1);
        __dt__9C800F9B64Fv(p + 60, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
