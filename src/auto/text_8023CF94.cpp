// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A8023D0CC {
    u8 pad[104];
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10();
    u8 pad2[204 - 108];
};
struct B8023D0CC { u8 d[8]; };
struct O8023D0CC { u8 pad[16]; virtual void f0(); virtual void f1(); };
struct M8023D0CC {
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(O8023D0CC *o);
};
struct S8023D0CC {
    A8023D0CC *a;
    s32 f4;
    s32 f8;
    u32 n;
    u8 pad16[4];
    f32 f20;
    s32 f24;
    u8 pad28[4];
    B8023D0CC *b;
    s32 f36;
    O8023D0CC *o;
};
extern u8 *lbl_8035B460;
extern f32 lbl_803660B8;
void fn_8013E8C0(B8023D0CC *p);
void fn_800E1E88(void *p, void *dt);
void __dt__9C801883E0Fv(void);
void __dt__9C8013ECE4Fv(void);
void __dl__FPv(void *p);

static inline void clr(S8023D0CC *p) {
    u32 i;
    for (i = 0; i < p->n; i++) {
        if (p->a) p->a[i].f10();
        if (p->b) fn_8013E8C0(&p->b[i]);
    }
}
S8023D0CC *__dt__9C8023D0CCFv(S8023D0CC *p, s16 f) {
    if (p) {
        clr(p);
        if (p->a) fn_800E1E88(p->a, (void *)__dt__9C801883E0Fv);
        if (p->b) fn_800E1E88(p->b, (void *)__dt__9C8013ECE4Fv);
        if (p->o) {
            p->o->f1();
            (*(M8023D0CC **)(M2C_FIELD(lbl_8035B460, u8 **, 12) + 11332))->f10(p->o);
        }
        p->a = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->n = 0;
        p->f24 = 0;
        p->b = 0;
        p->f36 = 0;
        p->f20 = lbl_803660B8;
        p->o = 0;
        if (f > 0) __dl__FPv(p);
    }
    return p;
}

} /* extern "C" */
