// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6E30[];
void __ct__9C8012F46CFv(void);

s32 __ct__9C8015C244Fv(s32 param_1) {
    __ct__9C8012F46CFv();
    *(u8 **)(param_1 + 0x10) = lbl_802E6E30;
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    return param_1;
}

} /* extern "C" */
