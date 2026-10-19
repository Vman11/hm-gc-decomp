// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8012F4C8[];
void fn_800FC0E8(void);

s32 fn_8012F714(s32 param_1) {
    fn_800FC0E8();
    *(u8 **)(param_1 + 8) = __vt__9C8012F4C8;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u8 *)(param_1 + 0xc) = 0;
    return param_1;
}

} /* extern "C" */
