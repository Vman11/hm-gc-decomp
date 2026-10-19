// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1A14[];
extern s32 lbl_8035B478;
void __ct__9C800F92E8Fv(void);

s32 __ct__9C8023E874Fv(s32 param_1) {
    __ct__9C800F92E8Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802F1A14;
    lbl_8035B478 = param_1;
    return param_1;
}

} /* extern "C" */
