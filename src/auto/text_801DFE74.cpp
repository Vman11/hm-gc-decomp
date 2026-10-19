// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_8019556C(int);

u32 fn_801DFE74(u32 param_1) {
    u32 iVar1;

    iVar1 = (*(u32 *)(param_1 + 0x2c) != 0) ? *(u32 *)(param_1 + 0x2c) : *(u32 *)(param_1 + 0x28);
    iVar1 = fn_8019556C((int)(iVar1));
    return *(u32 *)(iVar1 + 0xb0) + *(u32 *)(param_1 + 0x30) * 0x3c;
}

} /* extern "C" */
