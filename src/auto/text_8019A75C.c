// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80188B44();
void fn_8019A7D0();

void fn_8019A75C(s32 param_1, u32 param_2) {
    u32 uVar2;
    u32 uVar1;

    fn_8019A7D0(param_1,1,1);
    uVar2 = *(u32 *)(param_1 + 0x3c);
    uVar1 = uVar2 + *(s32 *)(param_1 + 0x38) * 0x2c;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 0x2c) {
        fn_80188B44(uVar2,param_2);
    }
}
