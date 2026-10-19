// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8E38[];
void __ct__9C800FC8F0Fv(void);

s32 __ct__9C8018B724Fv(s32 param_1) {
    __ct__9C800FC8F0Fv();
    *(u8 **)(param_1 + 0x8c) = lbl_802E8E38;
    *(u32 *)(param_1 + 0x90) = 0;
    *(u32 *)(param_1 + 0x94) = 0;
    return param_1;
}

} /* extern "C" */
