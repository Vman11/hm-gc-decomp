// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V3 { f32 x, y, z; };
struct E { u32 fl; u8 pad4[4]; f32 life; f32 t; V3 pos; V3 p28; V3 v; V3 acc; };
struct Q { u32 fl; u8 pad4[12]; V3 pos; };
struct N { u8 pad[28]; V3 *x28; V3 *x32; u8 pad36[108 - 36]; Q *x108; u8 pad112[124 - 112]; f32 *x124; u8 pad128[148 - 128]; N *next; };
struct T { u8 pad[20]; u32 x20; u8 pad24[60 - 24]; N *x60; };
struct Ow { u8 pad[12]; u32 fl; u8 pad16[544 - 16]; f32 f544; T x548; };
struct L { virtual void s0(); virtual void s1(); virtual void dead(Ow *, E *); virtual void hit(Ow *, E *, V3 *); virtual int c24(Ow *, Q *, V3 *, N *); virtual void c28(Ow *, Q *, V3 *, N *); virtual void beg(); virtual void end(); };
struct P { u8 pad[12]; f32 f12; };
extern "C" {
struct O { u8 pad0[4]; Ow *ow; E *buf; u32 head; u32 tail; u32 cap; u32 cnt; u8 pad28[44 - 28]; void *x44; L *lis; };
extern f32 lbl_80364C10, lbl_80364C14;
extern u32 lbl_80364C08, lbl_80364C0C, lbl_80364BFC;
void fn_800FCF74(T *);
f32 fn_8010155C(P *, V3 *);
void fn_800FCED8(T *, V3 *, V3 *, E *, int);
void fn_8019A5E0(void *, T *, P *);
void fn_80101624(V3 *, V3 *, V3 *, f32);
static inline T *GetT(Ow *ow) { return &ow->x548; }
static inline f32 R(P *p) { return p->f12; }
static inline f32 W(Ow *w) { return w->f544; }
static inline T *Lock(T *t) { fn_800FCF74(t); return t; }
static inline void Dec(O *o) {
    if (o->head < 1) o->head = o->cap;
    o->head--;
}
void fn_80195D50(O *o, P *p, f32 dt) {
    V3 save;
    V3 tmp;
    E *e, *end;
    int stop;
    T *t;
    f32 d;
    if (o->cnt < 1) {
        o->head = o->cap - 1;
        o->tail = o->head;
        o->cnt = 0;
        return;
    }
    d = p->f12 - W(o->ow);
    if (d < lbl_80364C10) {
        if (d < lbl_80364C14) d = lbl_80364C14;
        else d = d * d;
    }
    if (o->x44 && (o->ow->fl & 0x800)) {
        t = GetT(o->ow); fn_800FCF74(t);
    } else {
        t = 0;
    }
    stop = 0;
    e = &o->buf[o->head];
    end = &o->buf[o->tail];
    do {
        if ((e->fl & 0xF) == 0) {
            e->t += dt;
            if (e->t > e->life) {
                e->fl |= lbl_80364C08;
                if (o->lis) o->lis->dead(o->ow, e);
                Dec(o);
                o->cnt--;
            } else if (e->t >= lbl_80364C14) {
                save = e->pos;
                if (o->ow->fl & 0x4000) {
                    f32 ax = e->acc.x * dt, ay = e->acc.y * dt, az = e->acc.z * dt;
                    e->v.x += ax; e->v.y += ay; e->v.z += az;
                    e->pos.x = dt * e->v.x + e->pos.x;
                    e->pos.y = dt * e->v.y + e->pos.y;
                    e->pos.z = dt * e->v.z + e->pos.z;
                    e->v.x += ax; e->v.y += ay; e->v.z += az;
                    e->pos.x = dt * ax + e->pos.x;
                    e->pos.y = dt * ay + e->pos.y;
                    e->pos.z = dt * az + e->pos.z;
                } else {
                    f32 t2;
                    f32 tt;
                    e->pos = e->p28;
                    tt = e->t;
                    e->pos.x = tt * e->v.x + e->pos.x;
                    e->pos.y = tt * e->v.y + e->pos.y;
                    e->pos.z = tt * e->v.z + e->pos.z;
                    t2 = e->t * e->t;
                    e->pos.x = t2 * e->acc.x + e->pos.x;
                    e->pos.y = t2 * e->acc.y + e->pos.y;
                    e->pos.z = t2 * e->acc.z + e->pos.z;
                }
                if (fn_8010155C(p, &e->pos) > d) {
                    e->fl |= lbl_80364C0C;
                    if (o->lis) o->lis->hit(o->ow, e, &e->pos);
                    if (!stop) Dec(o);
                    o->cnt--;
                } else {
                    if (t) fn_800FCED8(t, &save, &e->pos, e, 0);
                    stop = 1;
                }
            } else {
                stop = 1;
            }
        } else if (!stop) {
            Dec(o);
        }
        if (e <= o->buf) e = o->buf + o->cap;
        e--;
    } while (e != end);
    if (t && t->x20) {
        N *n;
        if (o->lis) o->lis->beg();
        fn_8019A5E0(o->x44, t, p);
        n = t->x60;
        while (n) {
            Q *q = n->x108;
            fn_80101624(&tmp, n->x28, n->x32, *n->x124);
            if (o->lis) {
                if (!o->lis->c24(o->ow, q, &tmp, n)) {
                    n = n->next;
                    continue;
                }
                o->lis->c28(o->ow, q, &tmp, n);
            }
            q->pos = tmp;
            q->fl |= lbl_80364BFC;
            o->cnt--;
            n = n->next;
        }
        if (o->lis) o->lis->end();
    }
}

} /* extern "C" */
