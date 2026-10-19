// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8017B40C[];
void __ct__9C8019A4B0Fv(void);

s32 fn_8017B648(s32 param_1) {
    __ct__9C8019A4B0Fv();
    *(u8 **)(param_1 + 8) = __vt__9C8017B40C;
    *(u32 *)(param_1 + 0xc) = 0;
    *(u32 *)(param_1 + 0x10) = 0;
    return param_1;
}

} /* extern "C" */
