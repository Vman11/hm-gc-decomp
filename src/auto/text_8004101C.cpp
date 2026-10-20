// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0C4;
extern f32 lbl_8035A0C0;
extern volatile f64 lbl_8035C348;
double fn_800EFDA4(double);

void fn_8004101C(void) {
    lbl_8035A0C4 = lbl_803596E0[0];
    lbl_8035A0C0 = fn_800EFDA4(lbl_8035C348);
}

__declspec(section ".ctors") static void (*const ctor_8004101C)(void) = fn_8004101C;

} /* extern "C" */
