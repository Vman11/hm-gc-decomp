// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802610A0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(void *, void *, void *, void *, s32); };
void fn_802610A0(u8 *p) {
    u8 *q;
    (*(V_802610A0 **)(p + 0x9C))->m(p + 0x14, p + 0x20, p + 0x2C, p + 0x38, 0);
    q = *(u8 **)(p + 0x9C);
    *(f32 *)(p + 0x44) = *(f32 *)(q + 0x118);
    *(f32 *)(p + 0x48) = *(f32 *)(q + 0x11C);
    *(f32 *)(p + 0x4C) = *(f32 *)(q + 0x120);
    *(f32 *)(p + 0x90) = *(f32 *)(q + 0x154);
}

} /* extern "C" */
