// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801C755C { virtual s32 m0(s32); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual s32 m(void *, void *); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void m52(void *, void *); };
struct W_801C755C { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(s32); };

s32 fn_801C755C(u8 *p, u8 *a) {
    u8 *n;
    s32 r;
    u8 *n2;
    r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801C755C **)n)->m(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    if (a == *(u8 **)(p + 364)) {
        (*(W_801C755C **)(p + 364))->m(0);
        *(u32 *)(*(u8 **)(p + 364) + 108) &= ~2;
        for (n2 = *(u8 **)(p + 136); n2 != NULL; n2 = *(u8 **)(n2 + 8)) {
            if ((*(V_801C755C **)n2)->m0(16) != 0 && *(s32 *)(n2 + 4) != 0) {
                (*(V_801C755C **)n2)->m52(p, *(void **)(p + 364));
            }
        }
    }
    return 0;
}

} /* extern "C" */
