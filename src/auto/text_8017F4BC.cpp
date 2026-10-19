// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035ADD0;
void fn_8018EEFC(int);
void fn_80199998(int, int, int);

void fn_8017F4BC(s32 param_1) {
    lbl_8035ADD0 = lbl_8035ADD0 + 1;
    fn_8018EEFC((int)(param_1 + 0x21c));
    fn_8018EEFC((int)(param_1 + 0x224));
    *(u32 *)(param_1 + 0x22c) = 1;
    *(u32 *)(param_1 + 0x24c) = 0;
    *(u32 *)(param_1 + 0x248) = 4;
    fn_80199998((int)(param_1 + 0x234), (int)(*(s32 *)(param_1 + 8) + 0x38), (int)(*(u32 *)(param_1 + 0x254)));
    *(u32 *)(param_1 + 0x230) = 0;
    *(s32 *)(param_1 + 0x240) = param_1 + 0x234;
    *(u32 *)(param_1 + 0x23c) = 0;
    *(u32 *)(param_1 + 0x244) = 0;
}

} /* extern "C" */
