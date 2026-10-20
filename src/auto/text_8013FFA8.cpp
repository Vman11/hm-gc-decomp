// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364358;
void __dl__FPv(void *);

void *__dt__9C80140008Fv(u8 *p, s16 f) {
    if (p != NULL) {
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(f32 *)(p + 4) = lbl_80364358;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
