// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035BE9C;
double fn_800F049C(double);

void fn_80037060(f32 *p, f32 *q, f32 a, f32 b) {
    f32 dx = q[0] - p[0];
    f32 dy = q[1] - p[1];
    f32 dz = q[2] - p[2];
    f32 e = lbl_8035BE9C - (f32)fn_800F049C(-a * b);
    p[0] = e * dx + p[0];
    p[1] = e * dy + p[1];
    p[2] = e * dz + p[2];
}

} /* extern "C" */
