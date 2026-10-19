// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8023954C(void);

void fn_8022F7EC(u32 param_1, u32 param_2, s32 param_3) {
    fn_8023954C();
    *(u32 *)(param_3 + 0x48) = param_1;
}

} /* extern "C" */
