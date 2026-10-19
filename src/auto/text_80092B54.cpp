// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80241E0C(void);

void fn_80092B54(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x11c) = 0;
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x128) = 0;
    *(u32 *)(param_1 + 300) = 0;
    *(u32 *)(param_1 + 0x130) = 0;
    *(u32 *)(param_1 + 0x134) = 0;
    *(u32 *)(param_1 + 0x138) = 0;
    *(u32 *)(param_1 + 0x13c) = 0;
    *(u32 *)(param_1 + 0x140) = 0;
    *(u32 *)(param_1 + 0x144) = 0;
    *(u32 *)(param_1 + 0x148) = 0;
    *(u32 *)(param_1 + 0x14c) = 0;
    *(u32 *)(param_1 + 0x150) = 1;
    *(u32 *)(param_1 + 0x154) = 0;
    *(u32 *)(param_1 + 0x158) = 0;
    *(u32 *)(param_1 + 0x15c) = 0;
    *(u32 *)(param_1 + 0x160) = 1;
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x168) = 1;
    *(u32 *)(param_1 + 0x16c) = 0;
    *(u32 *)(param_1 + 0x170) = 0;
    fn_80241E0C();
}

} /* extern "C" */
