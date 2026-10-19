// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035B65C;
void fn_800F6E88(int, int);

void fn_800303A8(u8 *param_1, u32 param_2) {
    u32 iVar1;

    *param_1 = 0;
    if (param_2 == 0) {
        param_2 = *(u32 *)(lbl_8035B65C + 0x78);
    }
    if ((((param_2 != 0) && (*(u32 *)(param_2 + 4) != 0)) &&
            (iVar1 = *(u32 *)(*(u32 *)(param_2 + 4) + 0x160), iVar1 != 0)) && (*(u32 *)(iVar1 + 0xc) != 0)
          ) {
        fn_800F6E88((int)(param_1), (int)(*(u32 *)(iVar1 + 0xc)));
    }
}

} /* extern "C" */
