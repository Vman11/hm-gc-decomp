// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801358C8_0 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(); };
struct VCall_fn_801358C8_1 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void m(); };

void fn_801358C8(s32 param_1) {
    ((VCall_fn_801358C8_0 *)(param_1))->m();
    ((VCall_fn_801358C8_1 *)(param_1))->m();
    *(u32 *)(param_1 + 0x1928) = 0;
}
}
