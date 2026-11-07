#include "common.h"

extern "C" {

struct A_2E58 { u8 pad_[492];
    virtual ~A_2E58();
};
struct B_2E58 { u8 pad_[16];
    virtual ~B_2E58();
};
struct V3_2E58 { f32 x, y, z; };
struct M_2E58 { V3_2E58 r0, r1, r2; };
struct P_2E58 { u32 f0; int f4; B_2E58 *f8; A_2E58 *f12; B_2E58 *f16; int f20; };

V3_2E58 lbl_80357E78, lbl_80357E84, lbl_80357E90;
extern volatile int lbl_8035B754;
extern void *lbl_8035B478;
extern const f32 lbl_80366AE8 = 0.0f;
extern const f32 lbl_80366AEC = 1.0f;
void fn_8023E138(void *, A_2E58 *);
void __dl__FPv(void *);

static inline void Set_2E58(V3_2E58 *v, f32 a, f32 b, f32 c) { v->x = a; v->y = b; v->z = c; }
static inline void Zero_2E58(V3_2E58 *v) { v->x = lbl_80366AE8; v->y = lbl_80366AE8; v->z = lbl_80366AE8; }
static inline void Ident_2E58(V3_2E58 *a, V3_2E58 *b, V3_2E58 *c) {
    f32 z = *(volatile f32 *)&lbl_80366AE8;
    *(volatile f32 *)&a->x = z; *(volatile f32 *)&a->y = z; *(volatile f32 *)&a->z = z;
    f32 o = *(volatile f32 *)&lbl_80366AEC;
    *(volatile f32 *)&b->y = z; c->x = z; c->y = z; *(volatile f32 *)&c->z = z;
    *(volatile f32 *)&a->x = o; *(volatile f32 *)&b->x = z; *(volatile f32 *)&b->z = z; *(volatile f32 *)&b->y = o; *(volatile f32 *)&c->z = o;
}
void fn_80262D38(P_2E58 *p) {
    void *g = *(void * volatile *)&lbl_8035B478;
    if (g && p->f12) fn_8023E138(g, p->f12);
    if (p->f12) delete p->f12;
    if (p->f8) delete p->f8;
    if (p->f16) delete p->f16;
    *(volatile int *)&p->f12 = 0;
    *(volatile int *)&p->f8 = 0;
    *(volatile int *)&p->f4 = 0;
    *(volatile int *)&p->f16 = 0;
    *(volatile int *)&p->f20 = 0;
    Ident_2E58(&lbl_80357E78, &lbl_80357E84, &lbl_80357E90);
}

} /* extern "C" */
