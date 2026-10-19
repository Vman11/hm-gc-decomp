// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_80195320(int);
void fn_8019AE40(int, int);

void fn_801E88A8(u32 param_1) {
    u32 iVar1;
    u32 *piVar2;

    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        iVar1 = (*(u32 *)(param_1 + 0x2c) != 0) ? *(u32 *)(param_1 + 0x2c) : *(u32 *)(param_1 + 0x28);
        iVar1 = fn_80195320((int)(iVar1));
        for (piVar2 = *(u32 **)(iVar1 + 0x40); piVar2 != (u32 *)0x0; piVar2 = (u32 *)piVar2[5]) {
            if (*piVar2 == *(u32 *)(*(u32 *)(param_1 + 8) + 0xd8)) {
                return;
            }
        }
        fn_8019AE40((int)(*(u32 *)(*(u32 *)(param_1 + 8) + 0xd8)), (int)(iVar1));
    }
}

} /* extern "C" */
