// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036453C;
f32 fn_80153574(void *);
void fn_80153420(void *);
void fn_801535CC(void *, f32);

void fn_8014FF28(f32 *p) {
    f32 f = fn_80153574(p);
    f32 a;
    f32 b;
    fn_80153420(p);
    fn_801535CC(p, lbl_8036453C / f);
    a = p[3];
    b = p[7];
    p[3] = -(a * p[0] + b * p[1] + p[11] * p[2]);
    p[7] = -(a * p[4] + b * p[5] + p[11] * p[6]);
    p[11] = -(a * p[8] + b * p[9] + p[11] * p[10]);
}

} /* extern "C" */
