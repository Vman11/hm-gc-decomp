// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801351AC(int, int, int, int);
void fn_8017C740(int, int, int, int);

void fn_8017D18C(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    fn_8017C740((int)(param_1), (int)(param_3), (int)(param_4), (int)(param_5));
    fn_801351AC((int)(param_3), (int)(param_1 + 0x1c), (int)(param_2), (int)(0));
}

} /* extern "C" */
