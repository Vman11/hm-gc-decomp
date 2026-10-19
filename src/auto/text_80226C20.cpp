// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8023ABF4(int, int, int, int, int, int, int, int);

void fn_80226C20(s32 param_1) {
    u32 uVar1;

    if (*(void **)(param_1 + 0xac) != NULL) {
        uVar1 = 0;
        do {
            fn_8023ABF4((int)(param_1), (int)(*(u32 *)(param_1 + 0x90)), (int)(*(s32 *)(param_1 + 0xb0) + ((uVar1 * *(s32 *)(param_1 + 0xac)) / 6) * 0xc), (int)(*(s32 *)(param_1 + 0xac) / 6), (int)(*(s32 *)(param_1 + 0xe0) + ((uVar1 * *(s32 *)(param_1 + 0xdc)) / 3 & 0x7ffffffe)), (int)(*(s32 *)(param_1 + 0xdc) / 6), (int)(*(u32 *)(param_1 + 0xbc)), (int)(*(u32 *)(param_1 + 0xb4)));
            uVar1 = uVar1 + 1;
        } while (uVar1 < 6);
    }
}

} /* extern "C" */
