// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_80359FEC;
extern f32 lbl_80359FE8;
extern volatile f64 lbl_8035BFD0;
double fn_800EFDA4(double);

void fn_80037FBC(void) {
    lbl_80359FEC = lbl_803596E0[0];
    lbl_80359FE8 = fn_800EFDA4(lbl_8035BFD0);
}

__declspec(section ".ctors") static void (*const ctor_80037FBC)(void) = fn_80037FBC;

} /* extern "C" */
