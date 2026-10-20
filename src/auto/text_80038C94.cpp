// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802AFE78[];
extern volatile f32 lbl_8035BFD8;
void __dl__FPv(void *);

void *__dt__9C80038D2CFv(u8 *p, s16 f) {
    if (p != NULL) {
    *(void * *)(p + 0) = lbl_802AFE78;
    *(s32 *)(p + 4) = 0;
    *(f32 *)(p + 8) = lbl_8035BFD8;
    *(f32 *)(p + 12) = lbl_8035BFD8;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 40) = 4;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 4;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 56) = 25000;
    *(s32 *)(p + 32) = 1;
    *(s32 *)(p + 60) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
