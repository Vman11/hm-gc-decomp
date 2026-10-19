// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80268A8C { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void m(f32, s32); };
void fn_80268A8C(u8 *p, s32 flag, f32 f) {
    if (flag != 0) {
        **(f32 **)(p + 0x544) = f;
    }
    (*(V_80268A8C **)(p + 0x54C))->m(f, 0);
    (*(V_80268A8C **)(p + 0x558))->m(f, 0);
}

} /* extern "C" */
