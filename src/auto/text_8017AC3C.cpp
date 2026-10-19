// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8017AC3C_0 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(int); };

u32 fn_8017AC3C(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 uVar2;

    *(u32 *)(param_1 + 0x18) = param_2;
    iVar1 = *(u32 *)(param_2 + 0xc);
    if (iVar1 != 0) {
        uVar2 = ((VCall_fn_8017AC3C_0 *)(iVar1))->m((u32)(param_1));
    }
    else {
        *(u32 *)(param_2 + 0xc) = param_1;
        uVar2 = 1;
    }
    return uVar2;
}
}
