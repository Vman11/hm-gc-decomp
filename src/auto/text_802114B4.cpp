// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80207F58(void);

void fn_802114B4(s32 param_1) {
    fn_80207F58();
    *(u32 *)(param_1 + 0x6a0) = 0;
    *(u32 *)(param_1 + 0x6a4) = 0;
    *(u32 *)(param_1 + 0x6a8) = 0;
    *(u32 *)(param_1 + 0x6ac) = 0;
    *(u32 *)(param_1 + 0x6b0) = 0;
    *(u32 *)(param_1 + 0x6b4) = 0;
}

} /* extern "C" */
