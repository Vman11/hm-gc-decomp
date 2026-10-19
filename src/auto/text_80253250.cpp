// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_80253250 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual u8 **m(s32); };
struct V2_80253250 { u8 pad[0xD0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void n(s32); };
void fn_80253250(s32 *p) {
    s32 n;
    s32 i;
    p[1] = 0;
    if (p[0] != -1) {
        n = *(s32 *)((*(V1_80253250 **)(*(u8 **)((u8 *)p + 0x2C) + 0x18))->m(p[0])[0] + 0xC);
        for (i = 0; i < n; i++) {
            (*(V2_80253250 **)(*(V1_80253250 **)(*(u8 **)((u8 *)p + 0x2C) + 0x18))->m(p[0]))->n(i);
        }
    }
}

} /* extern "C" */
