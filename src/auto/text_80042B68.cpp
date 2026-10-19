// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8023F214(void);

void fn_80042B68(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = *(u32 *)(param_1 + 0xe0);
    *(u32 *)(param_1 + 0x11c) = *(u32 *)(*(s32 *)(param_1 + 0x118) + 0x18c);
    fn_8023F214();
}

} /* extern "C" */
