// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B714;
extern f32 lbl_8035B710;
extern volatile f64 lbl_80366A48;
double fn_800EFDA4(double);

void fn_8025F990(void) {
    lbl_8035B714 = lbl_803596E0[0];
    lbl_8035B710 = fn_800EFDA4(lbl_80366A48);
}

__declspec(section ".ctors") static void (*const ctor_8025F990)(void) = fn_8025F990;

} /* extern "C" */
