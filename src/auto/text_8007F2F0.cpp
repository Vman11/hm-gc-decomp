// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035FA24;
void fn_80241E0C(void *);

void fn_8007F2F0(u8 *p) {
    *(f32 *)(p + 280) = lbl_8035FA24;
    *(f32 *)(p + 284) = lbl_8035FA24;
    *(f32 *)(p + 288) = lbl_8035FA24;
    fn_80241E0C(p);
}

} /* extern "C" */
