// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V3 { f32 x, y, z; };
struct P224b { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void get(V3 *, V3 *, V3 *, V3 *, int); };
extern "C" {
typedef struct { u32 x0; s32 f4; u32 n0, n1, n2; } Q;
typedef struct { u8 pad[16]; void *x16; u8 pad20[12]; u32 x32; } G;
typedef struct { u32 fl; u8 pad4[44]; G *x48; u8 pad52[152 - 52]; u32 x152; f32 f156; u8 pad160[12]; f32 f172; } N;
typedef struct { u8 pad[16]; void *x16; } F;
typedef struct { u8 pad[168]; void *x168; } S160;
struct P224 : P224b { u8 pad4[160 - 4]; S160 *x160; };
typedef struct { u8 pad[224]; P224 *x224; } O;
typedef struct { u8 pad[12]; void (*f12)(void *, V3 *); u8 pad16[28 - 16]; void (*f28)(void *, V3 *, V3 *, V3 *); u8 pad32[392 - 32]; void (*f392)(void *, V3 *, V3 *); } FT;
extern char lbl_80366138[8];
extern FT lbl_803286D0;
extern u8 *lbl_8035B334;
extern f32 lbl_8036613C;
extern u32 lbl_80366140, lbl_80366144, lbl_8036614C;
void *fn_8019556C(void *);
int fn_800F6CD0(char *, char *);
void fn_80190604(void *, void *, char *);
void fn_801907D8(void *);
N *fn_8022ECB4(void *, u32);
F *fn_800F8274(void *, char *);
void fn_80190C98(N *);
void fn_80190888(N *, void *, char *);
void fn_80190940(N *, void *);
void fn_80196688(N *);
static inline void Rel(O *p, N **pp, Q q) {
    void *x;
    void *r;
    if (*pp) {
        if (q.f4 == 0) {
            r = 0;
            x = p->x224->x160;
            if (x) r = fn_8019556C(x);
            if (!x || r) {
                if (fn_800F6CD0((char *)&q.n0, lbl_80366138) == 0)
                    fn_80190604(*pp, r, (char *)&q.n0);
                else
                    fn_801907D8(*pp);
            }
        }
        if ((*(volatile u32 *)&(*pp)->x152) & 8) *(volatile u32 *)&(*pp)->x152 &= ~8;
        (*pp)->fl &= ~0x800;
        (*pp)->x152 &= ~1;
        *pp = 0;
    }
}
static inline void SetP(N *n, V3 *v) {
    G *g = n->x48;
    if (g) {
        lbl_803286D0.f12(g->x16, v);
        g->x32 |= lbl_80366140;
        fn_80190C98(n);
    }
}
static inline void SetR(N *n, V3 *a, V3 *b, V3 *c) {
    G *g = n->x48;
    if (g) {
        lbl_803286D0.f28(g->x16, a, b, c);
        g->x32 |= lbl_80366140;
        fn_80190C98(n);
    }
}
void fn_8023FA2C(O *p, N **pp, Q *__restrict q) {
    V3 pos, v80, v68, v56, a44, b32, z20, o8;
    N *n;
    G *g;
    if (*pp) Rel(p, pp, *q);
    *pp = fn_8022ECB4(*(void **)(lbl_8035B334 + 8), q->x0);
    n = *pp;
    if (!n) return;
    if (q->f4) {
        F *f;
        p->x224->get(&pos, &v80, &v68, &v56, 0);
        if (p->x224->x160 && (f = fn_800F8274(p->x224->x160->x168, (char *)&q->n0)) != 0) {
            z20.x = lbl_8036613C; z20.y = lbl_8036613C; z20.z = lbl_8036613C;
            lbl_803286D0.f392(f->x16, &z20, &o8);
            pos.x += o8.x; pos.y += o8.y; pos.z += o8.z;
        }
        SetP(*pp, &pos);
        a44 = v56;
        b32 = v80;
        a44.x = -a44.x; a44.y = -a44.y; a44.z = -a44.z;
        b32.x = -b32.x; b32.y = -b32.y; b32.z = -b32.z;
        SetR(*pp, &a44, &b32, &v68);
    } else if (p->x224->x160) {
        pos.x = lbl_8036613C; pos.y = lbl_8036613C; pos.z = lbl_8036613C;
        SetP(n, &pos);
        if (fn_800F6CD0((char *)&q->n0, lbl_80366138) == 0) fn_80190888(*pp, fn_8019556C(p->x224->x160), (char *)&q->n0);
        else fn_80190940(*pp, fn_8019556C(p->x224->x160));
    }
    (*pp)->fl |= lbl_80366144;
    n = *pp;
    n->f156 = lbl_8036613C;
    n->x152 &= ~6;
    n->f172 = lbl_8036613C;
    fn_80196688(n);
    (*pp)->x152 |= lbl_8036614C;
}

} /* extern "C" */
