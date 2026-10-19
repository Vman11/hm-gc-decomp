// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80199ECC[];
void __ct__9C80192398Fv(void);

s32 __ct__9C80199ECCFv(s32 param_1) {
    __ct__9C80192398Fv();
    *(u8 **)(param_1 + 0x68) = __vt__9C80199ECC;
    *(u16 *)(param_1 + 4) = 0x11;
    *(u32 *)(param_1 + 0x6c) = 0;
    return param_1;
}

} /* extern "C" */
