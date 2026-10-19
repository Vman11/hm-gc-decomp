// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A2F28(void);

void fn_80220870(s32 param_1) {
    fn_801A2F28();
    *(u32 *)(param_1 + 0x278) = 0;
}

} /* extern "C" */
