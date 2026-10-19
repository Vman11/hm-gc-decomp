// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6A60[];
void __ct__9C80155460Fv(void);

s32 __ct__9C80157658Fv(s32 param_1) {
    __ct__9C80155460Fv();
    *(u8 **)(param_1 + 0x20) = lbl_802E6A60;
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
    return param_1;
}

} /* extern "C" */
