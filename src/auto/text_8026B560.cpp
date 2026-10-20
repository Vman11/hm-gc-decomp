// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8026B560 { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(); };

void fn_8026B560(u8 *p) {
    u8 *q = p;
    u32 i;
    for (i = 0; i < *(u32 *)(p + 68); i++) {
        (*(V_8026B560 **)(q + 72))->m();
        q += 8;
    }
}

} /* extern "C" */
