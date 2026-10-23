// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct O802722EC {
    u8 pad[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void d(s32);
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void f();
};
extern "C" {
typedef struct S802722EC {
    u32 f0;
    O802722EC *objs[60];
    u32 f244[60];
    void *f484;
    u32 f488;
} S802722EC;
void fn_8019B6B8(void *, O802722EC *);
void fn_8019BB1C(void *);
void __dt__9C8019CF04Fv(void *, s32);
void __dl__FPv(void *);

static inline void rel(S802722EC *p) {
    u32 i;
    for (i = 0; i < 60; i++) {
        if (p->objs[i] != 0) {
            fn_8019B6B8(p->f484, p->objs[i]);
            p->objs[i]->f();
            if (p->objs[i] != 0) p->objs[i]->d(1);
        }
    }
}
static inline void clr(S802722EC *p) {
    u32 i;
    for (i = 0; i < 60; i++) {
        p->objs[i] = 0;
        p->f244[i] = 0;
    }
}
S802722EC *fn_802722EC(S802722EC *p, s16 flag) {
    u32 i;
    if (p != 0) {
        rel(p);
        if (p->f484 != 0) {
            fn_8019BB1C(p->f484);
            __dt__9C8019CF04Fv(p->f484, 1);
        }
        clr(p);
        p->f488 = 0;
        p->f0 = 0;
        p->f484 = 0;
        if (flag > 0) __dl__FPv(p);
    }
    return p;
}

} /* extern "C" */
