// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801EB5F4(void);

void fn_801E6574(s32 param_1, s32 param_2) {
    fn_801EB5F4();
    *(u32 *)(param_1 + 0x24) = *(u32 *)(param_2 + 0xdc);
}

} /* extern "C" */
