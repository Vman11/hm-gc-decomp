// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802AFEC0[];
extern volatile f32 lbl_8035C020;
void __dl__FPv(void *);

void *__dt__9C800390F8Fv(u8 *p, s16 f) {
    if (p != NULL) {
    *(void * *)(p + 0) = lbl_802AFEC0;
    *(s32 *)(p + 4) = 0;
    *(f32 *)(p + 8) = lbl_8035C020;
    *(f32 *)(p + 12) = lbl_8035C020;
    *(f32 *)(p + 16) = lbl_8035C020;
    *(f32 *)(p + 20) = lbl_8035C020;
    *(f32 *)(p + 24) = lbl_8035C020;
    *(f32 *)(p + 28) = lbl_8035C020;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 52) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
