// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364D70;
void fn_8017B5F0(void *);

void fn_8019F864(u8 *p) {
    fn_8017B5F0(p);
    *(f32 *)(p + 0x14) = lbl_80364D70;
}

} /* extern "C" */
