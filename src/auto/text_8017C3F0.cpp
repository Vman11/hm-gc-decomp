#include "common.h"
struct V3 { f32 x, y, z; };
struct Q { u32 pad; V3 p0; V3 p1; };
struct Sk { u8 pad[36]; u8 *mt; };
struct Gg { u8 pad[4]; u16 type; u8 pad2[168 - 6]; Sk *sk; };
struct Nd { u8 pad[4]; u32 idx; u8 pad2[8]; Nd *next; Nd *kid; virtual void n0(); virtual void n1(); virtual s32 vis(); virtual void leaf(); };
extern "C" {
V3 lbl_803301F8;
V3 lbl_80330204;
V3 lbl_80330210;
V3 lbl_8033021C;
extern u32 lbl_8035AD94;
extern void *lbl_8035AD8C;
extern Q *lbl_8035AD98;
extern Gg *lbl_8035AD80;
extern f32 lbl_8035AD9C;
extern char lbl_802A10D8[], lbl_802A1098[];
extern const f32 lbl_80364840;
extern f64 lbl_80364848, lbl_80364850;
extern f32 lbl_80364858;
void fn_80103F08(void *m, V3 *v, V3 *o);
void fn_80060568(char *, s32, s32, s32);
void fn_80101820(V3 *v);
}
inline f32 Sq(f32 x) {
    if (x > *(volatile const f32 *)&lbl_80364840) {
        const f64 _half = lbl_80364848;
        const f64 _three = lbl_80364850;
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
extern "C" {

static inline void cp(V3 *s, V3 *d) { d->x = s->x; d->y = s->y; d->z = s->z; }
static inline void sub(V3 *a, V3 *b, V3 *o) { *(volatile f32 *)&o->x = a->x - b->x; *(volatile f32 *)&o->y = a->y - b->y; *(volatile f32 *)&o->z = a->z - b->z; }
static inline f32 mag(V3 *v) {
    return Sq(v->z * v->z + (v->x * v->x + v->y * v->y));
}
#define VR(e) (*(volatile f32 *)&(e))
static inline void madd(V3 *a, V3 *d, f32 k, V3 *o) { o->x = k * VR(d->x) + VR(a->x); o->y = k * VR(d->y) + VR(a->y); o->z = k * VR(d->z) + VR(a->z); }
void fn_8017C3F0(Nd *n) {
    if (lbl_8035AD94 != n->idx) {
        if (n->idx == 0) {
            if (!lbl_8035AD8C) {
                Q *q = lbl_8035AD98;
                cp(&q->p0, &lbl_803301F8);
                cp(&q->p1, &lbl_80330204);
            } else {
                fn_80103F08(lbl_8035AD8C, &lbl_8035AD98->p0, &lbl_803301F8);
                fn_80103F08(lbl_8035AD8C, &lbl_8035AD98->p1, &lbl_80330204);
            }
        } else {
            u8 *m;
            Gg *g;
            if (lbl_8035AD80->type != 3) fn_80060568(lbl_802A10D8, 0, 0, 0);
            if (!(g = lbl_8035AD80)->sk) fn_80060568(lbl_802A1098, 0, 0, 0);
            m = g->sk->mt + (n->idx - 1) * 40;
            fn_80103F08(m, &lbl_8035AD98->p0, &lbl_803301F8);
            fn_80103F08(m, &lbl_8035AD98->p1, &lbl_80330204);
        }
        sub(&lbl_80330204, &lbl_803301F8, &lbl_80330210);
        *(volatile f32 *)&lbl_8035AD9C = lbl_80364858 * mag(&lbl_80330210);
        madd(&lbl_803301F8, &lbl_80330210, *(volatile f32 *)&lbl_80364858, &lbl_8033021C);
        fn_80101820(&lbl_80330210);
        lbl_8035AD94 = n->idx;
    }
    if (n->vis()) {
        if (!n->kid) n->leaf();
        else {
            Nd *k;
            k = n->kid;
            do { fn_8017C3F0(k); k = k->next; } while (k);
        }
    }
}
static inline f32 magv3(V3 *v) {
    f32 x = v->x, y = v->y, z = v->z;
    f32 xx = x * x, yy = y * y, zz = z * z;
    return Sq(zz + (xx + yy));
}
}
