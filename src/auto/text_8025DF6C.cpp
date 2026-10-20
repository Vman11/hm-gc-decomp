// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366950;
void fn_8022345C(void *, f32);

void fn_8025DF6C(u8 *p) {
    fn_8022345C(*(void **)(p + 0x9C), lbl_80366950);
}

} /* extern "C" */
