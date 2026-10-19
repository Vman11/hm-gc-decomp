// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801A2670 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void a(); virtual void b(); };
struct S_801A2670 { u8 pad[0x8C]; virtual void p0(); virtual void p1(); virtual void m(); };
void fn_80120200(void *);

void fn_801A2670(V_801A2670 *p) {
    if (*(u32 *)((u8 *)p + 0x2F24) != 0) {
        p->a();
        ((S_801A2670 *)((u8 *)p + 0x2EA4))->m();
        p->b();
    }
    fn_80120200(p);
}

} /* extern "C" */
