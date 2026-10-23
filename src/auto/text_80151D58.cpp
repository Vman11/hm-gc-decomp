// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_8036453C;
extern f32 lbl_80364540;
extern f32 lbl_80364544;
void fn_800FFE84(f32 *q);

#pragma fp_contract off
void fn_80151D58(f32 (*m)[4]) {
    f32 qa[4];
    const f32 *q;
    f32 zz;
    f32 xy;
    f32 ys;
    f32 wz;
    f32 yz;
    f32 s;
    f32 yy;
    f32 xz;
    f32 xx;
    f32 x;
    f32 wy;
    f32 xs;
    f32 zs;
    f32 wx;
    f32 z;
    f32 y;
    f32 w;
    fn_800FFE84(qa);
    q = qa;
    x = q[0];
    y = q[1];
    w = q[3];
    z = q[2];
    s = lbl_80364540 / (w * w + (z * z + (x * x + y * y)));
    zs = z * s;
    xs = x * s;
    zz = z * zs;
    wz = w * zs;
    ys = y * s;
    wx = w * xs;
    xx = x * xs;
    yy = y * ys;
    wy = w * ys;
    yz = y * zs;
    m[0][0] = lbl_8036453C - (yy + zz);
    xz = x * zs;
    xy = x * ys;
    m[0][1] = xy + wz;
    m[0][2] = xz - wy;
    m[1][0] = xy - wz;
    m[1][1] = lbl_8036453C - (xx + zz);
    m[1][2] = yz + wx;
    m[2][0] = xz + wy;
    m[2][1] = yz - wx;
    m[2][2] = lbl_8036453C - (xx + yy);
    m[0][3] = lbl_80364544;
    m[1][3] = lbl_80364544;
    m[2][3] = lbl_80364544;
    m[3][0] = lbl_80364544;
    m[3][1] = lbl_80364544;
    m[3][2] = lbl_80364544;
    m[3][3] = lbl_8036453C;
}
#pragma fp_contract reset

} /* extern "C" */
