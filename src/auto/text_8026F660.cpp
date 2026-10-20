// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B7DC;
extern f32 lbl_8035B7D8;
extern volatile f64 lbl_80366E78;
double fn_800EFDA4(double);

void fn_8026F660(void) {
    lbl_8035B7DC = lbl_803596E0[0];
    lbl_8035B7D8 = fn_800EFDA4(lbl_80366E78);
}

__declspec(section ".ctors") static void (*const ctor_8026F660)(void) = fn_8026F660;

} /* extern "C" */
