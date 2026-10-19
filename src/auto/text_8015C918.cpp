// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6E80[];
void fn_8012FCDC(void);

s32 __ct__9C8015C918Fv(s32 param_1) {
    fn_8012FCDC();
    *(u8 **)(param_1 + 0x10) = lbl_802E6E80;
    *(u32 *)(param_1 + 0x18) = 0;
    return param_1;
}

} /* extern "C" */
