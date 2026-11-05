#include "common.h"
extern "C" {
typedef struct RGBA { u8 r, g, b, a; } RGBA;
typedef struct Col { f32 r, g, b, a; } Col;
typedef struct Rect { f32 x0, y0, x1, y1; } Rect;
void fn_8014AB2C(Col *, const RGBA *, const RGBA *, f32);
void fn_80121458(RGBA *, Col *, Col *, f32);
static inline void ToCol2(Col *c, Col *d, const RGBA *p, const RGBA *q) {
    f32 k = 255.0f;
    s32 a0, a1, a2, a3, b0, b1, b2, b3;
    a0 = *(volatile u8 *)&p->r; a1 = *(volatile u8 *)&p->g; a2 = *(volatile u8 *)&p->b; a3 = *(volatile u8 *)&p->a;
    b0 = *(volatile u8 *)&q->r; b1 = *(volatile u8 *)&q->g; b2 = *(volatile u8 *)&q->b; b3 = *(volatile u8 *)&q->a;
    c->r = a0 / k; c->g = a1 / k; c->b = a2 / k; c->a = a3 / k;
    d->r = b0 / k; d->g = b1 / k; d->b = b2 / k; d->a = b3 / k;
}
static inline f32 Clamp(f32 t) {
    if (t < 0.0f) t = 0.0f;
    if (t > 1.0f) t = 1.0f;
    return t;
}
void fn_801218C4(RGBA *out, RGBA *in, Rect *a, Rect *b) {
    Col c1, c2;
    f32 t, v, u;
    if (b->y0 == a->y0) {
        ToCol2(&c1, &c2, &in[0], &in[1]);
    } else {
        t = (b->y0 - a->y0) / (a->y1 - a->y0);
        if (t < 0.0f) t = 0.0f;
        else if (t > 1.0f) t = 1.0f;
        fn_8014AB2C(&c1, &in[0], &in[2], t);
        fn_8014AB2C(&c2, &in[1], &in[3], t);
    }
    u = (b->x0 - a->x0) / (a->x1 - a->x0);
    v = (b->x1 - a->x0) / (a->x1 - a->x0);
    if (u < 0.0f) u = 0.0f;
    if (u > 1.0f) u = 1.0f;
    if (v < 0.0f) v = 0.0f;
    if (v > 1.0f) v = 1.0f;
    fn_80121458(&out[0], &c1, &c2, u);
    fn_80121458(&out[1], &c1, &c2, v);
    if (b->y1 == a->y1) {
        ToCol2(&c1, &c2, &in[2], &in[3]);
    } else {
        t = Clamp((b->y1 - a->y0) / (a->y1 - a->y0));
        fn_8014AB2C(&c1, &in[0], &in[2], t);
        fn_8014AB2C(&c2, &in[1], &in[3], t);
    }
    fn_80121458(&out[2], &c1, &c2, u);
    fn_80121458(&out[3], &c1, &c2, v);
}
}
