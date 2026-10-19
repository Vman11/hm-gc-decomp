// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801EB7B0(void);

void fn_801EAD84(s32 param_1) {
    fn_801EB7B0();
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
}

} /* extern "C" */
