// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8025C3A8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(void *, void *, void *, void *, s32); };
void fn_8025C3A8(u8 *p) {
    s32 i;
    (*(V_8025C3A8 **)(*(u8 **)(p + 0x9C) + 0x18C))->m(p + 0x194, p + 0x5C, p + 0x68, p + 0x74, 0);
    *(f32 *)(p + 0xF4) = *(f32 *)(p + 0x5C);
    *(f32 *)(p + 0xF8) = *(f32 *)(p + 0x60);
    *(f32 *)(p + 0xFC) = *(f32 *)(p + 0x64);
    *(f32 *)(p + 0x100) = *(f32 *)(p + 0x68);
    *(f32 *)(p + 0x104) = *(f32 *)(p + 0x6C);
    *(f32 *)(p + 0x108) = *(f32 *)(p + 0x70);
    *(f32 *)(p + 0x10C) = *(f32 *)(p + 0x74);
    *(f32 *)(p + 0x110) = *(f32 *)(p + 0x78);
    *(f32 *)(p + 0x114) = *(f32 *)(p + 0x7C);
}

} /* extern "C" */
