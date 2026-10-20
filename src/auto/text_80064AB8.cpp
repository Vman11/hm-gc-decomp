// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A1CC;
extern f32 lbl_8035A1C8;
extern volatile f64 lbl_8035E700;
double fn_800EFDA4(double);

void fn_80064AB8(void) {
    lbl_8035A1CC = lbl_803596E0[0];
    lbl_8035A1C8 = fn_800EFDA4(lbl_8035E700);
}

__declspec(section ".ctors") static void (*const ctor_80064AB8)(void) = fn_80064AB8;

} /* extern "C" */
