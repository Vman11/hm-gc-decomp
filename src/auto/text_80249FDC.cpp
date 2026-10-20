// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B52C;
extern f32 lbl_8035B528;
extern volatile f64 lbl_803662F8;
double fn_800EFDA4(double);

void fn_80249FDC(void) {
    lbl_8035B52C = lbl_803596E0[0];
    lbl_8035B528 = fn_800EFDA4(lbl_803662F8);
}

__declspec(section ".ctors") static void (*const ctor_80249FDC)(void) = fn_80249FDC;

} /* extern "C" */
