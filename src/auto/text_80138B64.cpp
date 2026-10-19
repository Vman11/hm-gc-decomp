// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80137FA8[];
void __ct__9C800F92E8Fv(void);

s32 fn_80138B64(s32 param_1) {
    __ct__9C800F92E8Fv();
    *(u8 **)(param_1 + 0x10) = __vt__9C80137FA8;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
    return param_1;
}

} /* extern "C" */
