// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801BAD0C { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual s32 m(void *, void *); };
struct V2_801BAD0C { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void n(void *, void *); };
void fn_801D791C(void *, void *, void *);

s32 fn_801BAD0C(u8 *p, void *a, void *b) {
    u8 *q;
    BOOL r = FALSE;
    for (q = *(u8 **)(p + 0x88); q != NULL; q = *(u8 **)(q + 8)) {
        if (*(s32 *)(q + 4) != 0 && (*(V_801BAD0C **)q)->m(p, a) == 0) {
            r = TRUE;
        }
    }
    if (r) {
        return 0;
    }
    if (!(*(u32 *)(p + 0x6C) & 2)) {
        return 0;
    }
    if (*(void **)(p + 0x198) == NULL) {
        fn_801D791C(p, a, b);
    } else {
        (**(V2_801BAD0C ***)(p + 0x174))->n(a, b);
    }
    return 0;
}

} /* extern "C" */
