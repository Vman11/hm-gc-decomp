// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B454;
extern f32 lbl_8035B450;
extern volatile f64 lbl_803660E8;
double fn_800EFDA4(double);

void fn_8023D6BC(void) {
    lbl_8035B454 = lbl_803596E0[0];
    lbl_8035B450 = fn_800EFDA4(lbl_803660E8);
}

__declspec(section ".ctors") static void (*const ctor_8023D6BC)(void) = fn_8023D6BC;

} /* extern "C" */
