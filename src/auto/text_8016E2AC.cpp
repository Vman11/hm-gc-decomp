// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8016E2AC[];
void fn_80136B8C(void);

s32 __ct__9C8016E2ACFv(s32 param_1) {
    fn_80136B8C();
    *(u8 **)(param_1 + 0x34) = __vt__9C8016E2AC;
    return param_1;
}

} /* extern "C" */
