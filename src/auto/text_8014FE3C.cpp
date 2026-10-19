// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036453C;
extern f32 lbl_80364544;
f32 fn_80153574(void *);
void fn_801534E0(void *, void *);
void fn_801535CC(void *, f32);

void fn_8014FE3C(f32 *p, f32 *q) {
    f32 f = fn_80153574(q);
    f32 b;
    f32 a;
    f32 c;
    fn_801534E0(p, q);
    fn_801535CC(p, lbl_8036453C / f);
    b = q[7];
    a = q[3];
    c = q[11];
    p[3] = -(a * p[0] + b * p[1] + c * p[2]);
    p[7] = -(a * p[4] + b * p[5] + c * p[6]);
    p[11] = -(a * p[8] + b * p[9] + c * p[10]);
    p[12] = lbl_80364544;
    p[13] = lbl_80364544;
    p[14] = lbl_80364544;
    p[15] = lbl_8036453C;
}

} /* extern "C" */
