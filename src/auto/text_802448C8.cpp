// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8023C720(int, int);

u32 fn_802448C8(s32 *param_1, s32 param_2) {
    if (*param_1 != 0) {
        *param_1 = 0;
        param_1[0xd] = 0;
        param_1[1] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
    }
    *param_1 = 1;
    param_1[1] = param_2;
    param_1[3] = param_2;
    param_1[2] = param_2;
    fn_8023C720((int)(param_1 + 6), (int)(*(u32 *)(param_1[3] + 0x1c)));
    param_1[0xd] = 0;
    return 0;
}

} /* extern "C" */
