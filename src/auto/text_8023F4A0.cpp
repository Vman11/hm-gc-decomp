// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_8010FEDC(int, int, int, int);

u32 fn_8023F4A0(u32 param_1, u32 param_2, s8 *param_3, u32 param_4) {
    u32 *puVar1;
    u32 iVar2;
    u32 iVar3;

    iVar3 = *(u32 *)(*(u32 *)(param_1 + 0xe0) + 0xc);
    iVar2 = *(u32 *)(*(u32 *)(param_1 + 0xe0) + 0x10);
    if ((iVar3 != 0) && (iVar2 != 0)) {
        if (*param_3 != '\0') {
            iVar2 = fn_8010FEDC((int)(*(u32 *)(param_1 + 0xc)), (int)(iVar2), (int)(param_3), (int)(1));
        }
        puVar1 = (u32 *)fn_8010FEDC((int)(iVar3), (int)(iVar2), (int)(param_4), (int)(1));
        if (puVar1 != (u32 *)0x0) {
            return *puVar1;
        }
    }
    return 0;
}

} /* extern "C" */
