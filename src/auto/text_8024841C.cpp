// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8026AF6C(int, int, int, int);

void fn_8024841C(s32 param_1, u32 param_2) {
    s32 iVar2;
    s32 iVar1;

    iVar2 = 0;
    for (iVar1 = 0; iVar1 < *(s32 *)(param_1 + 0x24); iVar1 = iVar1 + 1) {
        fn_8026AF6C((int)(*(u32 *)(param_1 + 0x14)), (int)(param_1), (int)(*(s32 *)(param_1 + 0x28) + iVar2), (int)(param_2));
        iVar2 = iVar2 + 4;
    }
}

} /* extern "C" */
