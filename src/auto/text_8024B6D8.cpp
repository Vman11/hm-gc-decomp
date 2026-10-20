// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B55C;
extern f32 lbl_8035B558;
extern volatile f64 lbl_80366390;
double fn_800EFDA4(double);

void fn_8024B6D8(void) {
    lbl_8035B55C = lbl_803596E0[0];
    lbl_8035B558 = fn_800EFDA4(lbl_80366390);
}

__declspec(section ".ctors") static void (*const ctor_8024B6D8)(void) = fn_8024B6D8;

} /* extern "C" */
