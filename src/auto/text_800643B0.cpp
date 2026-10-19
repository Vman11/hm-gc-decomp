// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C800643B0[];
void __ct__9C800643ECFv(void);

s32 __ct__9C800643B0Fv(s32 param_1) {
    __ct__9C800643ECFv();
    *(u8 **)(param_1 + 0x2a0) = __vt__9C800643B0;
    return param_1;
}

} /* extern "C" */
