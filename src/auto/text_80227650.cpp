// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80227650 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void m(void *, void *, void *, void *, f32); };
extern void *lbl_8035B374;
extern f32 lbl_80365C58;
V_80227650 *fn_80233550(void *);

void fn_80227650(u8 *p, void *x, void *a, void *b, void *c) {
    V_80227650 *g = fn_80233550(lbl_8035B374);
    if (g != NULL) {
        if (*(f32 **)(p + 0x1D0) != NULL) {
            g->m(p, c, a, b, **(f32 **)(p + 0x1D0));
        } else {
            g->m(p, c, a, b, lbl_80365C58);
        }
    }
}

} /* extern "C" */
