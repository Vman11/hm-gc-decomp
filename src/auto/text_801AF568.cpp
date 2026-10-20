// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801AF568 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(s32); };
extern "C" { void fn_801B1D54(void *, s32); void fn_801D791C(void *, void *, void *); }

s32 fn_801AF568(u8 *p, void *a, void *b) {
    if (!(*(u32 *)(p + 108) & 2)) {
        return 0;
    }
    switch (*(s32 *)(p + 324)) {
    case 2:
    case 256:
        *(s32 *)(p + 324) = 16;
        fn_801B1D54(p, 0);
        *(s32 *)(p + 372) = 0;
        if (*(V_801AF568 **)(p + 404) != 0) {
            (*(V_801AF568 **)(p + 404))->m(1);
        }
        break;
    }
    fn_801D791C(p, a, b);
    return 0;
}

} /* extern "C" */
