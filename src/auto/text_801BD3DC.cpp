// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A5304(void);

void fn_801BD3DC(s32 param_1) {
    fn_801A5304();
    *(u32 *)(param_1 + 4) = 0;
    *(u8 *)(param_1 + 0x14) = 0xff;
    *(u8 *)(param_1 + 0x15) = 0xff;
    *(u8 *)(param_1 + 0x16) = 0xff;
    *(u8 *)(param_1 + 0x17) = 0xff;
    *(u8 *)(param_1 + 0x18) = 0xff;
    *(u8 *)(param_1 + 0x19) = 0xff;
    *(u8 *)(param_1 + 0x1a) = 0xff;
    *(u8 *)(param_1 + 0x1b) = 0xff;
    *(u8 *)(param_1 + 0x1c) = 0xff;
    *(u8 *)(param_1 + 0x1d) = 0xff;
    *(u8 *)(param_1 + 0x1e) = 0xff;
    *(u8 *)(param_1 + 0x1f) = 0xff;
    *(u8 *)(param_1 + 0x20) = 0xff;
    *(u8 *)(param_1 + 0x21) = 0xff;
    *(u8 *)(param_1 + 0x22) = 0xff;
    *(u8 *)(param_1 + 0x23) = 0xff;
}

} /* extern "C" */
