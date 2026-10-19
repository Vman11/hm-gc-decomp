// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800F8274(int);
u32 fn_80239E04(void);

u32 fn_8023CA4C(u32 param_1) {
    u32 iVar1;
    u32 uVar2;

    iVar1 = fn_800F8274((int)(param_1 + 0x2c));
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = fn_80239E04();
    }
    return uVar2;
}

} /* extern "C" */
