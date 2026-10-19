// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C8020E5C0[];
void __dl__FPv();
void __dt__9C8021151CFv();

s32 __dt__9C8020E5C0Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x6b8) = __vt__9C8020E5C0;
        __dt__9C8021151CFv(param_1,0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
