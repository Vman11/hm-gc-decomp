// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80363828;
extern f32 lbl_80363844;
f64 fn_800F030C(f64);
f64 fn_800EFDA4(f64);

typedef struct V80101414 {
    f32 x, y, z;
} V80101414;

void fn_80101414(V80101414 *v, const V80101414 *axis, f32 angle) {
    f32 s;
    f32 c;
    f32 txx;
    f32 m10;
    f32 z;
    f32 y;
    f32 x;
    f32 m01;
    f32 sx;
    f32 m22;
    f32 vy;
    f32 tzz;
    f32 m20;
    f32 vx;
    f32 ty;
    f32 txy;
    f32 tz;
    f32 t;
    f32 txz;
    f32 m12;
    f32 m21;
    f32 m00;
    f32 tyy;
    f32 sy;
    f32 m11;
    f32 tx;
    f32 tyz;
    f32 m02;
    f32 sz;
    if (lbl_80363828 == angle) {
        return;
    }
    s = fn_800F030C(angle);
    c = fn_800EFDA4(angle);
    t = lbl_80363844 - c;
    y = axis->y;
    z = axis->z;
    vy = v->y;
    x = axis->x;
    tz = z * t;
    tx = x * t;
    ty = y * t;
    txx = x * tx;
    tzz = z * tz;
    tyy = y * ty;
    tyz = z * ty;
    sx = s * x;
    txz = z * tx;
    m00 = txx + c;
    m11 = tyy + c;
    m22 = tzz + c;
    vx = v->x;
    txy = y * tx;
    sz = s * z;
    m12 = tyz + sx;
    m21 = tyz - sx;
    sy = s * y;
    m20 = txz + sy;
    m10 = txy - sz;
    m01 = txy + sz;
    m02 = txz - sy;
    v->x = vx * m00 + vy * m01 + v->z * m02;
    v->y = vx * m10 + v->y * m11 + v->z * m12;
    v->z = vx * m20 + vy * m21 + v->z * m22;
}

} /* extern "C" */
