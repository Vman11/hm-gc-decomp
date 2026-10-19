// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801191B4_0 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_801191B4_1 { char vptr_pad[0x298]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_801191B4_2 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

void fn_801191B4(s32 param_1) {
    ((VCall_fn_801191B4_0 *)(param_1))->m();
    ((VCall_fn_801191B4_1 *)(param_1))->m();
    ((VCall_fn_801191B4_2 *)(param_1))->m();
}
}
