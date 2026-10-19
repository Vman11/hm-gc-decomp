// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035B65C;
u32 fn_801AAA08(int, int, int, int);

void fn_8002CFA0(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;

    uVar1 = fn_801AAA08((int)(*(u32 *)(*(u32 *)(lbl_8035B65C + 0x24) + 0x33b0)), (int)(1), (int)(param_2), (int)(0));
    iVar2 = *(u32 *)(*(u32 *)(param_1 + 0x1c0) + 0x68);
    if (iVar2 != 0) {
        *(u32 *)(iVar2 + 4) = uVar1;
    }
}

} /* extern "C" */
