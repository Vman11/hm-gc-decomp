// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void __ct__9C80210CECFv();
void fn_802150C8();

s32 __ct__9C80215F50Fv(s32 param_1) {
    fn_802150C8();
    __ct__9C80210CECFv(param_1 + 0x24);
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    return param_1;
}
