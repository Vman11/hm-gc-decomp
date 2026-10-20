// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0E4;
extern f32 lbl_8035A0E0;
extern volatile f64 lbl_8035C7E0;
double fn_800EFDA4(double);

void fn_80042B9C(void) {
    lbl_8035A0E4 = lbl_803596E0[0];
    lbl_8035A0E0 = fn_800EFDA4(lbl_8035C7E0);
}

__declspec(section ".ctors") static void (*const ctor_80042B9C)(void) = fn_80042B9C;

} /* extern "C" */
