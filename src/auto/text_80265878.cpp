#include "common.h"

extern "C" {

extern char lbl_802AA244[];
extern char lbl_80366BB0[0x5];
u8 *fn_80261114(u8 *, char *, s32);
void fn_80261B18(u8 *, void *);

void fn_80265878(u8 *param_1, void *param_2) {
    u8 *uVar1;
    u8 *iVar2;

    uVar1 = fn_80261114(param_1, lbl_802AA244, 1); /* "AngSpeed" */
    *(u8 **)(param_1 + 0xb0) = uVar1;
    iVar2 = fn_80261114(param_1, lbl_80366BB0, 1);
    *(u8 **)(param_1 + 0xb4) = iVar2;
    *(u8 **)(param_1 + 0xb8) = iVar2 + 4;
    *(u8 **)(param_1 + 0xbc) = iVar2 + 8;
    fn_80261B18(param_1, param_2);
}

} /* extern "C" */
