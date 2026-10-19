// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80216BEC { u32 x; u8 pad[8]; virtual void p0(); virtual void p1(); virtual void m(); };
struct V_80216BEC { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void a(); virtual void b(); u8 pad2[0x2D80]; S_80216BEC sub; };
void fn_801A38FC(void *);

void fn_80216BEC(V_80216BEC *p) {
    if (p->sub.x != 0) {
        p->a();
        p->sub.m();
        p->b();
    }
    fn_801A38FC(p);
}

} /* extern "C" */
