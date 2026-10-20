// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B644;
extern f32 lbl_8035B640;
extern volatile f64 lbl_803665A0;
double fn_800EFDA4(double);

void fn_802539C4(void) {
    lbl_8035B644 = lbl_803596E0[0];
    lbl_8035B640 = fn_800EFDA4(lbl_803665A0);
}

__declspec(section ".ctors") static void (*const ctor_802539C4)(void) = fn_802539C4;

} /* extern "C" */
