// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F19F8[];
extern volatile f32 lbl_803660D8;
extern volatile f32 lbl_803660E0;
extern f32 lbl_803660E4;
void __dl__FPv(void *);

void *__dt__9C8023D65CFv(u8 *p, s16 f) {
    if (p != NULL) {
    *(void * *)(p + 40) = lbl_802F19F8;
    *(s32 *)(p + 0) = 0;
    *(f32 *)(p + 16) = lbl_803660D8;
    *(f32 *)(p + 8) = lbl_803660E0;
    *(f32 *)(p + 4) = lbl_803660E0;
    *(f32 *)(p + 12) = lbl_803660E0;
    *(f32 *)(p + 20) = lbl_803660E0;
    *(f32 *)(p + 24) = lbl_803660E4;
    *(f32 *)(p + 28) = lbl_803660D8;
    *(f32 *)(p + 32) = lbl_803660E0;
    *(f32 *)(p + 36) = lbl_803660D8;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
