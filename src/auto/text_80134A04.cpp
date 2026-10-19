// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E5130[];
void fn_80148310(void);

s32 fn_80134A04(s32 param_1) {
    *(u8 **)(param_1 + 0x20) = lbl_802E5130;
    fn_80148310();
    *(u16 *)(param_1 + 0x1a) = 0;
    *(u8 *)(param_1 + 0x14) = 0;
    *(u8 *)(param_1 + 0x15) = 0;
    *(u8 *)(param_1 + 0x16) = 0;
    *(u8 *)(param_1 + 0x17) = 0xff;
    *(u16 *)(param_1 + 0x1c) = 0;
    *(u16 *)(param_1 + 0x1e) = 0;
    return param_1;
}

} /* extern "C" */
