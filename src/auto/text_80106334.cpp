// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803638A8;
extern volatile f32 lbl_803638AC;
void __dl__FPv(void *);

void *__dt__9C801063F0Fv(u8 *p, s16 f) {
    if (p != NULL) {
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(u8 *)(p + 24) = 0;
    *(f32 *)(p + 32) = lbl_803638A8;
    *(f32 *)(p + 36) = lbl_803638A8;
    *(f32 *)(p + 40) = lbl_803638A8;
    *(f32 *)(p + 44) = lbl_803638AC;
    *(f32 *)(p + 48) = lbl_803638A8;
    *(f32 *)(p + 52) = lbl_803638A8;
    *(f32 *)(p + 56) = lbl_803638A8;
    *(f32 *)(p + 60) = lbl_803638AC;
    *(f32 *)(p + 64) = lbl_803638A8;
    *(f32 *)(p + 68) = lbl_803638A8;
    *(f32 *)(p + 72) = lbl_803638A8;
    *(f32 *)(p + 76) = lbl_803638AC;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
