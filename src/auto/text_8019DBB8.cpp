// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_800FB33C(int);
void fn_801855B8(void);

void fn_8019DBB8(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 uVar1;

    if (param_4 == 0x5a) {
        uVar1 = fn_800FB33C((int)(param_3));
        *(u32 *)(param_1 + 0xa0) = uVar1;
    }
    else {
        fn_801855B8();
    }
}

} /* extern "C" */
