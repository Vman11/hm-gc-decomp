// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80219CAC[];
void __ct__9C80118D20Fv(void);

s32 __ct__9C80219CACFv(s32 param_1) {
    __ct__9C80118D20Fv();
    *(u8 **)(param_1 + 0x3c) = __vt__9C80219CAC;
    return param_1;
}

} /* extern "C" */
