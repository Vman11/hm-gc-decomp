#include "common.h"

extern "C" {

extern u8 fn_802055FC[];
void fn_800BD810(void *, u32, u32, s32, void *, s32);
s32 fn_800BFAA8(void *);

void fn_80205330(u8 *param_1) {
    s32 iVar1;
    u32 uVar3;
    u32 uVar2;

    if ((*(u16 *)(param_1 + 0x128) & 2) != 0) {
        *(u8 **)(param_1 + 0x9c) = param_1;
        *(u8 **)(param_1 + 0xd8) = param_1;
        *(u8 **)(param_1 + 0x114) = param_1;
        *(u16 *)(param_1 + 0x128) = *(u16 *)(param_1 + 0x128) | 0x20;
        *(u32 *)(param_1 + 0x18) = *(u32 *)(param_1 + 0x24);
        *(u32 *)(param_1 + 0x38) = *(u32 *)(param_1 + 0x14) >> 1;
        uVar2 = *(u32 *)(param_1 + 0x38);
        uVar3 = *(u32 *)(param_1 + 0xc);
        iVar1 = fn_800BFAA8(param_1 + 0x70);
        if (iVar1 == 0) {
            fn_800BD810(param_1 + 0x70, uVar3, uVar2, 0, fn_802055FC, 2);
        }
        else {
            iVar1 = fn_800BFAA8(param_1 + 0xac);
            if (iVar1 == 0) {
                fn_800BD810(param_1 + 0xac, uVar3, uVar2, 0, fn_802055FC, 2);
            }
            else {
                iVar1 = fn_800BFAA8(param_1 + 0xe8);
                if (iVar1 == 0) {
                    fn_800BD810(param_1 + 0xe8, uVar3, uVar2, 0, fn_802055FC, 2);
                }
            }
        }
        *(u16 *)(param_1 + 0x128) = *(u16 *)(param_1 + 0x128) & 0xfffe;
        *(u32 *)(param_1 + 0x30) = *(u32 *)(param_1 + 0x14);
    }
}

} /* extern "C" */
