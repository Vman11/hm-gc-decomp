// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B5BC;
extern f32 lbl_8035B5B8;
extern volatile f64 lbl_803664F0;
double fn_800EFDA4(double);

void fn_80250E48(void) {
    lbl_8035B5BC = lbl_803596E0[0];
    lbl_8035B5B8 = fn_800EFDA4(lbl_803664F0);
}

__declspec(section ".ctors") static void (*const ctor_80250E48)(void) = fn_80250E48;

} /* extern "C" */
