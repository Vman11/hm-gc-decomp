// fn_801A4044: segment-vs-polygon test (NonMatching draft, GC/2.0p1).
// Literals are this unit's pool: matching also needs .sdata2 0x80364DA8-0x80364DD0 in splits.txt.
#include "common.h"

struct Vec3 { f32 x, y, z; };
struct Edge { Vec3 *a; Vec3 *b; };
struct Poly { u32 x0; u32 n; Edge **e; Vec3 nrm; };
extern "C" {
void fn_80101820(Vec3 *);
}
static inline f32 Sq(f32 x) {
    if (x > 0.0f) {
        const f64 _half = 0.5;
        const f64 _three = 3.0;
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
extern "C" int fn_801A4044(Poly *a, Vec3 *p, Vec3 *q, f32 *t) {
    Vec3 d;
    u32 n;
    f32 len, dot;
    u32 i;
    Edge **e;
    f32 px, py, pz;
    f32 dx = q->x - p->x, dy = q->y - p->y, dz = q->z - p->z;
    d.x = dx; d.y = dy; d.z = dz;
    n = a->n;
    len = Sq(d.x * d.x + d.y * d.y + d.z * d.z);
    fn_80101820(&d);
    dot = a->nrm.x * d.x + a->nrm.y * d.y + a->nrm.z * d.z;
    if (dot >= -0.000005f && dot <= 0.000005f) return 0;
    e = a->e;
    {
        Vec3 *v = (*e)->a;
        px = p->x; py = p->y; pz = p->z;
        *t = ((a->nrm.x * v->x + a->nrm.y * v->y + a->nrm.z * v->z) - (a->nrm.x * px + a->nrm.y * py + a->nrm.z * pz)) / dot;
    }
    *t /= len;
    if (*t < 0.0f) return 0;
    if (*t > 1.0f) return 0;
    if (0.0f > dot) {
        for (i = 0; i < n; i++, e++) {
            Vec3 *v0 = (*e)->a;
            Vec3 *v1 = (*e)->b;
            f32 wx = px - v0->x, wy = py - v0->y, wz = pz - v0->z;
            f32 ex = v1->x - v0->x, ey = v1->y - v0->y, ez = v1->z - v0->z;
            f32 cx = ey * wz - ez * wy;
            f32 cy = ez * wx - ex * wz;
            f32 cz = ex * wy - ey * wx;
            if (d.x * cx + d.y * cy + d.z * cz > 0.0f) return 0;
        }
    } else {
        for (i = 0; i < n; i++) {
            Vec3 *v0 = e[i]->a;
            Vec3 *v1 = e[i]->b;
            f32 wx = px - v0->x, wy = py - v0->y, wz = pz - v0->z;
            f32 ex = v1->x - v0->x, ey = v1->y - v0->y, ez = v1->z - v0->z;
            f32 cx = ey * wz - ez * wy;
            f32 cy = ez * wx - ex * wz;
            f32 cz = ex * wy - ey * wx;
            if (d.x * cx + d.y * cy + d.z * cz < 0.0f) return 0;
        }
    }
    return 1;
}
