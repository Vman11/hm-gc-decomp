// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E2150[];
void fn_800FA974(int);
void fn_800FA988(void);

s32 __ct__9C800FB754Fv(s32 param_1) {
    fn_800FA988();
    *(u8 **)(param_1 + 0xc) = lbl_802E2150;
    *(u32 *)(param_1 + 0x10) = 0;
    fn_800FA974((int)(param_1));
    return param_1;
}

} /* extern "C" */
