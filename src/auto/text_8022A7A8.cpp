// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B65C;
void fn_8019B048(int, int);
void fn_8022A1B0(int, int);

void fn_8022A7A8(s32 param_1) {
    s32 uVar1;
    u32 *puVar2;

    puVar2 = *(u32 **)(param_1 + 0x9c);
    if (puVar2 != (u32 *)0x0) {
        uVar1 = *puVar2 >> 9 & 1;
        if (((uVar1 != 0) && (puVar2 != (u32 *)0x0)) && ((s32)uVar1 != 0)) {
            fn_8019B048((int)(*(u32 *)(lbl_8035B65C + 0xc)), (int)(puVar2));
            **(u32 **)(param_1 + 0x9c) = **(u32 **)(param_1 + 0x9c) & 0xfffffdff;
        }
        fn_8022A1B0((int)(param_1), (int)(*(u32 *)(*(s32 *)(param_1 + 0x9c) + 0x58)));
    }
}

} /* extern "C" */
