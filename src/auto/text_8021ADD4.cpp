// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {
extern u8 lbl_802F01F0[];
void __dla__FPv(void *);
void fn_800E1E88(void *, void *);
void __dt__9C8021B878Fv(void);
void fn_802127F0(void *);
void __dt__9C80212860Fv(void *, s32);
void __dt__9C8021217CFv(void *, s32);
void __dl__FPv(void *);
}
struct V_8021ADD4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

void *dtor_8021ADD4(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802F01F0;
        if (*(void **)(p + 36) != NULL) {
            __dla__FPv(*(void **)(p + 36));
        }
        if (*(void **)(p + 32) != NULL) {
            fn_800E1E88(*(void **)(p + 32), (void *)__dt__9C8021B878Fv);
        }
        fn_802127F0(p + 4);
        ((V_8021ADD4 *)p)->m();
        __dt__9C80212860Fv(p + 4, -1);
        __dt__9C8021217CFv(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
