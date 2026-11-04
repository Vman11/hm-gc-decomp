// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
extern f32 lbl_803648E8, lbl_803648F8;
extern f64 lbl_80364948, lbl_80364950;
struct T { u8 pad[64]; V fwd; u8 pad76[376]; V up; V right; };
static inline f32 Sq(f32 x) {
    if (x > lbl_803648F8) {
        const f64 _half = lbl_80364948;
        const f64 _three = lbl_80364950;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = (f32)(x * g);
        return y;
    }
    return x;
}
static inline void cross(V *o, V *a, V *b) {
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    o->z = a->x * b->y - a->y * b->x;
}
static inline void norm(V *v) {
    f32 a = v->x * v->x;
    f32 b = v->y * v->y;
    f32 c = v->z * v->z;
    f32 l = Sq(c + (a + b));
    if (lbl_803648F8 == l) {
        v->x = lbl_803648E8;
        v->y = lbl_803648F8;
        v->z = lbl_803648F8;
    } else {
        f32 k = lbl_803648E8 / l;
        v->x = v->x * k;
        v->y = v->y * k;
        v->z = v->z * k;
    }
}
void fn_80184A24(T *t, V *__restrict u) {
    cross(&t->right, &t->fwd, u);
    norm(&t->right);
    cross(&t->up, &t->right, &t->fwd);
    norm(&t->up);
}

} /* extern "C" */
