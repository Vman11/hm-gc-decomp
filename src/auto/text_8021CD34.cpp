// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801007D0(int, int);
void fn_8021CA34(int, int);

void fn_8021CD34(u32 *param_1, s32 param_2, u32 param_3) {
    if ((*param_1 & 0x800) != 0) {
        fn_8021CA34((int)(*(u32 *)(param_1[0xb] + param_2 * 4)), (int)(param_3));
    }
    else {
        fn_801007D0((int)(param_1[0xb] + param_2 * 8), (int)(param_3));
    }
}

} /* extern "C" */
