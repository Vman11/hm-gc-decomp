// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C80273730[];
void __ct__9C80257738Fv();
void __ct__9C8025E920Fv();

u32 * __ct__9C80273730Fv(u32 *param_1) {
    __ct__9C80257738Fv();
    *param_1 = (u32)__vt__9C80273730;
    __ct__9C8025E920Fv(param_1 + 0x30);
    return param_1;
}
