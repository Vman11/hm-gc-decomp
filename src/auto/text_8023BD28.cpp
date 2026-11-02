// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036602C;
extern f64 lbl_80366030;
extern f64 lbl_80366038;
struct V3 { f32 x, y, z; };
static inline f32 Sq(f32 x) {
    if (x > lbl_8036602C) {
        const f64 _half = lbl_80366030;
        const f64 _three = lbl_80366038;
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
static inline f32 Dot(const V3 *a, const V3 *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
static inline void Sub(V3 *r, const V3 *a, const V3 *b) { r->x = a->x - b->x; r->y = a->y - b->y; r->z = a->z - b->z; }
s32 fn_8023BD28(V3 *o, V3 *c, V3 *d, f32 r, f32 *t0, f32 *t1) {
    V3 v;
    Sub(&v, o, c);
    f32 b = Dot(&v, d);
    if (b < -r) return 0;
    f32 c2 = Dot(&v, &v) - b * b;
    if (c2 > r * r) return 0;
    f32 h = Sq(r * r - c2);
    *t0 = b - h;
    *t1 = b + h;
    if (*t0 == *t1) return 1;
    if (*t0 < lbl_8036602C) return 1;
    return 2;
}

} /* extern "C" */
