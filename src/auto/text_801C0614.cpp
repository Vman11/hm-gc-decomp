// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800F80DC(int, int, int);
void fn_800F85DC(int, int, int);
void fn_800F87F0(int, int, int);

void fn_801C0614(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;
    u32 local_18 [1];

    iVar1 = fn_800F80DC((int)(param_3), (int)(param_2), (int)(local_18));
    if (iVar1 == 0) {
        fn_800F87F0((int)(param_3), (int)(param_2), (int)(param_1));
    }
    else {
        fn_800F85DC((int)(param_3), (int)(local_18[0]), (int)(param_1));
    }
}

} /* extern "C" */
