// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364808;
void fn_80103BE8(void *);

void *__ct__9C8017B3C0Fv(u8 *p) {
    fn_80103BE8(p);
    *(f32 *)(p + 0x28) = lbl_80364808;
    *(s32 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x30) = 0;
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
    return p;
}

} /* extern "C" */
