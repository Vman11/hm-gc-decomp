// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B59C;
extern f32 lbl_8035B598;
extern volatile f64 lbl_803664A0;
double fn_800EFDA4(double);

void fn_8025019C(void) {
    lbl_8035B59C = lbl_803596E0[0];
    lbl_8035B598 = fn_800EFDA4(lbl_803664A0);
}

__declspec(section ".ctors") static void (*const ctor_8025019C)(void) = fn_8025019C;

} /* extern "C" */
