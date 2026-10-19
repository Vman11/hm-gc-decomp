// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_8019565C(int);

void fn_801DE990(u32 param_1) {
    u32 iVar1;
    u32 *puVar2;

    iVar1 = (*(u32 *)(param_1 + 0x2c) != 0) ? *(u32 *)(param_1 + 0x2c) : *(u32 *)(param_1 + 0x28);
    puVar2 = (u32 *)fn_8019565C((int)(iVar1));
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        *puVar2 = *puVar2 & 0xfffff7ff;
    }
}

} /* extern "C" */
