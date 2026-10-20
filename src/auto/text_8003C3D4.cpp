// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A06C;
extern f32 lbl_8035A068;
extern volatile f64 lbl_8035C1B0;
double fn_800EFDA4(double);

void fn_8003C3D4(void) {
    lbl_8035A06C = lbl_803596E0[0];
    lbl_8035A068 = fn_800EFDA4(lbl_8035C1B0);
}

__declspec(section ".ctors") static void (*const ctor_8003C3D4)(void) = fn_8003C3D4;

} /* extern "C" */
