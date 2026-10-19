// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8026B3F0 { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void m(s32, f32); };
void fn_8026B3F0(u8 *p, f32 v) {
    V_8026B3F0 *q = *(V_8026B3F0 **)(p + 0x28);
    if (q != NULL) {
        q->m(0, v * **(f32 **)(p + 0x20));
    }
}

} /* extern "C" */
