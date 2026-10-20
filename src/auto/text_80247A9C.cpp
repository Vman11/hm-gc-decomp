// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B4F4;
extern f32 lbl_8035B4F0;
extern volatile f64 lbl_80366298;
double fn_800EFDA4(double);

void fn_80247A9C(void) {
    lbl_8035B4F4 = lbl_803596E0[0];
    lbl_8035B4F0 = fn_800EFDA4(lbl_80366298);
}

__declspec(section ".ctors") static void (*const ctor_80247A9C)(void) = fn_80247A9C;

} /* extern "C" */
