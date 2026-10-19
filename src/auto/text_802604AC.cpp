// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8025EF10(int);

void fn_802604AC(s32 param_1) {
    s32 iVar2;
    s32 iVar1;

    iVar2 = 0;
    for (iVar1 = 0; iVar1 < *(s32 *)(param_1 + 0x18); iVar1 = iVar1 + 1) {
        fn_8025EF10((int)(*(s32 *)(param_1 + 0x1c) + iVar2));
        iVar2 = iVar2 + 0xa4;
    }
}

} /* extern "C" */
