// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct W { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void wf(f32); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void sep(); };
struct H { u8 pad[0x10]; u32 n; };
struct P { H *hdr; u32 pad4[2]; f32 *v; };
extern "C" { void fn_8010C348(P *, W *); }

extern "C" void fn_80113B68(P *p, W *w) {
    u32 n;
    u32 o;
    u32 i;
    i = 0;
    o = 0;
    n = p->hdr->n;
    for (; i < n; o += 4, i++) {
        w->wf(*(f32 *)((u8 *)p->v + o));
        w->sep();
    }
    fn_8010C348(p, w);
}

} /* extern "C" */
