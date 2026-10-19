// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801EB728(void);

void fn_801E6820(s32 param_1) {
    fn_801EB728();
    *(u32 *)(param_1 + 0x34) = *(u32 *)(param_1 + 0x34) & 0xfffffffd;
}

} /* extern "C" */
