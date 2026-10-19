// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

double fn_800F030C(double);
double fn_800EFDA4(double);
extern f32 lbl_80364544;
extern f32 lbl_8036453C;

void fn_80152314(f32 (*m)[4], f32 a) {
    f32 s = fn_800F030C(a);
    f32 c = fn_800EFDA4(a);
    m[0][0] = c;
    m[0][1] = s;
    m[0][2] = lbl_80364544;
    m[1][0] = -s;
    m[1][1] = c;
    m[1][2] = lbl_80364544;
    m[2][0] = lbl_80364544;
    m[2][1] = lbl_80364544;
    m[2][2] = lbl_8036453C;
}

} /* extern "C" */
