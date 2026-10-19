// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80216C60 { u32 x; u8 pad[0x8]; virtual void p0(); virtual void m(void *, void *, void *); };
struct V_80216C60 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void a(void *); virtual void b(); u8 pad2[0x2D80]; S_80216C60 sub; };
void *memset(void *, s32, u32);
void fn_801A3964(void *);

void fn_80216C60(V_80216C60 *p) {
    u8 buf[20];
    memset(buf, 0, 20);
    if (p->sub.x != 0) {
        p->q();
    }
    fn_801A3964(p);
    p->a(buf);
    p->sub.m(buf, (u8 *)p + 0x2F38, p);
    p->b();
}

} /* extern "C" */
