// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N_801B0324 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual s32 m(void *, void *); };
extern "C" void fn_801B1D54(void *, s32);

s32 fn_801B0324(u8 *p, void *a) {
    u8 *n;
    s32 found = 0;
    for (n = *(u8 **)(p + 136); n != 0; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(N_801B0324 **)n)->m(p, a) == 0) {
            found = 1;
        }
    }
    if (found != 0) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 32:
        if ((u32)a & 3) {
            fn_801B1D54(p, *(s32 *)(*(u8 **)(p + 396) + 8) - *(s32 *)(*(u8 **)(p + 396) + 4));
        } else {
            fn_801B1D54(p, *(s32 *)(*(u8 **)(p + 396) + 8) - *(s32 *)(*(u8 **)(p + 396) + 4));
            *(s32 *)(p + 372) = *(s32 *)(p + 368);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
