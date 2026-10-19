// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801C0C80_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

void fn_801C0C80(u32 param_1) {
    u32 iVar1;
    u32 iVar3;
    u32 uVar2;

    iVar3 = 0;
    for (uVar2 = 0; uVar2 < *(u32 *)(param_1 + 0x20); uVar2 = uVar2 + 1) {
        iVar1 = *(u32 *)(*(u32 *)(param_1 + 0x1c) + iVar3);
        if (iVar1 != 0) {
            ((VCall_fn_801C0C80_0 *)(iVar1))->m();
        }
        iVar3 = iVar3 + 4;
    }
}
}
