// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80363868;
void fn_801071F8(void *);

void *fn_80103BE8(u8 *p) {
    fn_801071F8(p);
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(f32 *)(p + 24) = lbl_80363868;
    *(f32 *)(p + 28) = lbl_80363868;
    *(f32 *)(p + 32) = lbl_80363868;
    *(f32 *)(p + 36) = lbl_80363868;
    return p;
}

} /* extern "C" */
