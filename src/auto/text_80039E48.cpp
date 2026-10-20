// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A014;
extern f32 lbl_8035A010;
extern volatile f64 lbl_8035C080;
double fn_800EFDA4(double);

void fn_80039E48(void) {
    lbl_8035A014 = lbl_803596E0[0];
    lbl_8035A010 = fn_800EFDA4(lbl_8035C080);
}

__declspec(section ".ctors") static void (*const ctor_80039E48)(void) = fn_80039E48;

} /* extern "C" */
