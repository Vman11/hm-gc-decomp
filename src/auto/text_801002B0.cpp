// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803637A4;
extern f32 lbl_803637A8;
extern f64 lbl_803637B0;
extern f64 lbl_803637B8;
struct Q26 { f32 x, y, z, w; };
static inline f32 Sq(f32 x) {
    if (x > lbl_803637A4) {
        const f64 _half = lbl_803637B0;
        const f64 _three = lbl_803637B8;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
void fn_801002B0(Q26 *q) {
    f32 d = q->x * q->x + q->y * q->y + q->z * q->z + q->w * q->w;
    if (*(f32 *)&lbl_803637A4 == d) {
        q->x = lbl_803637A4;
        q->y = lbl_803637A4;
        q->z = lbl_803637A4;
        q->w = lbl_803637A8;
    } else {
        f32 s = lbl_803637A8 / Sq(d);
        q->x *= s;
        q->y *= s;
        q->z *= s;
        q->w *= s;
    }
}

}
