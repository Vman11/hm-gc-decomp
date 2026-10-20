// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80363868;
void fn_801071E4(void *, void *);

void fn_80103BB4(u8 *p, u8 *q) {
    *(u8 **)(p + 0x10) = q;
    *(f32 *)(p + 8) = *(f32 *)(q + 4);
    *(f32 *)(p + 0x24) = lbl_80363868;
    fn_801071E4(p, q);
}

} /* extern "C" */
