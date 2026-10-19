// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80241E0C(void);

void fn_80042868(s32 param_1) {
    *(u32 *)(param_1 + 300) = 0;
    *(u32 *)(param_1 + 0x130) = 0x15;
    *(u32 *)(param_1 + 0x134) = 0x15;
    fn_80241E0C();
}

} /* extern "C" */
