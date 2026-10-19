// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E69F8[];
void __ct__9C8012C28CFv(void);

s32 __ct__9C8015749CFv(s32 param_1) {
    __ct__9C8012C28CFv();
    *(u8 **)(param_1 + 0xa4) = lbl_802E69F8;
    *(u32 *)(param_1 + 0xa8) = 0;
    *(u32 *)(param_1 + 0xac) = 0;
    *(u32 *)(param_1 + 0xb0) = 0;
    *(u32 *)(param_1 + 0xb4) = 0;
    *(u32 *)(param_1 + 0xb8) = 0;
    *(u32 *)(param_1 + 0xbc) = 0;
    *(u32 *)(param_1 + 0xc0) = 0;
    *(u32 *)(param_1 + 0xc4) = 0;
    *(u32 *)(param_1 + 200) = 0;
    *(u32 *)(param_1 + 0xcc) = 0;
    return param_1;
}

} /* extern "C" */
