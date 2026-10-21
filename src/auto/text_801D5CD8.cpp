#include "common.h"

extern "C" {

void *fn_801C05EC(u8 *, void *, void *);
void fn_801DBE0C(void);

u32 fn_801D5CD8(u8 *param_1, void *param_2) {
    s32 iVar3;
    u32 uVar2;

    fn_801DBE0C();
    if (*(void **)(param_1 + 0x2dc) != 0) {
        *(void **)(param_1 + 0x2dc) = fn_801C05EC(param_1, param_2, *(void **)(param_1 + 0x2dc));
    }
    if (*(void **)(param_1 + 0x2e0) != 0) {
        *(void **)(param_1 + 0x2e0) = fn_801C05EC(param_1, param_2, *(void **)(param_1 + 0x2e0));
    }
    if (*(u8 **)(param_1 + 0x31c) != 0) {
        uVar2 = 0;
        iVar3 = 0;
        for (; uVar2 < *(u32 *)(param_1 + 0x360); uVar2 = uVar2 + 1) {
            if (*(void **)(*(u8 **)(param_1 + 0x31c) + iVar3 + 0x14) != 0) {
                *(void **)(*(u8 **)(param_1 + 0x31c) + iVar3 + 0x14) = fn_801C05EC(param_1, param_2, *(void **)(*(u8 **)(param_1 + 0x31c) + iVar3 + 0x14));
            }
            iVar3 = iVar3 + 0x18;
        }
    }
    return 0;
}

} /* extern "C" */
