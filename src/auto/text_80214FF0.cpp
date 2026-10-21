#include "common.h"

extern "C" {

extern u8 lbl_802EFFC0[];
void __dl__FPv(void *);
struct Y80214FF0 { u8 pad[8]; u32 flags; };
struct X80214FF0 { u8 pad[4]; Y80214FF0 *y; };
struct S80214FF0 { u8 pad[0x18]; u8 *vt; X80214FF0 *x; u32 f20; };
void fn_800FA1A0(S80214FF0 *);
void fn_800FA324(S80214FF0 *, s32);
struct V80214FF0 { u8 vptr_pad[0x18]; virtual void p0(); virtual void m(); };

static inline bool YBusy80214FF0(Y80214FF0 *y) {
    bool b = 0;
    if ((y->flags & 4) != 0 || (y->flags & 8) != 0) {
        b = 1;
    }
    return b;
}

static inline s32 Busy80214FF0(X80214FF0 *x) {
    s32 r;
    if (x->y == 0) {
        r = 0;
    }
    else {
        r = YBusy80214FF0(x->y);
    }
    return r;
}

S80214FF0 *dtor_80214FF0(S80214FF0 *p, s16 f) {
    if (p != 0) {
        p->vt = lbl_802EFFC0;
        if (p->x != 0) {
            if (p->x != 0 && Busy80214FF0(p->x)) {
                ((V80214FF0 *)p)->m();
            }
        }
        p->x = 0;
        p->f20 = 0;
        fn_800FA1A0(p);
        fn_800FA324(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
