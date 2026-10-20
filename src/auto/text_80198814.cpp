// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364C60;
void fn_8017B5F0(void *);

void fn_80198814(u8 *p) {
    fn_8017B5F0(p);
    *(f32 *)(p + 20) = lbl_80364C60;
    *(f32 *)(p + 24) = lbl_80364C60;
    *(f32 *)(p + 28) = lbl_80364C60;
    *(f32 *)(p + 32) = lbl_80364C60;
}

} /* extern "C" */
