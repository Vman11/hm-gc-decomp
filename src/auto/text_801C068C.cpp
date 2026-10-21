// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800F80DC(void *, u32, void *);
void fn_800F8604(void *, u32, s32, void *);

void fn_801C068C(void *param_1, void *param_2, u32 *param_3, u32 param_4) {
    u32 local_18 [1];

    if (fn_800F80DC(param_2, param_4, local_18) == 0) {
        fn_800F8604(param_2, param_4, 0xdad, local_18);
    }
    *param_3 = local_18[0] + 1;
}

} /* extern "C" */
