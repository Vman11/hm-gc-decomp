// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8019FB90 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(void *); };
extern volatile f32 lbl_80364D78;

void fn_8019FB90(u8 *p, u8 *q) {
    u32 i = 1;
    u8 *e;
    if (*(f32 *)(q + 0x6C) - *(f32 *)(p + 0x14) < lbl_80364D78) {
        (*(V_8019FB90 **)(p + 0x10))->m(q);
        e = q + 0x14;
        do {
            if (*(f32 *)(e + 0x64) - *(f32 *)(p + 0x14) >= lbl_80364D78) {
                (*(V_8019FB90 **)(p + 0xC))->m(q);
                return;
            }
            i++;
            e += 12;
        } while (i < *(u32 *)(q + 0xD8));
    } else {
        (*(V_8019FB90 **)(p + 0xC))->m(q);
        e = q + 0x14;
        do {
            if (*(f32 *)(e + 0x64) - *(f32 *)(p + 0x14) < lbl_80364D78) {
                (*(V_8019FB90 **)(p + 0x10))->m(q);
                return;
            }
            i++;
            e += 12;
        } while (i < *(u32 *)(q + 0xD8));
    }
}

} /* extern "C" */
