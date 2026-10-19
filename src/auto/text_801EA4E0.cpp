// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DFC40(void);

void fn_801EA4E0(s32 param_1) {
    fn_801DFC40();
    *(u32 *)(param_1 + 0x5c) = 0;
    *(u8 *)(param_1 + 0x54) = 0;
    *(u32 *)(param_1 + 0x50) = 4;
}

} /* extern "C" */
