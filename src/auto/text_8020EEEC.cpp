// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_8020EEEC(u32 *param_1) {
    u32 iVar2;
    u32 uVar1;
    u32 uVar3;
    u32 iVar4;

    if (*param_1 != 0) {
        uVar1 = 0;
        iVar2 = 0;
        for (; uVar1 < (u32)param_1[2]; uVar1 = uVar1 + 1) {
            if (*(u32 *)(*param_1 + iVar2) != 0) {
                __dla__FPv((int)(*(u32 *)(*param_1 + iVar2)));
            }
            iVar2 = iVar2 + 0x1c;
        }
        if (*param_1 != 0) {
            __dla__FPv((int)(*param_1 + -0x10));
        }
    }
    if (param_1[1] != 0) {
        uVar3 = 0;
        iVar4 = 0;
        for (; uVar3 < (u32)param_1[3]; uVar3 = uVar3 + 1) {
            if (*(u32 *)(param_1[1] + iVar4) != 0) {
                __dla__FPv((int)(*(u32 *)(param_1[1] + iVar4)));
            }
            iVar4 = iVar4 + 0x1c;
        }
        if (param_1[1] != 0) {
            __dla__FPv((int)(param_1[1] + -0x10));
        }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
}

} /* extern "C" */
