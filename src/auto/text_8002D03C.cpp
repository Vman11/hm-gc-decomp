// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

struct V_8002D03C { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(s32); };
extern f32 lbl_8035BA20;


void fn_8002D03C(u8 *p) {
    *(f32 *)(p + 0x268) = lbl_8035BA20;
    if (*(V_8002D03C **)(p + 0x1BC) != NULL) {
        (*(V_8002D03C **)(p + 0x1BC))->m(1);
    }
}

} /* extern "C" */

} /* extern "C" */
