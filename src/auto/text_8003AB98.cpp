// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A044;
extern f32 lbl_8035A040;
extern volatile f64 lbl_8035C120;
double fn_800EFDA4(double);

void fn_8003AB98(void) {
    lbl_8035A044 = lbl_803596E0[0];
    lbl_8035A040 = fn_800EFDA4(lbl_8035C120);
}

__declspec(section ".ctors") static void (*const ctor_8003AB98)(void) = fn_8003AB98;

} /* extern "C" */
