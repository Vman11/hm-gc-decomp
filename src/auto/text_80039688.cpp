// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A004;
extern f32 lbl_8035A000;
extern volatile f64 lbl_8035C058;
double fn_800EFDA4(double);

void fn_80039688(void) {
    lbl_8035A004 = lbl_803596E0[0];
    lbl_8035A000 = fn_800EFDA4(lbl_8035C058);
}

__declspec(section ".ctors") static void (*const ctor_80039688)(void) = fn_80039688;

} /* extern "C" */
