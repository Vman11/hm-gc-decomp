// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800D14DC(int);
s32 fn_8020B114(void);

u32 fn_8020B40C(u32 *param_1, u32 *param_2) {
    u32 uVar1;
    s32 iVar2;

    *param_2 = 0;
    if ((param_1[2] & 2) == 0) {
        uVar1 = 0;
    }
    else {
        do {
            iVar2 = fn_800D14DC((int)(*param_1));
        } while (iVar2 == -1);
        if ((iVar2 == 0) || (iVar2 == -3)) {
            uVar1 = 0;
            param_1[2] = param_1[2] & 0xfffffffd;
            param_1[2] = param_1[2] & 0xfffffffb;
        }
        else {
            uVar1 = fn_8020B114();
        }
    }
    return uVar1;
}

} /* extern "C" */
