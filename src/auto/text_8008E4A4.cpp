// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A38C;
extern f32 lbl_8035A388;
extern volatile f64 lbl_803605D0;
double fn_800EFDA4(double);

void fn_8008E4A4(void) {
    lbl_8035A38C = lbl_803596E0[0];
    lbl_8035A388 = fn_800EFDA4(lbl_803605D0);
}

__declspec(section ".ctors") static void (*const ctor_8008E4A4)(void) = fn_8008E4A4;

} /* extern "C" */
