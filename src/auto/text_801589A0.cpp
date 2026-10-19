// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80175748Fv[];
void __dl__FPv(int);
void fn_800E1F04(int, int, int, int);
void fn_801586F0(void);

s32 __dt__9C80158A08Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        fn_801586F0();
        fn_800E1F04((int)(param_1 + 0x4d8), (int)(__dt__9C80175748Fv), (int)(0x30), (int)(0x10));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
