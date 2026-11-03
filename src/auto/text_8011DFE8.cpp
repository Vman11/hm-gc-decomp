#include "common.h"
extern "C" {
#pragma opt_dead_assignments off
} /* extern "C" */
struct EvL;
struct LisL { virtual void v0(); virtual void v1(); virtual void on(EvL *e); };
struct NodeL { NodeL *next; u8 pad4[4]; s32 key; u8 pad12[4]; s32 f16; u8 pad20[4]; LisL *lis; };
struct HeadL { NodeL *first; u8 pad4[4]; };
struct QL {
    u32 f0; u32 n4; u32 n8; u8 pad12[12]; u32 f24; u8 pad28[28]; LisL **lis; u8 pad60[4]; u32 nlis;
    u8 pad68[12]; s32 *keys; u8 pad84[36]; s32 *a120; u8 pad124[4]; s32 *a128; u8 pad132[20];
    HeadL *heads; s32 *a156; f32 *vals; f32 *vals2; u32 f168;
    u32 count; s32 f176; u8 pad180[4]; s32 f184; u8 pad188[20];
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void *m(u32);
};
struct EvL { QL *q; s32 one; s32 key; s32 f12; f32 v; s32 t; s32 fl; };
extern "C" {
extern f32 lbl_80363DB0;
extern f32 lbl_80363DB8;

f32 fn_80118ACC(void *);
f32 fn_80118AB0(void *);

static inline f32 getA(QL *q, u32 i) {
    if (i >= q->count) return lbl_80363DB0;
    if (i < q->n4) return fn_80118ACC(q->m(i));
    i -= q->n4;
    if (i < q->n8) return q->vals[i];
    return lbl_80363DB0;
}
static inline f32 getB(QL *q, u32 i) {
    if (i >= q->count) return lbl_80363DB0;
    if (i < q->n4) return fn_80118AB0(q->m(i));
    i -= q->n4;
    if (i < q->n8) return q->vals2[i];
    return lbl_80363DB0;
}
static inline s32 keyOf(QL *q, u32 i) {
    if (i < q->count) return q->keys[i * 2];
    return 0;
}
static inline u32 findKey(QL *q, s32 k) {
    u32 i;
    for (i = 0; i < q->count; i++) {
        if (k == q->keys[i * 2]) return i;
    }
    return -1;
}
static inline s32 valOf(QL *q, u32 i) {
    if (i < q->count) return q->keys[i * 2 + 1];
    return 0;
}
static inline HeadL *headOf(QL *q, u32 i) {
    if (i < q->count) return &q->heads[i];
    return 0;
}
static inline u32 numL(QL *q) { return q->nlis; }
static inline void setMode(QL *q, u32 i, s32 mode) {
    u32 idx = q->f0 + i;
    if (idx < q->f168 && mode != q->a120[idx]) {
        q->a120[idx] = mode;
        q->a128[idx] = q->f176 + q->f184;
    }
}
static inline void setMode2(QL *q, u32 i, s32 mode) {
    u32 idx = i; idx = q->f0 + idx;
    if (idx < q->f168 && mode != q->a120[idx]) {
        q->a120[idx] = mode;
        q->a128[idx] = q->f176 + q->f184;
    }
}
static inline f32 getV(QL *q, u32 i) {
    if (i < q->n8) return q->vals[i];
    return lbl_80363DB0;
}
static inline f32 getV2(QL *q, u32 i) {
    if (i < q->n8) return q->vals2[i];
    return lbl_80363DB0;
}
static inline void notN(HeadL *h, EvL *e) {
    NodeL *nd;
    for (nd = h->first; nd; nd = nd ? nd->next : h->first) {
        e->f12 = nd->f16;
        if (nd->key == e->key) nd->lis->on(e);
    }
}
static inline void fire(QL *q, u32 i, f32 v) {
//P{
    HeadL *h;
    NodeL *nd;
    u32 k;
    u32 n;
//P}
    EvL e;
    h = headOf(q, i);
    n = numL(q);
    e.q = q;
    e.one = 1;
    e.key = keyOf(q, i);
    e.f12 = 0;
    e.v = v;
    e.t = q->f176;
    e.fl = q->f24 == 0 ? 2 : 0;
    for (k = 0; k < n; k++) q->lis[k]->on(&e);
    if (h) {
        notN(h, &e);
    }
}

void fn_8011DFE8(QL *q) {
    u32 i;
    for (i = 0; i < q->n4; i++) {
        f32 a = getA(q, i);
        if (a != getB(q, i)) {
            if (valOf(q, findKey(q, keyOf(q, i)))) {
                s32 mode;
                if (lbl_80363DB0 == a) mode = 0;
                else if (a > lbl_80363DB0) mode = 2;
                else mode = 3;
                setMode(q, i, mode);
            }
            fire(q, i, a);
        }
    }
    for (i = 0; i < q->n8; i++) {
        f32 a = getV(q, i);
        f32 b = getV2(q, i);
        if (a != b) {
            if (valOf(q, findKey(q, keyOf(q, i)))) {
                u32 r = i < q->n8 ? q->a156[i] : 0;
                s32 mode;
                if (a < 6.2831855f && r != 0) { f32 x = a / (6.2831855f / (f32)(s32)r); mode = (s32)(0.05f + x) + 4096; }
                else mode = 0;
                setMode(q, q->n4 + i, mode);
            }
            fire(q, q->n4 + i, a);
        }
    }
}

}
