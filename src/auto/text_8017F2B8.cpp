// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8017F2B8 { u8 pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m6(s32); virtual void m7(s32); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void m37(s32); };
extern "C" void fn_801886C4(void *, void *, void *);

void fn_8017F2B8(u8 *p) {
    if (*(void **)(p + 600) != 0) {
        u8 *n;
        (*(V_8017F2B8 **)(p + 8))->m37(63);
        (*(V_8017F2B8 **)(p + 8))->m7(1);
        for (n = *(u8 **)(p + 600); n != 0; n = *(u8 **)(n + 224)) {
            fn_801886C4(*(void **)(n + 220), p, n);
        }
        (*(V_8017F2B8 **)(p + 8))->m6(1);
        *(void **)(p + 600) = 0;
    }
}

} /* extern "C" */
