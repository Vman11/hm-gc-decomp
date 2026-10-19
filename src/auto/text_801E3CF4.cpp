// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019B4B0(int, int);

void fn_801E3CF4(u32 param_1) {
    u32 *piVar1;
    u32 *puVar2;

    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        puVar2 = (*(u32 **)(param_1 + 0x2c) != (u32 *)0x0) ? *(u32 **)(param_1 + 0x2c) : *(u32 **)(param_1 + 0x28);
        for (piVar1 = (u32 *)puVar2[0x11]; piVar1 != (u32 *)0x0; piVar1 = (u32 *)piVar1[5]) {
            if (*piVar1 == *(u32 *)(*(u32 *)(param_1 + 8) + 0xd8)) {
                return;
            }
        }
        fn_8019B4B0((int)(*(u32 *)(*(u32 *)(param_1 + 8) + 0xd8)), (int)(puVar2));
        *puVar2 = *puVar2 | 2;
    }
}

} /* extern "C" */
