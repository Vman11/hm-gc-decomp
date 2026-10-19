// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801487AC(int);
void fn_801487C8(void);

void fn_8014A320(s32 param_1) {
    fn_801487C8();
    fn_801487AC((int)(param_1));
    *(u32 *)(param_1 + 0x548) = 0;
    *(u32 *)(param_1 + 0x540) = 0;
    *(u32 *)(param_1 + 0x544) = 0;
    *(u8 *)(param_1 + 0x54d) = 0;
    *(u8 *)(param_1 + 0x54c) = 0;
    *(u8 *)(param_1 + 0x54e) = 0;
    *(u8 *)(param_1 + 0x54f) = 0;
    *(u8 *)(param_1 + 0x550) = 0;
    *(u8 *)(param_1 + 0x551) = 0;
}

} /* extern "C" */
