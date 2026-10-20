// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801D9D80 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual s32 m(void *, void *); };

s32 fn_801D9D80(u8 *p, void *a) {
    u8 *n;
    s32 r;
    u8 *n2;
    s32 r2;
    r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801D9D80 **)n)->m(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    r2 = 0;
    for (n2 = *(u8 **)(p + 136); n2 != NULL; n2 = *(u8 **)(n2 + 8)) {
        if (*(s32 *)(n2 + 4) == 0 && (*(V_801D9D80 **)n2)->m(p, a) == 0) {
            r2 = 1;
        }
    }
    return r2 != 0 ? 0 : 0;
}

} /* extern "C" */
