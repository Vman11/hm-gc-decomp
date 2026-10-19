// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DBF24(void);

void fn_801AE9D0(s32 param_1) {
    fn_801DBF24();
    *(f32 *)(param_1 + 0x174) = *(f32 *)(param_1 + 0x164) + *(f32 *)(param_1 + 0x48);
    *(f32 *)(param_1 + 0x178) = *(f32 *)(param_1 + 0x168) + *(f32 *)(param_1 + 0x4c);
    *(f32 *)(param_1 + 0x17c) = *(f32 *)(param_1 + 0x16c) + *(f32 *)(param_1 + 0x48);
    *(f32 *)(param_1 + 0x180) = *(f32 *)(param_1 + 0x170) + *(f32 *)(param_1 + 0x4c);
}

} /* extern "C" */
