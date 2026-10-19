// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801FA890(void);

void fn_801FDDB8(s32 param_1) {
    *(u32 *)(param_1 + 0x104) = 0;
    *(u32 *)(param_1 + 0x108) = 0;
    fn_801FA890();
}

} /* extern "C" */
