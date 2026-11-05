#include "common.h"
struct A_2E58 { u8 pad_[492];
    virtual ~A_2E58();
};
struct B_2E58 { u8 pad_[16];
    virtual ~B_2E58();
};
struct V3_2E58 { f32 x, y, z; };
struct M_2E58 { V3_2E58 r0, r1, r2; };
struct P_2E58 { u32 f0; int f4; B_2E58 *f8; A_2E58 *f12; B_2E58 *f16; int f20; };
extern "C" {
extern M_2E58 lbl_80357E78;
extern volatile int lbl_8035B754;
extern void *lbl_8035B478;
extern f32 lbl_80366AE8;
extern f32 lbl_80366AEC;
void fn_8023E138(void *, A_2E58 *);
void __dl__FPv(void *);
}
static inline void Set_2E58(V3_2E58 *v, f32 a, f32 b, f32 c) { v->x = a; v->y = b; v->z = c; }
static inline void Zero_2E58(V3_2E58 *v) { v->x = lbl_80366AE8; v->y = lbl_80366AE8; v->z = lbl_80366AE8; }
static inline void Ident_2E58(V3_2E58 *a, V3_2E58 *b, V3_2E58 *c) {
    Zero_2E58(a); a->x = lbl_80366AEC;
    Zero_2E58(b); b->y = lbl_80366AEC;
    Zero_2E58(c); c->z = lbl_80366AEC;
}
extern "C" P_2E58 *fn_80262E58(P_2E58 *p, short flag) {
    M_2E58 *m = &lbl_80357E78;
    if (p) {
        lbl_8035B754 = 0;
        void *g = *(void * volatile *)&lbl_8035B478;
        if (g && p->f12) fn_8023E138(g, p->f12);
        if (p->f12) delete p->f12;
        if (p->f8) delete p->f8;
        if (p->f16) delete p->f16;
        p->f12 = 0;
        p->f8 = 0;
        p->f4 = 0;
        p->f16 = 0;
        p->f20 = 0;
        Ident_2E58(&m->r0, &m->r1, &m->r2);
        if (flag > 0) __dl__FPv(p);
    }
    return p;
}
