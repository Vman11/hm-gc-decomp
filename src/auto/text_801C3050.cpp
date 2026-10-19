// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801C3050 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(void *, void *, s32, s32, f32); };
extern f32 lbl_80364FD8;

void fn_801C3050(u8 *p, void *a) {
    u8 buf[16];
    if (*(V_801C3050 **)(p + 4) != NULL) {
        (*(V_801C3050 **)(p + 4))->m(a, buf, 0, 0, lbl_80364FD8);
    }
    if (*(V_801C3050 **)(p + 0x14) != NULL) {
        (*(V_801C3050 **)(p + 0x14))->m(a, buf, 0, 0, lbl_80364FD8);
    }
}

} /* extern "C" */
