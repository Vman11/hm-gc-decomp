// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80116A70(int, int);
s32 fn_80116B10(int, int, int);

u32 fn_80114DB0(u32 param_1, u32 param_2, s32 param_3) {
    s32 iVar1;
    u32 local_4;
    u32 local_8;

    local_8 = 0;
    iVar1 = fn_80116B10((int)(param_2), (int)(*(u32 *)(param_3 + 4)), (int)(&local_4));
    if (iVar1 == 0) {
        fn_80116A70((int)(local_4), (int)(&local_8));
    }
    return local_8;
}

} /* extern "C" */
