#include "common.h"

extern "C" {

extern char lbl_802A9FF4[];
extern char lbl_802AA000[];
extern char lbl_80366AC0[0x8];
extern char lbl_80366AC8[0x4];
void fn_80257438(u8 *, void *);
u32 fn_80261114(u8 *, char *, s32);

void fn_80262338(u8 *param_1, void *param_2) {
    u32 uVar1;

    uVar1 = fn_80261114(param_1, lbl_802A9FF4, 1); /* "Distance" */
    *(u32 *)(param_1 + 0xc0) = uVar1;
    uVar1 = fn_80261114(param_1, lbl_802AA000, 1); /* "AngSpeed" */
    *(u32 *)(param_1 + 0xc4) = uVar1;
    uVar1 = fn_80261114(param_1, lbl_80366AC0, 1); /* "ZoomSpd" */
    *(u32 *)(param_1 + 200) = uVar1;
    uVar1 = fn_80261114(param_1, lbl_80366AC8, 1);
    *(u32 *)(param_1 + 0xcc) = uVar1;
    fn_80257438(param_1, param_2);
}

} /* extern "C" */
