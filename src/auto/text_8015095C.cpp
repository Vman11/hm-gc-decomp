// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

/* QV=2.0p1 */

extern "C" {

typedef struct { f32 x, y, z, w; } Q8015095C;
typedef f32 M8015095C[3][4];
extern f32 lbl_80364540;
extern f32 lbl_8036453C;
void fn_80150B38(void *, M8015095C);

static inline void QuatToMtx(M8015095C m, const Q8015095C *q) {
    f32 s, xs, ys, zs, wx, wy, wz, xx, xy, xz, yy, yz, zz;
    f32 one;
    one = lbl_8036453C;
    s = lbl_80364540 / (q->x * q->x + q->y * q->y + q->z * q->z + q->w * q->w);
    xs = q->x * s;
    ys = q->y * s;
    zs = q->z * s;
    wx = q->w * xs;
    wy = q->w * ys;
    wz = q->w * zs;
    xx = q->x * xs;
    xy = q->x * ys;
    xz = q->x * zs;
    yy = q->y * ys;
    yz = q->y * zs;
    zz = q->z * zs;
    m[0][0] = one - (yy + zz);
    m[0][1] = xy + wz;
    m[0][2] = xz - wy;
    m[1][0] = xy - wz;
    m[1][1] = one - (xx + zz);
    m[1][2] = yz + wx;
    m[2][0] = xz + wy;
    m[2][1] = yz - wx;
    m[2][2] = one - (xx + yy);
}

#pragma opt_propagation off
void fn_8015095C(void *p1, const Q8015095C *q) {
    M8015095C m;
    f32 (*pm)[4] = m;
    QuatToMtx(m, q);
    fn_80150B38(p1, pm);
}
#pragma opt_propagation reset

} /* extern "C" */
