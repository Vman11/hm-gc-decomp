// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B7EC;
extern f32 lbl_8035B7E8;
extern volatile f64 lbl_80366E90;
double fn_800EFDA4(double);

void fn_80270870(void) {
    lbl_8035B7EC = lbl_803596E0[0];
    lbl_8035B7E8 = fn_800EFDA4(lbl_80366E90);
}

__declspec(section ".ctors") static void (*const ctor_80270870)(void) = fn_80270870;

} /* extern "C" */
