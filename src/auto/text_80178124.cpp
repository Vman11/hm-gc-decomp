// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A1070[];
void fn_80060568(int, int, int, int);
s32 fn_8016B57C(int, int);

void fn_80178124(s32 param_1, u32 param_2) {
    u32 uVar1;

    uVar1 = fn_8016B57C((int)(param_2), (int)(*(u32 *)(param_1 + 0x14)));
    *(u32 *)(param_1 + 0x1c) = uVar1;
    if (*(u32 *)(param_1 + 0x1c) == 0) {
        fn_80060568((int)(lbl_802A1070), (int)(0), (int)(0), (int)(0)); /* "Unable to find vertex process data!" */
    }
    *(u32 *)(param_1 + 0x20) = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 0xc);
    *(u32 *)(param_1 + 0x24) = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 0x10);
}

} /* extern "C" */
