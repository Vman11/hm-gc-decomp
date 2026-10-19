// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FA974(void);

void fn_800FB6D8(s32 param_1) {
    *(u32 *)(param_1 + 0x10) = 0;
    fn_800FA974();
}

} /* extern "C" */
