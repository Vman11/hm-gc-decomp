// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8013E834(void);

void fn_8018CF58(s32 param_1, s32 param_2) {
    fn_8013E834();
    *(u32 *)(param_1 + 0x14) = *(u32 *)(param_2 + 0x14);
    *(u32 *)(param_1 + 0x18) = *(u32 *)(param_2 + 0x18);
}

} /* extern "C" */
