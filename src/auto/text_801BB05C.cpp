// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DD938(void);

void fn_801BB05C(s32 param_1) {
    fn_801DD938();
    *(u32 *)(param_1 + 0x144) = 1;
}

} /* extern "C" */
