// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_8019547C(int);
void fn_801EB5F4(void);

void fn_801EAD30(u32 param_1) {
    u32 iVar1;

    fn_801EB5F4();
    iVar1 = (*(u32 *)(param_1 + 0x20) != 0) ? *(u32 *)(param_1 + 0x20) : *(u32 *)(param_1 + 0x1c);
    iVar1 = fn_8019547C((int)(iVar1));
    *(u32 *)(iVar1 + 0xd8) = param_1 + 0x18;
    *(u32 *)(*(u32 *)(iVar1 + 0xa4) + 0x30) = param_1 + 0x18;
}

} /* extern "C" */
