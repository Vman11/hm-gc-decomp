// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B65C;
void fn_8019B178(int, int);
void fn_8022A824(int, int, int);

void fn_8022AE50(s32 param_1) {
    u32 *puVar1;

    puVar1 = *(u32 **)(param_1 + 0x9c);
    if (puVar1 != (u32 *)0x0) {
        if (puVar1[0x16] != 0) {
            fn_8022A824((int)(param_1), (int)(puVar1[0x16]), (int)(puVar1));
        }
        else {
            if ((puVar1 != (u32 *)0x0) && ((*puVar1 & 0x200) == 0)) {
                fn_8019B178((int)(*(u32 *)(lbl_8035B65C + 0xc)), (int)(puVar1));
                **(u32 **)(param_1 + 0x9c) = **(u32 **)(param_1 + 0x9c) | 0x200;
            }
        }
    }
}

} /* extern "C" */
