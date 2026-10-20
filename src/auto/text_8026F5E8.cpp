// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B7E4;
extern f32 lbl_80366E60;
void __dl__FPv(void *);

void *fn_8026F5E8(u8 *p, s16 f) {
    if (p != NULL) {
        lbl_8035B7E4 = 0;
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(f32 *)(p + 16) = lbl_80366E60;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
