// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D6700(void);
s32 fn_800D69D4(int);

void fn_8021A430(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_800D69D4((int)(0));
    *(u32 *)(param_1 + 0x28) = uVar1;
    fn_800D6700();
}

} /* extern "C" */
