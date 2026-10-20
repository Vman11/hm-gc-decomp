// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B304;
extern f32 lbl_8035B300;
extern volatile f64 lbl_80365CF8;
double fn_800EFDA4(double);

void fn_80229B78(void) {
    lbl_8035B304 = lbl_803596E0[0];
    lbl_8035B300 = fn_800EFDA4(lbl_80365CF8);
}

__declspec(section ".ctors") static void (*const ctor_80229B78)(void) = fn_80229B78;

} /* extern "C" */
