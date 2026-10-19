// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern char lbl_802AA244[];
extern char lbl_80366BB0[0x5];
s32 fn_80261114();
void fn_80261B18();

void fn_80265878(s32 param_1, u32 param_2) {
    u32 uVar1;
    s32 iVar2;

    uVar1 = fn_80261114(param_1,(void *)lbl_802AA244,1); /* "AngSpeed" */
    *(u32 *)(param_1 + 0xb0) = uVar1;
    iVar2 = fn_80261114(param_1,(void *)lbl_80366BB0,1);
    *(s32 *)(param_1 + 0xb4) = iVar2;
    *(s32 *)(param_1 + 0xb8) = iVar2 + 4;
    *(s32 *)(param_1 + 0xbc) = iVar2 + 8;
    fn_80261B18(param_1,param_2);
}
