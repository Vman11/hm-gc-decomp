// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C801FDBD0[];
void __ct__9C801FAA9CFi(void);

s32 __ct__9C801FDDE4Fi(s32 param_1) {
    __ct__9C801FAA9CFi();
    *(u8 **)(param_1 + 0x100) = __vt__9C801FDBD0;
    *(u32 *)(param_1 + 0x104) = 0;
    *(u32 *)(param_1 + 0x108) = 0;
    return param_1;
}

} /* extern "C" */
