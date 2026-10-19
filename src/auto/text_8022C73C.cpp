// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B65C;
void fn_8019B4B0(int, int);

void fn_8022C73C(s32 param_1) {
    if ((*(u32 **)(param_1 + 0x9c) != (u32 *)0x0) && ((**(u32 **)(param_1 + 0x9c) & 2) == 0)) {
        fn_8019B4B0((int)(*(u32 *)(lbl_8035B65C + 0xc)), (int)(*(u32 **)(param_1 + 0x9c)));
        **(u32 **)(param_1 + 0x9c) = **(u32 **)(param_1 + 0x9c) | 2;
    }
    *(u32 *)(param_1 + 0xb4) = *(u32 *)(param_1 + 0xb4) | 8;
}

} /* extern "C" */
