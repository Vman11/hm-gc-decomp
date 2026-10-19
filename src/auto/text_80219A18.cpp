// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);

void fn_80219A18(u32 *param_1) {
    s32 iVar2;
    u32 uVar1;

    if (param_1[1] != 0) {
        uVar1 = 0;
        iVar2 = 0;
        for (; uVar1 < (u32)param_1[3]; uVar1 = uVar1 + 1) {
            __dla__FPv((int)(*(u32 *)(param_1[1] + iVar2)));
            iVar2 = iVar2 + 0x14;
        }
        __dla__FPv((int)(param_1[1]));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
}

} /* extern "C" */
