// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void __dla__FPv(int);
void fn_800F8DD0(int);
void fn_801DDE84(int);
void fn_801DDEC0(void);
struct VCall_fn_801C10DC_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801C10DC(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    fn_801DDEC0();
    fn_800F8DD0((int)(param_1));
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        for (uVar2 = 0; uVar2 < *(u32 *)(param_1 + 0x20); uVar2 = uVar2 + 1) {
            iVar1 = (*(u32 **)(param_1 + 0x1c))[uVar2];
            if (iVar1 != 0) {
                ((VCall_fn_801C10DC_0 *)(iVar1))->m();
            }
            fn_801DDE84((int)((*(u32 **)(param_1 + 0x1c))[uVar2]));
            (*(u32 **)(param_1 + 0x1c))[uVar2] = 0;
        }
        __dla__FPv((int)(*(u32 *)(param_1 + 0x1c)));
    }
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
}
}
