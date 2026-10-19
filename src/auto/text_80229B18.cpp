// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F11DC[];
extern s32 lbl_8035B308;
void __ct__9C8023CE38Fv(void);

s32 __ct__9C80229B18Fv(s32 param_1) {
    __ct__9C8023CE38Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802F11DC;
    lbl_8035B308 = param_1;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
    *(u32 *)(param_1 + 0x58) = 0;
    *(u32 *)(param_1 + 0x5c) = 0;
    return param_1;
}

} /* extern "C" */
