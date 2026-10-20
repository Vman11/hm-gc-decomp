// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {
extern u8 lbl_802EF7C0[];
void fn_802069C8(void *, s32);
void dtor_802054B0(void *, s32);
void dtor_80203800(void *, s32);
void dtor_801FD4C4(void *, s32);
void __dl__FPv(void *);
}
struct V_80203040 { virtual void p0(); virtual void p1(); virtual void m(); };

void *fn_80203040(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802EF7C0;
        ((V_80203040 *)p)->m();
        fn_802069C8(p + 152, -1);
        dtor_802054B0(p + 152, -1);
        dtor_80203800(p + 152, -1);
        dtor_801FD4C4(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
