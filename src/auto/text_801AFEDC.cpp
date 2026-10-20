// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N_801AFEDC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual s32 m(void *, void *); };
struct V_801AFEDC { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void m(void *); };
struct W_X { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32, void *); };
extern "C" void fn_801B1D54(void *, s32);

s32 fn_801AFEDC(u8 *p, void *a, s32 b) {
    u8 *n;
    s32 found = 0;
    for (n = *(u8 **)(p + 136); n != 0; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(N_801AFEDC **)n)->m(p, a) == 0) {
            found = 1;
        }
    }
    if (found != 0) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 16:
        *(s32 *)(p + 324) = 32;
        if (*(V_801AFEDC **)(p + 284) != 0) {
            (*(V_801AFEDC **)(p + 284))->m(p);
        }
        fn_801B1D54(p, *(s32 *)(*(u8 **)(p + 396) + 8) - *(s32 *)(*(u8 **)(p + 396) + 4));
        *(s32 *)(p + 372) = 0;
        break;
    }
    if (b != 0 && *(W_X **)(p + 112) != 0) {
        (*(W_X **)(p + 112))->m(16, *(void **)(p + 104));
    }
    return 0;
}

} /* extern "C" */
