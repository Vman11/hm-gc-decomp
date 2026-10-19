// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B190;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
s32 __nwa__FUl(int);
s32 fn_802077F8(int);

u32 fn_80205198(s32 param_1, u32 *param_2) {
    u32 uVar1;

    *(u32 *)(param_1 + 0x14) = param_2[2];
    *(u32 *)(param_1 + 0x24) = param_2[3];
    if (*(u32 *)(lbl_8035B190 + 0x18) >= 5) {
        *(u32 *)(lbl_8035B190 + 0x1c) = *(u32 *)(lbl_8035B190 + 0x18);
    }
    else {
        *(u32 *)(lbl_8035B190 + 0x1c) = 5;
    }
    if ((u32)lbl_8035B190 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B190));
    uVar1 = __nwa__FUl((int)(*(s32 *)(param_1 + 0x14) + 0x40));
    *(u32 *)(param_1 + 0xc) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0xc) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    *(u32 *)(lbl_8035B190 + 0x1c) = *(u32 *)(lbl_8035B190 + 0x18);
    if (*(u32 *)(param_1 + 0xc) == 0) {
        uVar1 = 0xfffffffe;
    }
    else {
        uVar1 = fn_802077F8((int)(*(s32 *)(param_1 + 0x24) + 0x3fU & 0xffffffe0));
        *(u32 *)(param_1 + 0x1c) = uVar1;
        if (*(void **)(param_1 + 0x1c) == NULL) {
            uVar1 = 0xffffffff;
        }
        else {
            uVar1 = 0;
            *(u32 *)(param_1 + 0x10) = *(s32 *)(param_1 + 0xc) + ((u32)param_2[2] >> 1) + 0x20;
            *(s32 *)(param_1 + 0x20) = *(s32 *)(param_1 + 0x1c) + *(s32 *)(param_1 + 0x24) / 2;
            *(s32 *)(param_1 + 0x3c) = *(s32 *)(param_1 + 0x24) / 2;
            *param_2 = *(u32 *)(param_1 + 0xc);
            param_2[1] = *(u32 *)(param_1 + 0x1c);
            *(u16 *)(param_1 + 0x128) = *(u16 *)(param_1 + 0x128) | 2;
        }
    }
    return uVar1;
}

} /* extern "C" */
