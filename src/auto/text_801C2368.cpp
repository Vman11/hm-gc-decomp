// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801C2368 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void m(void *, s32); };
struct U_801C2368 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void m25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void m60(void *, s32); virtual void p61(); virtual void m62(); virtual void m63(s32); };
extern "C" u8 *fn_801C2544(void *, void *, u8 **);

static inline void set_801C2368(u8 *o, s32 s) {
    u8 *n;
    for (n = *(u8 **)(o + 136); n != 0; n = *(u8 **)(n + 8)) {
        (*(S_801C2368 **)n)->m(o, s);
    }
    *(u32 *)(o + 328) = *(u32 *)(o + 324);
    *(u32 *)(o + 324) = (*(u32 *)(o + 324) & 0xFFFF0000) | s;
}

static inline void sel_801C2368(u8 *p, u8 **slot, u8 *x) {
    if (*slot != x && *slot != 0) {
        ((U_801C2368 *)*slot)->m60(*(void **)(p + 80), 1);
    }
    *slot = x;
}

void fn_801C2368(u8 *p, u8 *x) {
    u8 *t = 0;
    u8 *o;
    if (*(u8 **)(p + 4) != 0 && x != *(u8 **)(p + 4)) {
        (*(U_801C2368 **)(p + 4))->m63(0);
    }
    *(u8 **)(p + 4) = x;
    o = fn_801C2544(p, *(u8 **)(p + 4), &t);
    if (o == 0) {
        o = t;
    }
    if (o == 0) {
        sel_801C2368(p, (u8 **)(p + 16), *(u8 **)(p + 4));
        sel_801C2368(p, (u8 **)(p + 12), *(u8 **)(p + 4));
    } else {
        set_801C2368(o, 16);
        sel_801C2368(p, (u8 **)(p + 16), *(u8 **)(p + 4));
        sel_801C2368(p, (u8 **)(p + 12), o);
    }
    if (*(u8 **)(p + 4) != 0) {
        (*(U_801C2368 **)(p + 4))->m25();
        (*(U_801C2368 **)(p + 4))->m62();
    }
}

} /* extern "C" */
