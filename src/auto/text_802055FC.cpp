#include "common.h"

extern "C" {

extern u8 fn_802056DC[];
void fn_800BD810(void *, u32, u32, u32, void *, s32);
s32 fn_800BFAA8(void *);

void fn_802055FC(u32 param_1, u8 *param_2) {
    s32 iVar1;
    u32 uVar4;
    u32 uVar3;
    u8 *iVar2;

    iVar2 = *(u8 **)(param_2 + 0x2c);
    if (iVar2 != 0) {
        uVar3 = *(u32 *)(iVar2 + 0x38);
        uVar4 = *(u32 *)(iVar2 + 0x10);
        iVar1 = fn_800BFAA8(iVar2 + 0x70);
        if (iVar1 == 0) {
            fn_800BD810(iVar2 + 0x70, uVar4, uVar3, uVar3, fn_802056DC, 2);
        }
        else {
            iVar1 = fn_800BFAA8(iVar2 + 0xac);
            if (iVar1 == 0) {
                fn_800BD810(iVar2 + 0xac, uVar4, uVar3, uVar3, fn_802056DC, 2);
            }
            else {
                iVar1 = fn_800BFAA8(iVar2 + 0xe8);
                if (iVar1 == 0) {
                    fn_800BD810(iVar2 + 0xe8, uVar4, uVar3, uVar3, fn_802056DC, 2);
                }
            }
        }
    }
}

} /* extern "C" */
