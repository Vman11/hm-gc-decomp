// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8023D1A0(void);

void fn_80261AD4(s32 param_1) {
    *(u32 *)(param_1 + 0x9c) = 0;
    *(u32 *)(param_1 + 0xa0) = 0;
    *(u32 *)(param_1 + 0x98) = 0;
    *(u32 *)(param_1 + 0xa8) = 0;
    *(u32 *)(param_1 + 0xac) = 0;
    *(u32 *)(param_1 + 0xa4) = 0;
    *(u32 *)(param_1 + 0x8c) = 1;
    fn_8023D1A0();
}

} /* extern "C" */
