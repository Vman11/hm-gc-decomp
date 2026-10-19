// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8238[];
void fn_80136E84(void);

s32 __ct__9C8016E3BCFv(s32 param_1) {
    fn_80136E84();
    *(u8 **)(param_1 + 0x10) = lbl_802E8238;
    *(u32 *)(param_1 + 0x18) = 0;
    return param_1;
}

} /* extern "C" */
