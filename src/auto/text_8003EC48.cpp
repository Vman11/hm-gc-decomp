// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A09C;
extern f32 lbl_8035A098;
extern volatile f64 lbl_8035C238;
double fn_800EFDA4(double);

void fn_8003EC48(void) {
    lbl_8035A09C = lbl_803596E0[0];
    lbl_8035A098 = fn_800EFDA4(lbl_8035C238);
}

__declspec(section ".ctors") static void (*const ctor_8003EC48)(void) = fn_8003EC48;

} /* extern "C" */
