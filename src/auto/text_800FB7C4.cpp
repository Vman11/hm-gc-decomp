// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

f32 fn_800EB838(int);

f64 fn_800FB7C4(s32 param_1) {
    f64 dVar1;

    dVar1 = (f64)fn_800EB838((int)(*(u32 *)(param_1 + 0x10)));
    return (f64)(f32)dVar1;
}

} /* extern "C" */
