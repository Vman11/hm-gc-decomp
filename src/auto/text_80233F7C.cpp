// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80233F7C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_80233F7C(s32 param_1) {
    s32 *piVar1;
    s32 iVar3;
    s32 iVar2;

    if (*(void **)(param_1 + 0x3e4) != NULL) {
        iVar3 = param_1;
        for (iVar2 = 0; iVar2 < **(s32 **)(param_1 + 0x3e4); iVar2 = iVar2 + 1) {
            piVar1 = *(s32 **)(iVar3 + 0x254);
            if ((piVar1 != (s32 *)0x0) && ((piVar1[0x2d] & 2U) != 0)) {
                ((VCall_fn_80233F7C_0 *)(piVar1))->m();
                *(s32 *)(param_1 + 0x41c) = *(s32 *)(param_1 + 0x41c) + -1;
                *(u32 *)(iVar3 + 0x254) = 0;
            }
            iVar3 = iVar3 + 4;
        }
    }
}
}
