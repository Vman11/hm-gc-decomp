// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801BB544 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void m(void *, s32); };
extern "C" void fn_801D791C(void *);

s32 fn_801BB544(u8 *p) {
    fn_801D791C(p);
    if (!(*(u32 *)(p + 108) & 2)) {
        return 0;
    }
    switch ((u16)*(u32 *)(p + 324)) {
    case 2: {
        u8 *n;
        for (n = *(u8 **)(p + 136); n != 0; n = *(u8 **)(n + 8)) {
            (*(V_801BB544 **)n)->m(p, 16);
        }
        *(u32 *)(p + 328) = *(u32 *)(p + 324);
        *(u32 *)(p + 324) = (*(u32 *)(p + 324) & ~0xFFFF) | 16;
        break;
    }
    }
    return 0;
}

} /* extern "C" */
