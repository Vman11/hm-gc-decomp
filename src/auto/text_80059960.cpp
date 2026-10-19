// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80241E0C(void);

void fn_80059960(s32 param_1) {
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
    *(u32 *)(param_1 + 0x150) = 0;
    *(u32 *)(param_1 + 0x154) = 0;
    *(u32 *)(param_1 + 0x158) = 0;
    *(u32 *)(param_1 + 0x15c) = 0;
    *(u32 *)(param_1 + 0x160) = 0;
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x168) = 0;
    *(u32 *)(param_1 + 0x16c) = 0;
    *(u32 *)(param_1 + 0x170) = 0;
    *(u32 *)(param_1 + 0x174) = 0;
    *(u32 *)(param_1 + 0x178) = 0;
    *(u32 *)(param_1 + 0x17c) = 0;
    *(u32 *)(param_1 + 0x180) = 0;
    *(u32 *)(param_1 + 0x184) = 0;
    *(u32 *)(param_1 + 0x188) = 0;
    *(u32 *)(param_1 + 400) = 0;
    *(u32 *)(param_1 + 0x194) = 1;
    *(u32 *)(param_1 + 0x198) = 1;
    *(u32 *)(param_1 + 0x19c) = 0;
    *(u32 *)(param_1 + 0x1a0) = 0;
    *(u32 *)(param_1 + 0x1a8) = 1;
    *(u32 *)(param_1 + 0x1ac) = 2;
    *(u32 *)(param_1 + 0x1b0) = 4;
    fn_80241E0C();
}

} /* extern "C" */
