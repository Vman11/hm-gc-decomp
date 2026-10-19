// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019B048(int, int);

void fn_801E6CF8(u32 param_1) {
    u32 iVar1;
    u32 *piVar2;
    u32 *puVar3;

    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        puVar3 = (*(u32 **)(param_1 + 0x2c) != (u32 *)0x0) ? *(u32 **)(param_1 + 0x2c) : *(u32 **)(param_1 + 0x28);
        for (piVar2 = (u32 *)puVar3[0x13]; piVar2 != (u32 *)0x0; piVar2 = (u32 *)piVar2[5]) {
            iVar1 = *(u32 *)(*(u32 *)(param_1 + 8) + 0xd8);
            if (*piVar2 == iVar1) {
                fn_8019B048((int)(iVar1), (int)(puVar3));
                *puVar3 = *puVar3 & 0xfffffdff;
                return;
            }
        }
    }
}

} /* extern "C" */
