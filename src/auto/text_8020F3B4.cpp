// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020F3B4 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(s32, s32); };

void fn_8020F3B4(u8 *obj, s32 a, s32 b) {
    V_8020F3B4 *p = *(V_8020F3B4 **)(*(u8 **)(*(u8 **)(obj + 0x14) + 0x1C) + 0x6E4);
    p->m(a, b);
}

} /* extern "C" */
