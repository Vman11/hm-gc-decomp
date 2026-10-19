// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8021151C[];
void fn_802080E0(void);

s32 __ct__9C8021157CFv(s32 param_1) {
    *(u8 **)(param_1 + 0x6b8) = __vt__9C8021151C;
    fn_802080E0();
    *(u32 *)(param_1 + 0x6a0) = 0;
    *(u32 *)(param_1 + 0x6a4) = 0;
    *(u32 *)(param_1 + 0x6a8) = 0;
    *(u32 *)(param_1 + 0x6ac) = 0;
    *(u32 *)(param_1 + 0x6b0) = 0;
    *(u32 *)(param_1 + 0x6b4) = 0;
    return param_1;
}

} /* extern "C" */
