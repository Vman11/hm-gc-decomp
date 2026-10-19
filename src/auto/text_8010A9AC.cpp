// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8010A9AC[];
void __ct__9C8010C41CFv(void);

s32 __ct__9C8010A9ACFv(s32 param_1) {
    __ct__9C8010C41CFv();
    *(u8 **)(param_1 + 8) = __vt__9C8010A9AC;
    return param_1;
}

} /* extern "C" */
