#include "common.h"
extern "C" {
extern "C" void *memcpy(void *, const void *, unsigned long);
struct C4_80130B4C { u8 a, b, c, d; };
struct Pool_80130B4C {
    u8 pad0[28];
    u32 n1;
    u32 *b1;
    u8 pad24[4];
    u32 n2;
    u32 *b2;
};
struct Desc_80130B4C {
    u32 arg;
    Pool_80130B4C *pool;
    C4_80130B4C c8, c12, c16, c20;
    u32 flags;
    u32 v28, v32, v36, v40, v44, v48, v52, v56;
    u32 v60, v64;
    f32 v68;
    u32 v72;
    u32 n1;
    u32 *src1;
    u32 n2;
    u32 *src2;
};
struct Obj_80130B4C {
    C4_80130B4C c0, c4, c8, c12;
    u8 pad16[4];
    u32 v20;
    u32 *p24;
    u32 *p28;
    u32 v32, v36;
    f32 v40;
    u32 flags;
    u8 n2;
    u8 b49;
    u8 pad50[2];
    u8 n1;
    u8 b53, b54, b55, b56, b57, b58, b59;
    u8 pad60[4];
    Pool_80130B4C *pool;
    virtual void v0(u32);
    virtual void v1();
    virtual void v2();
};
static inline u32 *alloc1_80130B4C(Pool_80130B4C *p, u32 n) {
    u32 *r = p->b1 + p->n1;
    p->n1 += n;
    return r;
}
static inline u32 *alloc2_80130B4C(Pool_80130B4C *p, u32 n) {
    u32 *r = p->b2 + p->n2;
    p->n2 += n;
    return r;
}
void fn_80130B4C(Obj_80130B4C *__restrict o, Desc_80130B4C *__restrict d) {
    if (o->flags & 1) {
        o->v2();
    }
    o->pool = d->pool;
    o->flags = d->flags | 1;
    o->c0 = d->c8;
    o->c4 = d->c12;
    o->c12 = d->c16;
    o->c8 = d->c20;
    o->b53 = d->v40;
    o->b54 = d->v28;
    o->b55 = d->v32;
    o->b49 = d->v36;
    o->b56 = d->v44;
    o->b57 = d->v48;
    o->b58 = d->v52;
    o->b59 = d->v56;
    o->v32 = d->v60;
    o->v36 = d->v64;
    o->v40 = d->v68;
    o->v20 = d->v72;
    o->n1 = d->n1;
    if (o->n1 != 0) {
        u32 *src = d->src1;
        o->p24 = alloc1_80130B4C(d->pool, o->n1);
        if (src != NULL) {
            memcpy(o->p24, src, o->n1 * 4);
        }
    }
    {
        u32 *src = d->src2;
        o->n2 = d->n2;
        if (src != NULL) {
            o->p28 = alloc2_80130B4C(d->pool, o->n2);
            if (src != NULL) {
                memcpy(o->p28, src, o->n2 * 4);
            }
        }
    }
    o->v0(d->arg);
}

}
