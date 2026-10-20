// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N_801AED18 { virtual void p0(); virtual void p1(); virtual s32 m(void *, void *, f32, f32); };
struct V_801AED18 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void m(); };

s32 fn_801AED18(u8 *p, void *a, f32 x, f32 y) {
    u8 *n;
    s32 found = 0;
    for (n = *(u8 **)(p + 136); n != 0; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(N_801AED18 **)n)->m(p, a, x, y) == 0) {
            found = 1;
        }
    }
    if (found != 0) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 64:
        *(f32 *)(p + 88) = *(f32 *)(p + 332);
        *(f32 *)(p + 92) = *(f32 *)(p + 336);
        *(f32 *)(p + 96) = *(f32 *)(p + 340);
        *(f32 *)(p + 100) = *(f32 *)(p + 344);
        *(f32 *)(p + 88) += x;
        *(f32 *)(p + 96) += x;
        *(f32 *)(p + 92) += y;
        *(f32 *)(p + 100) += y;
        ((V_801AED18 *)p)->m();
        break;
    }
    return 0;
}

} /* extern "C" */
