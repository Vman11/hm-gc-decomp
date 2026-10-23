// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u32 lbl_8035B374;
void fn_800E1E88(void *, void (*)(void *, s32));
void __dla__FPv(void *);
void __dl__FPv(void *);
void fn_8023C754(void *);
void __dt__9C8023C7CCFv(void *, s32);
void __dt__9C8018E150Fv(void *, s32);
void __dt__9C801883E0Fv(void *, s32);
void __dt__9C80192398Fv(void *, s32);

struct E80233DEC {
    u8 pad[4];
    u16 type;
};
struct S80233DEC {
    u32 f0;
    E80233DEC **f4;
    void *f8;
    u32 f12;
    u32 f16;
    void *f20;
};

static inline void release(S80233DEC *p) {
    u32 i;
    lbl_8035B374 = 0;
    if (p->f4) {
        for (i = 0; i < p->f12; i++) {
        E80233DEC *e = p->f4[i];
        if (e) {
            if (e->type == 2) {
                fn_800E1E88(e, __dt__9C8018E150Fv);
            } else if (e->type == 3) {
                fn_800E1E88(e, __dt__9C801883E0Fv);
            } else {
                fn_800E1E88(e, __dt__9C80192398Fv);
            }
        }
        }
        __dla__FPv(p->f4);
    }
        if (p->f20) {
            fn_8023C754(p->f20);
            __dt__9C8023C7CCFv(p->f20, 1);
        }
        if (p->f8) {
            __dla__FPv(p->f8);
        }
        p->f0 = 0;
        p->f4 = 0;
        p->f12 = 0;
        p->f20 = 0;
        p->f16 = 0;
        p->f8 = 0;
}

S80233DEC *fn_80233DEC(S80233DEC *p, s16 f) {
    if (p) {
        release(p);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
