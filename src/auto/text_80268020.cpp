// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80268020 { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void n(s32); virtual void m(f32, s32); };
extern f32 lbl_80366D48;

void fn_80268020(u8 *p) {
    if (*(V_80268020 **)(p + 0x54C) != NULL) {
        (*(V_80268020 **)(p + 0x54C))->m(lbl_80366D48, 0);
        (*(V_80268020 **)(p + 0x54C))->n(0);
    }
    if (*(V_80268020 **)(p + 0x558) != NULL) {
        (*(V_80268020 **)(p + 0x558))->m(lbl_80366D48, 0);
        (*(V_80268020 **)(p + 0x558))->n(0);
    }
    *(s32 *)(p + 0x564) = 15;
    *(s32 *)(p + 0x540) = 1;
    *(f32 *)(p + 0x5B8) = lbl_80366D48;
}

} /* extern "C" */
