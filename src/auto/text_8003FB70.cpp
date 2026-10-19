// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8003FB70 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(f32 *, s32, s32, s32, s32); };
void fn_802494A4(void *, s32);

void fn_8003FB70(u8 *p) {
    f32 v[3];
    (*(V_8003FB70 **)(p + 0xE0))->m(v, 0, 0, 0, 0);
    if ((f32)__fabs(v[2] - *(f32 *)(p + 0x164)) > **(f32 **)(p + 0x148)) {
        fn_802494A4(p, 0);
    }
}

} /* extern "C" */
