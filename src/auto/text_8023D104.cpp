// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B434;
extern f32 lbl_8035B430;
extern volatile f64 lbl_803660C0;
double fn_800EFDA4(double);

void fn_8023D104(void) {
    lbl_8035B434 = lbl_803596E0[0];
    lbl_8035B430 = fn_800EFDA4(lbl_803660C0);
}

__declspec(section ".ctors") static void (*const ctor_8023D104)(void) = fn_8023D104;

} /* extern "C" */
