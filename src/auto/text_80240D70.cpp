// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_802487D8(int, int, int);

void fn_80240D70(s32 param_1, s32 param_2) {
    u32 uVar1;

    if (*(u32 *)(param_1 + 0x108) != 0) {
        uVar1 = 0;
        if (param_2 != -1) {
            uVar1 = *(u32 *)(*(u32 *)(param_1 + 0xd4) + param_2 * 4);
        }
        fn_802487D8((int)(*(u32 *)(param_1 + 0x108)), (int)(0), (int)(uVar1));
    }
}

} /* extern "C" */
