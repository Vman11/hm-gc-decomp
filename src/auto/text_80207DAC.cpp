// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800EB6F4(int, int);
void fn_800EB764(int, int);
s32 strlen(int);

u32 fn_80207DAC(s8 *param_1, u32 param_2, u32 param_3) {
    u32 sVar1;
    u32 sVar2;
    u32 uVar3;

    sVar1 = strlen((int)(param_1));
    if (*(s32 *)(param_1 + 0x698) != -1) {
        sVar2 = strlen((int)(param_1 + *(s32 *)(param_1 + 0x698) * 0x80 + 0x298));
        sVar1 = sVar1 + sVar2;
    }
    if (sVar1 >= param_3) {
        uVar3 = 0;
    }
    else {
        fn_800EB764((int)(param_2), (int)(param_1));
        if (*(s32 *)(param_1 + 0x698) != -1) {
            fn_800EB6F4((int)(param_2), (int)(param_1 + *(s32 *)(param_1 + 0x698) * 0x80 + 0x298));
        }
        uVar3 = 1;
    }
    return uVar3;
}

} /* extern "C" */
