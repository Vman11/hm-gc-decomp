// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366954;
double fn_800F049C(double);

void fn_8025DE7C(f32 *p, f32 x, f32 b, f32 c, f32 lim) {
    f32 d = x - *p;
    if ((f32)__fabs(d) > lim) {
        f32 e = lbl_80366954 - (f32)fn_800F049C(-b * c); *p = e * d + *p;
    }
}

} /* extern "C" */
