// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801A2244 { u8 pad[0xF4]; virtual void p0(); virtual void m(void *, void *); };
struct V_801A2244 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void a(void *); virtual void b(); };
void *memset(void *, s32, u32);
void fn_801A2B00(void *);

void fn_801A2244(V_801A2244 *p) {
    u8 buf[104];
    memset(buf, 0, 104);
    if (*(u32 *)((u8 *)p + 0x33A4) != 0) {
        p->q();
    }
    fn_801A2B00(p);
    p->a(buf);
    ((S_801A2244 *)((u8 *)p + 0x32B4))->m(buf, (u8 *)p + 0x3038);
    p->b();
}

} /* extern "C" */
