// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8016BC04(s32, u32);
s32 fn_80179838(s32, u32, u32, u32);

void fn_8016BB80(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    s32 iVar1;

    iVar1 = fn_80179838(param_1 + 0xbf10,param_2,param_3,param_4);
    if (iVar1 == 0) {
        fn_8016BC04(param_1,param_4);
        fn_80179838(param_1 + 0xbf10,param_2,param_3,param_4);
    }
}

} /* extern "C" */
