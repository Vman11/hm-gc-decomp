// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A45C;
extern f32 lbl_8035A458;
extern volatile f64 lbl_80361C58;
double fn_800EFDA4(double);

void fn_800A3078(void) {
    lbl_8035A45C = lbl_803596E0[0];
    lbl_8035A458 = fn_800EFDA4(lbl_80361C58);
}

__declspec(section ".ctors") static void (*const ctor_800A3078)(void) = fn_800A3078;

} /* extern "C" */
