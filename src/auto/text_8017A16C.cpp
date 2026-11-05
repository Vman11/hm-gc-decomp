#include "common.h"
extern "C" {

struct Q4 { f32 x, y, z, w; };
struct V3 { f32 x, y, z; };
struct Clip { u8 p[8]; V3 pos; V3 scl; u8 p32[24]; u32 f56; Q4 rot; };
struct E60 { u8 p[16]; Clip *clip; u8 p20[16]; f32 w; f32 b; u8 p44[4]; u32 f48; u8 p52[8]; };
struct Ch { u8 p[4]; u32 n; E60 *arr; };
extern "C" {
extern u32 lbl_803647F8;
extern u32 lbl_803647FC;
extern f32 lbl_80364800;
extern f32 lbl_80364804;
void fn_80103A84(E60 *, f32);
void fn_80100880(Q4 *, Q4 *);
}
inline int HasPos(E60 *e) { return (e->f48 & 3) == 3; }
inline int HasScl(E60 *e) { return (e->f48 & 5) == 5; }
inline void Upd(E60 *e, f32 t) { if (e->f48 & 1) fn_80103A84(e, t); }
inline int HasRot(E60 *e) { return !e->clip ? 0 : e->clip->f56 & 1; }

inline void GetP(E60 *e, V3 *o) { Clip *k = e->clip; f32 w = e->w; o->x = k->pos.x * w; o->y = k->pos.y * w; o->z = k->pos.z * w; }
inline void GetS(E60 *e, V3 *o) { Clip *k = e->clip; f32 w = e->w; o->x = k->scl.x * w; o->y = k->scl.y * w; o->z = k->scl.z * w; }
extern "C" u32 fn_8017A16C(Ch *c, Q4 *q, V3 *pos, V3 *scl, f32 t) {
    u32 r;
    if (c->n == 0) return 0;
    if (c->n == 1) {
        r = 0;
        if (*(volatile u32 *)&c->arr->f48 & 1) {
            Upd(c->arr, t);
            if (HasRot(c->arr)) {
                r = 1;
                *q = c->arr->clip->rot;
            }
            if (HasPos(c->arr)) {
                GetP(c->arr, pos);
                r |= lbl_803647F8;
            }
            if (HasScl(c->arr)) {
                GetS(c->arr, scl);
                r |= lbl_803647FC;
            }
        }
        return r;
    } else {
        E60 *e = c->arr;
        E60 *end = e + c->n;
        f32 s1, s0;
        r = 0;
        q->x = lbl_80364800; q->y = lbl_80364800; q->z = lbl_80364800; q->w = lbl_80364800;
        for (; e < end; e++) {
            if (e->f48 & 1) {
                Upd(e, t);
                if (HasRot(e)) {
                    if (!(r & 1)) *q = e->clip->rot;
                    else fn_80100880(q, &e->clip->rot);
                    r = 1;
                }
            }
        }
        e = c->arr;
        pos->x = lbl_80364800; pos->y = lbl_80364800; pos->z = lbl_80364800;
        scl->x = lbl_80364800; scl->y = lbl_80364800; scl->z = lbl_80364800;
        s0 = s1 = lbl_80364800;
        for (; e < end; e++) {
            if (e->f48 & 1) {
                if ((e->f48 & 3) == 3) {
                    Clip *k = e->clip;
                    f32 w, x, y, z, b;
                    w = e->w;
                    x = k->pos.x * w; y = k->pos.y * w; z = k->pos.z * w; b = e->b;
                    pos->x += b * x; pos->y += b * y; pos->z += b * z;
                    s0 += e->b;
                    r |= lbl_803647F8;
                }
                if ((e->f48 & 5) == 5) {
                    Clip *k = e->clip;
                    f32 w, x, y, z, b;
                    w = e->w;
                    x = k->scl.x * w; y = k->scl.y * w; z = k->scl.z * w; b = e->b;
                    scl->x += b * x; scl->y += b * y; scl->z += b * z;
                    s1 += e->b;
                    r |= lbl_803647FC;
                }
            }
        }
        if (r & 2) {
            f32 m = lbl_80364804 / s0;
            pos->x *= m; pos->y *= m; pos->z *= m;
        }
        if (r & 4) {
            f32 m = lbl_80364804 / s1;
            scl->x *= m; scl->y *= m; scl->z *= m;
        }
        return r;
    }
}
}
