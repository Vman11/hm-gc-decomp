// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801FF280_0 { char vptr_pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void m(int); };
struct VCall_fn_801FF280_1 { char vptr_pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void m(int, int, int); };

void fn_801FF280(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    ((VCall_fn_801FF280_0 *)(param_1))->m((s32)(0));
    ((VCall_fn_801FF280_1 *)(param_1))->m((s32)(param_2), (s32)(param_3), (s32)(param_4));
}
}
