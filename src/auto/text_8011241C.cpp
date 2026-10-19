// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80112510(int);

void fn_8011241C(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 *puVar2;
    u32 iVar3;

    iVar1 = *(u32 *)(param_2 + 0x1dc);
    if (iVar1 != 0) {
        puVar2 = (u32 *)(iVar1 + 8);
        for (iVar3 = *(u32 *)(iVar1 + 8); iVar3 != 0; iVar3 = *(u32 *)(iVar3 + 0x1e0)) {
            if (iVar3 == param_2) {
                *puVar2 = *(u32 *)(iVar3 + 0x1e0);
                *(u32 *)(iVar3 + 0x1dc) = 0;
                if ((*(u32 *)(iVar1 + 8) == 0) && (*(u32 *)(iVar1 + 0x10) != 0)) {
                    fn_80112510((int)(*(u32 *)(iVar1 + 0x10)));
                }
                break;
            }
            puVar2 = (u32 *)(iVar3 + 0x1e0);
        }
    }
    *(u32 *)(param_2 + 0x1e0) = *(u32 *)(param_1 + 8);
    *(u32 *)(param_1 + 8) = param_2;
    *(u32 *)(param_2 + 0x1dc) = param_1;
}

} /* extern "C" */
