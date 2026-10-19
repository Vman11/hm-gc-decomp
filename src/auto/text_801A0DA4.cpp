// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80190E48(void);

void fn_801A0DA4(s32 param_1, s32 param_2) {
    fn_80190E48();
    *(u32 *)(param_1 + 0x30) = *(u32 *)(param_2 + 0x30);
    *(s32 *)(param_1 + 0x88) = param_2;
}

} /* extern "C" */
