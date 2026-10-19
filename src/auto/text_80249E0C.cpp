// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B488;
void __dla__FPv(int);
void fn_8023E914(int, int);

void fn_80249E0C(s32 param_1) {
    s32 iVar2;
    s32 iVar1;

    if (*(u32 *)(param_1 + 0x70) != 0) {
        iVar1 = 0;
        iVar2 = 0;
        for (; iVar1 < *(s32 *)(param_1 + 0x5c); iVar1 = iVar1 + 1) {
            if (*(u32 *)(*(u32 *)(param_1 + 0x70) + iVar2) != 0) {
                fn_8023E914((int)(lbl_8035B488), (int)(*(u32 *)(*(u32 *)(param_1 + 0x70) + iVar2)));
            }
            iVar2 = iVar2 + 4;
        }
        __dla__FPv((int)(*(u32 *)(param_1 + 0x70)));
    }
    if (*(u32 *)(param_1 + 0x74) != 0) {
        {
            __dla__FPv((int)(*(u32 *)(param_1 + 0x74)));
        }
    }
    *(u32 *)(param_1 + 0x60) = 0xffffffff;
    *(u32 *)(param_1 + 100) = 0;
    *(u32 *)(param_1 + 0x70) = 0;
    *(u32 *)(param_1 + 0x74) = 0;
    *(u32 *)(param_1 + 0x78) = 0;
    *(u32 *)(param_1 + 0x5c) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
}

} /* extern "C" */
