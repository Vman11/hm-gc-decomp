// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801D0CA4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual s32 m(void *, void *); };

s32 fn_801D0CA4(u8 *p, void *a) {
    u8 *n;
    s32 r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801D0CA4 **)n)->m(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 256:
        *(s32 *)(p + 324) = 2;
        break;
    case 512:
        *(s32 *)(p + 324) = 8;
        break;
    }
    return 0;
}

} /* extern "C" */
