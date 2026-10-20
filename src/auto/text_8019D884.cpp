// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8019D884 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(void *, void *, void *); };

void fn_8019D884(u8 *p, void *a, void *b, void *c) {
    if (*(u32 *)(p + 160) < *(u32 *)(p + 152)) {
        u8 *o = (*(u8 ***)(p + 156))[*(u32 *)(p + 160)];
        if (*(u32 *)o & 0x200) {
            *(f32 *)(o + 24) = *(f32 *)(p + 24);
            *(f32 *)(o + 28) = *(f32 *)(p + 28);
            *(f32 *)(o + 32) = *(f32 *)(p + 32);
            *(f32 *)(o + 36) = *(f32 *)(p + 36);
            *(u32 *)(*(u8 ***)(p + 156))[*(u32 *)(p + 160)] &= ~4;
            (*(V_8019D884 ***)(p + 156))[*(u32 *)(p + 160)]->m(a, b, c);
        }
    }
}

} /* extern "C" */
