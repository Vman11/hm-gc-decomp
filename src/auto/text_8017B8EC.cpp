// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8017B8EC[];
void __ct__9C8018E2ACFv(void);

s32 __ct__9C8017B8ECFv(s32 param_1) {
    __ct__9C8018E2ACFv();
    *(u8 **)(param_1 + 0xc) = __vt__9C8017B8EC;
    *(u32 *)(param_1 + 0x10) = 0xffffffff;
    *(u32 *)(param_1 + 0x14) = 0;
    return param_1;
}

} /* extern "C" */
