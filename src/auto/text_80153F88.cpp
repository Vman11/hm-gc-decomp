// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8012C2FC(void);

void fn_80153F88(s32 param_1) {
    fn_8012C2FC();
    *(u32 *)(param_1 + 0x78) = 0;
    *(u32 *)(param_1 + 0x1c0) = 0;
}

} /* extern "C" */
