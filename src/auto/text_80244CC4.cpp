// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B4EC;
void fn_80242AA4(void);

s32 __ct__9C80244CC4Fv(s32 param_1) {
    fn_80242AA4();
    lbl_8035B4EC = param_1;
    *(u32 *)(param_1 + 0xc) = 0;
    *(u32 *)(param_1 + 0x10) = 0;
    return param_1;
}

} /* extern "C" */
