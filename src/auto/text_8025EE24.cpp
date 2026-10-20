// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B704;
extern f32 lbl_8035B700;
extern volatile f64 lbl_80366A20;
double fn_800EFDA4(double);

void fn_8025EE24(void) {
    lbl_8035B704 = lbl_803596E0[0];
    lbl_8035B700 = fn_800EFDA4(lbl_80366A20);
}

__declspec(section ".ctors") static void (*const ctor_8025EE24)(void) = fn_8025EE24;

} /* extern "C" */
