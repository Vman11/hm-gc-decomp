// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_80359F2C;
void fn_8002B26C(int, int);
void fn_8002B42C(int, int);

void fn_80071E68(s32 param_1) {
    u32 *puVar1;

    puVar1 = *(u32 **)(param_1 + 0x428);
    if (puVar1 != (u32 *)0x0) {
        *puVar1 = *puVar1 & 0xfffff7ff;
    }
    puVar1 = *(u32 **)(param_1 + 0x438);
    if (puVar1 != (u32 *)0x0) {
        *puVar1 = *puVar1 & 0xfffff7ff;
    }
    fn_8002B42C((int)(lbl_80359F2C), (int)(0));
    *(u32 *)(param_1 + 0x6d8) = 0;
    fn_8002B26C((int)(lbl_80359F2C), (int)(0));
}

} /* extern "C" */
