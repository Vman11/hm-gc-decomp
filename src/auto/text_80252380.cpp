// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B5FC;
extern f32 lbl_8035B5F8;
extern volatile f64 lbl_80366530;
double fn_800EFDA4(double);

void fn_80252380(void) {
    lbl_8035B5FC = lbl_803596E0[0];
    lbl_8035B5F8 = fn_800EFDA4(lbl_80366530);
}

__declspec(section ".ctors") static void (*const ctor_80252380)(void) = fn_80252380;

} /* extern "C" */
