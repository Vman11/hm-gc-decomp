#include "common.h"

extern "C" {

extern char lbl_802A9BC8[];
extern char lbl_803668F0[0x6];
extern char lbl_803668F8[0x4];
void fn_80257438(u8 *, void *);
u32 fn_80261114(u8 *, char *, s32);

void fn_8025C0FC(u8 *param_1, void *param_2) {
    u32 uVar1;

    uVar1 = fn_80261114(param_1, lbl_803668F0, 1); /* "Speed" */
    *(u32 *)(param_1 + 0xc0) = uVar1;
    uVar1 = fn_80261114(param_1, lbl_802A9BC8, 1); /* "AngSpeed" */
    *(u32 *)(param_1 + 0xc4) = uVar1;
    uVar1 = fn_80261114(param_1, lbl_803668F8, 1);
    *(u32 *)(param_1 + 200) = uVar1;
    fn_80257438(param_1, param_2);
}

} /* extern "C" */
