// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

double fn_800F030C(double);
double fn_800EFDA4(double);

void fn_8010117C(f32 *p, f32 a) {
    f32 s;
    f32 x;
    f32 y;
    f32 c;
    x = p[0];
    y = p[1];
    s = fn_800F030C(a);
    c = fn_800EFDA4(a);
    p[0] = x * c - y * s;
    p[1] = x * s + y * c;
}

} /* extern "C" */
