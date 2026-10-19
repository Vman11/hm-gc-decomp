// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800EB6F4();
void fn_800EB764();

void fn_80207E5C(s32 param_1, u32 param_2) {
    fn_800EB764(param_1 + 0x80,param_1);
    if (*(s32 *)(param_1 + 0x698) != -1) {
        fn_800EB6F4(param_1 + 0x80,param_1 + *(s32 *)(param_1 + 0x698) * 0x80 + 0x298);
    }
    fn_800EB6F4(param_1 + 0x80,param_2);
}
