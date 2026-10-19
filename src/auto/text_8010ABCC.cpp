// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800FB33C(int);
void fn_8010C3BC(void);

u32 fn_8010ABCC(s32 param_1, u32 param_2, u32 param_3) {
    u32 uVar1;

    fn_8010C3BC();
    uVar1 = fn_800FB33C((int)(param_3));
    *(u32 *)(param_1 + 0xc) = uVar1;
    return 0;
}

} /* extern "C" */
