// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801C6254_0 { char vptr_pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void m(int, int, int); };

void fn_801C6254(u32 param_1) {
    u32 iVar1;

    if ((*(u32 *)(param_1 + 0x18) != 0) && (iVar1 = *(u32 *)(param_1 + 0x14), iVar1 != 0)) {
        ((VCall_fn_801C6254_0 *)(iVar1))->m((u32)(*(u32 *)(param_1 + 0x18)), (u32)(0), (u32)(0));
    }
}
}
