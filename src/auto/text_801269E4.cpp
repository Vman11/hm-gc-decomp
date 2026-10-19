// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80121E84[];
void __ct__9C80148AE4Fv(void);

s32 fn_801269E4(s32 param_1) {
    __ct__9C80148AE4Fv();
    *(u8 **)(param_1 + 0x53c) = __vt__9C80121E84;
    *(u32 *)(param_1 + 0x540) = 0;
    *(u32 *)(param_1 + 0x544) = 0;
    return param_1;
}

} /* extern "C" */
