#include "common.h"

extern "C" {

extern u8 lbl_802F1E38[];
void __dt__9C8024AC90Fv(void);
void __dl__FPv(void *);
void __dla__FPv(void *);
void __dt__9C8023B4DCFv(void *, s32);
void fn_800E1E88(void *, void (*)(void));
void fn_8023B324(void *);
struct A8024B580 { A8024B580(); u8 pad[4]; };

struct S8024B580 {
    u32 f0;
    void *f4;
    A8024B580 *f8;
    u8 *fc;
    A8024B580 *f10;
    s32 f14;
    u32 f18;
    u8 f1c[0xa4];
    u8 *vt;
};

S8024B580 *fn_8024B580(S8024B580 *p, s16 f) {
    if (p != 0) {
        p->vt = lbl_802F1E38;
        if (p->f14 != 0) {
            if (p->f4 != 0) {
                fn_800E1E88(p->f4, __dt__9C8024AC90Fv);
            }
            if (p->f8 != 0) {
                delete[] p->f8;
            }
            if (p->fc != 0) {
                __dla__FPv(p->fc);
            }
            if (p->f10 != 0) {
                delete[] p->f10;
            }
            fn_8023B324(p->f1c);
        }
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->fc = 0;
        p->f10 = 0;
        p->f18 = 0;
        p->f14 = 0;
        __dt__9C8023B4DCFv(p->f1c, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
