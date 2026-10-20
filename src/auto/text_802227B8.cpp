// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B29C;
extern f32 lbl_8035B298;
extern volatile f64 lbl_80365A50;
double fn_800EFDA4(double);

void fn_802227B8(void) {
    lbl_8035B29C = lbl_803596E0[0];
    lbl_8035B298 = fn_800EFDA4(lbl_80365A50);
}

__declspec(section ".ctors") static void (*const ctor_802227B8)(void) = fn_802227B8;

} /* extern "C" */
