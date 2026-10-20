// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365A4C;
extern f32 lbl_80365A30;
void __dl__FPv(void *);

void *fn_80222740(u8 *p, s16 f) {
    if (p != NULL) {
    *(f32 *)(p + 0) = lbl_80365A4C;
    *(f32 *)(p + 4) = lbl_80365A30;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
