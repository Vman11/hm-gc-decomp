// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036453C;
extern f32 lbl_80364540;
void fn_800FFE84(f32 *q);

#pragma fp_contract off
void fn_801524E8(f32 *m) {
    f32 qb[4];
    const f32 *q;
    f32 s, zz, xy, z, wz, yz, yy, x, xz, xx, wy, xs, wx, zs, y, w, ys;
    fn_800FFE84(qb);
    q = qb;
    x = q[0]; y = q[1]; z = q[2]; w = q[3];
    s = lbl_80364540 / (w * w + (z * z + (x * x + y * y)));
    zs = z * s; ys = y * s; xs = x * s;
    zz = z * zs; yy = y * ys; xx = x * xs;
    wz = w * zs; xy = x * ys; wy = w * ys; xz = x * zs;
    m[0] = lbl_8036453C - (yy + zz);
    m[1] = xy + wz;
    wx = w * xs;
    yz = y * zs;
    m[2] = xz - wy;
    m[4] = xy - wz;
    m[5] = lbl_8036453C - (xx + zz);
    m[6] = yz + wx;
    m[8] = xz + wy;
    m[9] = yz - wx;
    m[10] = lbl_8036453C - (xx + yy);
}
#pragma fp_contract reset

} /* extern "C" */
