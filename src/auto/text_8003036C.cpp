// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_80359F64;
extern f32 lbl_80359F60;
extern volatile f64 lbl_8035BC48;
double fn_800EFDA4(double);

void fn_8003036C(void) {
    lbl_80359F64 = lbl_803596E0[0];
    lbl_80359F60 = fn_800EFDA4(lbl_8035BC48);
}

__declspec(section ".ctors") static void (*const ctor_8003036C)(void) = fn_8003036C;

} /* extern "C" */
