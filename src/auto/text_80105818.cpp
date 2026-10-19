// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80129A9C[];
void __ct__9C80105074Fv(void);

s32 __ct__9C80105818Fv(s32 param_1) {
    __ct__9C80105074Fv();
    *(u8 **)(param_1 + 0x24) = __vt__9C80129A9C;
    return param_1;
}

} /* extern "C" */
