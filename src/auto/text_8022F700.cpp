// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80239678(void);

void fn_8022F700(s32 param_1) {
    fn_80239678();
    if (*(s32 *)(param_1 + 0x25c) != -1) {
        **(s32 **)(param_1 + 0x1b8) = *(s32 *)(param_1 + 0x25c);
        *(u32 *)(param_1 + 0x25c) = 0xffffffff;
    }
}

} /* extern "C" */
