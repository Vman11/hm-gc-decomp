// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8035B268[0x8];
void fn_801A2F64(void);

void fn_802208A4(s32 param_1) {
    *(u32 **)(param_1 + 0x278) = (u32 *)(lbl_8035B268);
    fn_801A2F64();
}

} /* extern "C" */
