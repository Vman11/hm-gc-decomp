// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80103464_0 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(int); };

void fn_80103464(u32 param_1, u32 param_2) {
    u32 iVar1;

    *(u32 *)(param_1 + 0x14) = 0;
    iVar1 = *(u32 *)(param_2 + 0xc);
    if (iVar1 == param_1) {
        *(u32 *)(param_2 + 0xc) = 0;
    }
    else if (iVar1 != 0) {
        ((VCall_fn_80103464_0 *)(iVar1))->m((u32)(param_1));
    }
}
}
