// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8010350C_0 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(int); };

void fn_8010350C(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;
    u32 iVar3;

    if (*(u32 *)(param_1 + 8) != 0) {
        for (iVar3 = 0; iVar3 < *(u32 *)(param_1 + 0xc); iVar3 = iVar3 + 1) {
            if (param_2 == ((u32 *)*(u32 *)(param_1 + 0x10))[iVar3]) {
                *(u32 *)(*(u32 *)(param_1 + 0x10) + iVar3 * 4) = 0;
                *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) + -1;
                break;
            }
        }
        if ((*(u32 *)(param_1 + 8) == 0) && (*(u32 *)(param_1 + 0x14) != 0)) {
            ((VCall_fn_8010350C_0 *)(param_1))->m((u32)(*(u32 *)(param_1 + 0x14)));
        }
    }
}
}
