// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8015C808[];
void fn_8012F9AC(void);

s32 __ct__9C8015C808Fv(s32 param_1) {
    fn_8012F9AC();
    *(u8 **)(param_1 + 0x4c) = __vt__9C8015C808;
    return param_1;
}

} /* extern "C" */
