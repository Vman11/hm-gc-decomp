// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X_8026D3FC { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void m(s32); };
struct M_8026D3FC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m6(void *); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void m16(void *); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m20(void *); };
struct N_8026D3FC { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct E_8026D3FC { X_8026D3FC *o; s32 b; };
struct P_8026D3FC { u8 pad[20]; void *x; u8 pad2[44]; u32 n; E_8026D3FC e[40]; };
extern "C" { extern M_8026D3FC *lbl_8035B7C0; extern N_8026D3FC *lbl_8035B7C4; extern s32 lbl_8035B7C8; void __dla__FPv(void *); }

void fn_8026D3FC(u8 *p) {
    u32 i;
    for (i = 0; i < ((P_8026D3FC *)p)->n; i++) {
        if (((P_8026D3FC *)p)->e[i].o != 0) {
            ((P_8026D3FC *)p)->e[i].o->m(0);
            lbl_8035B7C0->m16(((P_8026D3FC *)p)->e[i].o);
            ((P_8026D3FC *)p)->e[i].o = 0;
        }
        ((P_8026D3FC *)p)->e[i].b = 0;
    }
    if (lbl_8035B7C4 != 0) {
        lbl_8035B7C4->m();
    }
    if (lbl_8035B7C0 != 0) {
        if (lbl_8035B7C4 != 0) {
            lbl_8035B7C0->m20(lbl_8035B7C4);
        }
        if (*(void **)(p + 20) != 0) {
            lbl_8035B7C0->m6(*(void **)(p + 20));
        }
    }
    *(void **)(p + 20) = 0;
    lbl_8035B7C0 = 0;
    lbl_8035B7C8 = 0;
    lbl_8035B7C4 = 0;
    if (*(void **)(p + 400) != 0) {
        __dla__FPv(*(void **)(p + 400));
        *(void **)(p + 400) = 0;
    }
}

} /* extern "C" */
