// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF9E8[];
void __ct__9C8021157CFv(void);

s32 __ct__9C8020AD3CFv(s32 param_1) {
    __ct__9C8021157CFv();
    *(u8 **)(param_1 + 0x6b8) = lbl_802EF9E8;
    *(u32 *)(param_1 + 0x6bc) = 0;
    return param_1;
}

} /* extern "C" */
