// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B78C;
extern f32 lbl_8035B788;
extern volatile f64 lbl_80366D00;
double fn_800EFDA4(double);

void fn_80267FCC(void) {
    lbl_8035B78C = lbl_803596E0[0];
    lbl_8035B788 = fn_800EFDA4(lbl_80366D00);
}

__declspec(section ".ctors") static void (*const ctor_80267FCC)(void) = fn_80267FCC;

} /* extern "C" */
