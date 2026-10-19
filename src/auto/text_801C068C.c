// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

u32 fn_800F80DC();
void fn_800F8604();

void fn_801C068C(u32 param_1, u32 param_2, u32 *param_3, u32 param_4) {
    u32 iVar1;
    u32 local_18 [1];

    iVar1 = fn_800F80DC(param_2,param_4,local_18);
    if (iVar1 == 0) {
        fn_800F8604(param_2,param_4,0xdad,local_18);
    }
    *param_3 = local_18[0] + 1;
}
