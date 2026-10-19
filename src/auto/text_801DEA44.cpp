// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_8019565C(int);
void fn_8019B6B8(int, int);

void fn_801DEA44(u32 param_1) {
    u32 iVar1;
    u32 *piVar2;
    u32 iVar3;

    iVar3 = *(u32 *)(*(u32 *)(param_1 + 8) + 0xd8);
    iVar1 = (*(u32 *)(param_1 + 0x2c) != 0) ? *(u32 *)(param_1 + 0x2c) : *(u32 *)(param_1 + 0x28);
    iVar1 = fn_8019565C((int)(iVar1));
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        for (piVar2 = *(u32 **)(iVar1 + 0x48); piVar2 != (u32 *)0x0; piVar2 = (u32 *)piVar2[5]) {
            if (*piVar2 == iVar3) {
                fn_8019B6B8((int)(*(u32 *)(*(u32 *)(param_1 + 8) + 0xd8)), (int)(iVar1));
                return;
            }
        }
    }
}

} /* extern "C" */
