// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8025764C(void);

void fn_80262498(s32 param_1) {
    *(u32 *)(param_1 + 0xc0) = 0;
    *(u32 *)(param_1 + 0xc4) = 0;
    *(u32 *)(param_1 + 200) = 0;
    *(u32 *)(param_1 + 0xcc) = 0;
    fn_8025764C();
}

} /* extern "C" */
