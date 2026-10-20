// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366C00;
void fn_80267E34(void *);

void fn_8026696C(u8 *p) {
    *(s32 *)(p + 0xFC) = 0;
    *(s32 *)(p + 0x100) = 0;
    *(f32 *)(p + 0x104) = lbl_80366C00;
    fn_80267E34(p);
}

} /* extern "C" */
