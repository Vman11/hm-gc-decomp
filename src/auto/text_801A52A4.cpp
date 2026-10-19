// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801A52A4_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

u32 fn_801A52A4(s32 *param_1, u32 param_2) {
    if (param_1[1] != 0) {
        ((VCall_fn_801A52A4_0 *)(param_1))->m();
    }
    *param_1 = param_2;
    param_1[1] = 1;
    return 0;
}
}
