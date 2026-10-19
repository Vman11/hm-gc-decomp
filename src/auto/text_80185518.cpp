// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void __dla__FPv(int);
void fn_801A15D8(int);
struct VCall_fn_80185518_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void m(); };

void fn_80185518(u32 param_1) {
    u32 iVar2;
    u32 uVar1;

    if (*(u32 *)(param_1 + 0x9c) != 0) {
        uVar1 = 0;
        iVar2 = 0;
        for (; uVar1 < *(u32 *)(param_1 + 0x98); uVar1 = uVar1 + 1) {
            ((VCall_fn_80185518_0 *)(*(u32 *)(*(u32 *)(param_1 + 0x9c) + iVar2)))->m();
            iVar2 = iVar2 + 4;
        }
        __dla__FPv((int)(*(u32 *)(param_1 + 0x9c)));
    }
    fn_801A15D8((int)(param_1));
    *(u32 *)(param_1 + 0x90) = 0;
    *(u32 *)(param_1 + 0x94) = 0;
    *(u32 *)(param_1 + 0x98) = 0;
    *(u32 *)(param_1 + 0x9c) = 0;
}
}
