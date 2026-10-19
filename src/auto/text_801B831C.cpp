// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_801C05EC(int, int, int);
void fn_801DBE0C(void);

u32 fn_801B831C(s32 param_1, u32 param_2) {
    u32 uVar1;
    s32 iVar3;
    u32 uVar2;

    fn_801DBE0C();
    if (*(u32 *)(param_1 + 0x1b8) != 0) {
        uVar2 = 0;
        iVar3 = 0;
        for (; uVar2 < *(u32 *)(param_1 + 0x188); uVar2 = uVar2 + 1) {
            uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(*(u32 *)(param_1 + 0x1b8) + iVar3)));
            *(u32 *)(*(u32 *)(param_1 + 0x1b8) + iVar3) = uVar1;
            iVar3 = iVar3 + 4;
        }
    }
    if (*(u32 *)(param_1 + 0x1c4) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x1c4)));
        *(u32 *)(param_1 + 0x1c4) = uVar1;
    }
    if ((*(u8 *)(param_1 + 400) & 3) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x1b0)));
        *(u32 *)(param_1 + 0x1b0) = uVar1;
    }
    if ((*(u8 *)(param_1 + 400) & 0xc) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x1b4)));
        *(u32 *)(param_1 + 0x1b4) = uVar1;
    }
    return 0;
}

} /* extern "C" */
