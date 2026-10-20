// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B2A4;
extern f32 lbl_8035B2A0;
extern volatile f64 lbl_80365A68;
double fn_800EFDA4(double);

void fn_80222BFC(void) {
    lbl_8035B2A4 = lbl_803596E0[0];
    lbl_8035B2A0 = fn_800EFDA4(lbl_80365A68);
}

__declspec(section ".ctors") static void (*const ctor_80222BFC)(void) = fn_80222BFC;

} /* extern "C" */
