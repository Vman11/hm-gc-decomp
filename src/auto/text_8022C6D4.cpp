// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B65C;
void fn_8019B380(int, int);

void fn_8022C6D4(s32 param_1) {
    if ((*(u32 **)(param_1 + 0x9c) != (u32 *)0x0) && ((**(u32 **)(param_1 + 0x9c) & 2) != 0)) {
        fn_8019B380((int)(*(u32 *)(lbl_8035B65C + 0xc)), (int)(*(u32 **)(param_1 + 0x9c)));
        **(u32 **)(param_1 + 0x9c) = **(u32 **)(param_1 + 0x9c) & 0xfffffffd;
    }
    *(u32 *)(param_1 + 0xb4) = *(u32 *)(param_1 + 0xb4) & 0xfffffff7;
}

} /* extern "C" */
