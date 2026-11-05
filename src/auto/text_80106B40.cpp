#include "common.h"

// NonMatching: DIFF 29 / SDIFF 9; only the angular-step block: target reloads s->c.x for the add (mine CSEs it).
struct V3 { f32 x, y, z; };
struct Body { u8 pad[0x10]; void *id; u8 pad14[0xC]; u32 flags; };
struct Mot { V3 a; V3 b; V3 c; V3 d; };
struct API {
    u8 pad0[0xC]; void (*setVel)(void *, V3 *);
    u8 pad10[0x2C - 0x10]; void (*f2C)(void *, V3 *, V3 *);
    u8 pad30[0x130 - 0x30]; void (*getVel)(void *, V3 *);
    u8 pad134[0x144 - 0x134]; void (*f144)(void *, V3 *);
    u8 pad148[0x14C - 0x148]; void (*f14C)(void *, V3 *);
};
extern "C" {
extern API lbl_803286D0;
extern u32 lbl_803638E0;
extern f32 lbl_803638E4;

static inline void vmadd(V3 *o, f32 k, const V3 *a) {
    o->x = k * a->x + o->x;
    o->y = k * a->y + o->y;
    o->z = k * a->z + o->z;
}
static inline void vscale(V3 *o, const V3 *a, f32 k) {
    o->x = a->x * k;
    o->y = a->y * k;
    o->z = a->z * k;
}
static inline void vadd(V3 *o, const V3 *a) {
    o->x = o->x + a->x;
    o->y = o->y + a->y;
    o->z = o->z + a->z;
}
static inline void rot(V3 *o, const V3 *w, const V3 *a) {
    o->x = a->x - w->z * a->y + w->y * a->z;
    o->y = a->y + w->z * a->x - w->x * a->z;
    o->z = a->z - w->y * a->x + w->x * a->y;
}

void fn_80106B40(Mot *s, Body *b, f32 dt) {
    V3 A;
    V3 B;
    V3 o1;
    V3 o2;
    V3 v;
    f32 om = lbl_803638E4 * dt;
    lbl_803286D0.getVel(b->id, &v);
    vmadd(&v, dt, &s->a);
    {
        V3 d;
        vscale(&d, &s->b, dt);
        vadd(&s->a, &d);
        vmadd(&v, om, &d);
    }
    lbl_803286D0.setVel(b->id, &v);
    b->flags |= lbl_803638E0;
    lbl_803286D0.f144(b->id, &A);
    lbl_803286D0.f14C(b->id, &B);
    {
        V3 w;
        V3 e;
        vscale(&w, &s->c, dt);
        vscale(&e, &s->d, dt);
        vadd(&s->c, &e);
        vscale(&e, &e, om);
        vadd(&w, &e);
        rot(&o1, &w, &A);
        rot(&o2, &w, &B);
    }
    lbl_803286D0.f2C(b->id, &o1, &o2);
    b->flags |= lbl_803638E0;
}
}
