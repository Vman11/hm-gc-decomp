// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_80359FFC;
extern f32 lbl_80359FF8;
extern volatile f64 lbl_8035C028;
double fn_800EFDA4(double);

void fn_80039170(void) {
    lbl_80359FFC = lbl_803596E0[0];
    lbl_80359FF8 = fn_800EFDA4(lbl_8035C028);
}

__declspec(section ".ctors") static void (*const ctor_80039170)(void) = fn_80039170;

} /* extern "C" */
