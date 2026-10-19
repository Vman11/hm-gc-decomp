// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8013591C(void);
void fn_80156110(int, int);

void fn_80163610(s32 param_1, u32 param_2) {
    s32 iVar1;

    fn_8013591C();
    iVar1 = *(s32 *)(param_1 + 0x1934);
    *(u32 *)(iVar1 + 0x27a0) = param_2;
    fn_80156110((int)(*(u32 *)(iVar1 + 0x27a0)), (int)(iVar1 + 0x27a4));
}

} /* extern "C" */
