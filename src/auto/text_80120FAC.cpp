// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C801203A8[];
void __ct__9C80148AE4Fv(void);

s32 fn_80120FAC(s32 param_1) {
    __ct__9C80148AE4Fv();
    *(u8 **)(param_1 + 0x53c) = __vt__9C801203A8;
    *(u32 *)(param_1 + 0x540) = 0;
    *(u32 *)(param_1 + 0x544) = 0;
    *(u32 *)(param_1 + 0x548) = 0;
    return param_1;
}

} /* extern "C" */
