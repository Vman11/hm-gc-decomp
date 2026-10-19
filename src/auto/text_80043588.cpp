// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80040C48(void);

void fn_80043588(s32 param_1) {
    *(u32 *)(param_1 + 0x178) = 0;
    *(u32 *)(param_1 + 0x17c) = 0;
    *(u32 *)(param_1 + 0x180) = 0;
    *(u32 *)(param_1 + 0x184) = 0;
    *(u32 *)(param_1 + 0x188) = 0;
    *(u32 *)(param_1 + 0x18c) = 0;
    *(u32 *)(param_1 + 400) = 0;
    *(u32 *)(param_1 + 0x194) = 0;
    *(u32 *)(param_1 + 0x198) = 0;
    *(u32 *)(param_1 + 0x19c) = 0;
    *(u32 *)(param_1 + 0x1a0) = 0;
    *(u32 *)(param_1 + 0x1a4) = 0;
    *(u32 *)(param_1 + 0x1a8) = 1;
    *(u32 *)(param_1 + 0x1ac) = 1;
    *(u32 *)(param_1 + 0x1b0) = 0;
    fn_80040C48();
}

} /* extern "C" */
