// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N_801B62B8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual s32 m(void *, void *); };
struct V_801B62B8 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void m(void *, s32); };
struct W_X { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32, void *); };
extern "C" void fn_801D921C(void *, void *, s32);

s32 fn_801B62B8(u8 *p, void *a, s32 b) {
    switch (*(s32 *)(p + 324)) {
    case 32:
    case 128: {
        u8 *n;
        s32 found = 0;
        for (n = *(u8 **)(p + 136); n != 0; n = *(u8 **)(n + 8)) {
            if (*(s32 *)(n + 4) != 0 && (*(N_801B62B8 **)n)->m(p, a) == 0) {
                found = 1;
            }
        }
        if (found != 0) {
            return 0;
        }
        ((V_801B62B8 *)p)->m(a, b);
        break;
    }
    default:
        fn_801D921C(p, a, b);
        break;
    }
    if (b != 0 && *(W_X **)(p + 112) != 0) {
        (*(W_X **)(p + 112))->m(4, *(void **)(p + 104));
    }
    return 0;
}

} /* extern "C" */
