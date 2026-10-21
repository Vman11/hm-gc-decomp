// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8013C324Fv[];
void __dla__FPv(int);
void __dl__FPv(int);
void fn_800E1E88(int, int);

s32 __dt__9C801F4708Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        if (*(u32 *)(param_1 + 0x38) != 0) {
            fn_800E1E88((int)(*(u32 *)(param_1 + 0x38)), (int)(__dt__9C8013C324Fv));
        }
        if (*(void **)(param_1 + 0x3c) != 0) {
            __dla__FPv((int)(*(void **)(param_1 + 0x3c)));
        }
        if (*(void **)(param_1 + 0x40) != 0) {
            __dla__FPv((int)(*(void **)(param_1 + 0x40)));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
