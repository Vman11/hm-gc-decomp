// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_80359FF4;
extern f32 lbl_80359FF0;
extern volatile f64 lbl_8035C018;
double fn_800EFDA4(double);

void fn_80038DA4(void) {
    lbl_80359FF4 = lbl_803596E0[0];
    lbl_80359FF0 = fn_800EFDA4(lbl_8035C018);
}

__declspec(section ".ctors") static void (*const ctor_80038DA4)(void) = fn_80038DA4;

} /* extern "C" */
