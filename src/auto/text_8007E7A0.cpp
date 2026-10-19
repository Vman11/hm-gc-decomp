// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80241E0C(void);

void fn_8007E7A0(s32 param_1) {
    if (*(s32 *)(param_1 + 0x168) != 0) {
        *(u32 *)(param_1 + 400) = 0;
    }
    *(u32 *)(param_1 + 0x118) = 0;
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
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x15c) = 0;
    *(u32 *)(param_1 + 0x160) = 0;
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x158) = 0;
    *(u32 *)(param_1 + 0x168) = 0;
    *(u32 *)(param_1 + 0x16c) = 1;
    *(u32 *)(param_1 + 0x170) = 1;
    *(u32 *)(param_1 + 0x174) = 0;
    *(u32 *)(param_1 + 0x178) = 0;
    *(u32 *)(param_1 + 0x17c) = 0;
    *(u32 *)(param_1 + 0x180) = 10;
    *(u32 *)(param_1 + 0x184) = 0x20;
    *(u32 *)(param_1 + 0x188) = 0;
    *(u32 *)(param_1 + 0x18c) = 0;
    *(u32 *)(param_1 + 0x194) = 0xffffffff;
    fn_80241E0C();
}

} /* extern "C" */
