// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } Vec_801012C0;
extern f32 lbl_80363828;
extern f32 lbl_80363844;
f64 fn_800F030C(f64);
f64 fn_800EFDA4(f64);

void fn_801012C0(Vec_801012C0 *__restrict out, Vec_801012C0 *axis, Vec_801012C0 *__restrict v, f32 angle) {
    f32 s, c, t;
    f32 tx, ty, tz;
    f32 xx, xy, xz, yy, yz, zz;
    f32 sx, sy, sz;
    f32 m00, m01, m02, m10, m11, m12, m20, m21, m22;

    if (lbl_80363828 == angle) {
        out->x = v->x;
        out->y = v->y;
        out->z = v->z;
        return;
    }
    s = fn_800F030C(angle);
    c = fn_800EFDA4(angle);
    t = lbl_80363844 - c;
    tx = axis->x * t;
    ty = axis->y * t;
    tz = axis->z * t;
    xx = axis->x * tx;
    xy = axis->y * tx;
    xz = axis->z * tx;
    yy = axis->y * ty;
    yz = axis->z * ty;
    zz = axis->z * tz;
    sx = s * axis->x;
    sy = s * axis->y;
    sz = s * axis->z;
    m00 = xx + c;
    m01 = xy + sz;
    m02 = xz - sy;
    m10 = xy - sz;
    m11 = yy + c;
    m12 = yz + sx;
    m20 = xz + sy;
    m21 = yz - sx;
    m22 = zz + c;
    out->x = v->x * m00 + v->y * m01 + v->z * m02;
    out->y = v->x * m10 + v->y * m11 + v->z * m12;
    out->z = v->x * m20 + v->y * m21 + v->z * m22;
}

} /* extern "C" */
