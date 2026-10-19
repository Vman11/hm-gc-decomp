// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801071E4(int);
void fn_801EB5F4(int, int, int);

void fn_801E6AEC(s32 param_1, u32 param_2, u32 param_3) {
    fn_801071E4((int)(param_1 + 0x34));
    fn_801EB5F4((int)(param_1), (int)(param_2), (int)(param_3));
}

} /* extern "C" */
