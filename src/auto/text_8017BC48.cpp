// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A1098[];
void fn_80060568(int, int, int, int);

s32 fn_8017BC48(s32 param_1, s32 param_2) {
    s32 iVar1;

    if (*(u32 *)(param_1 + 4) == 0) {
        iVar1 = *(u32 *)(param_2 + 0x30);
    }
    else {
        if (*(u32 *)(param_2 + 0xa8) == 0) {
            fn_80060568((int)(lbl_802A1098), (int)(0), (int)(0), (int)(0)); /* "Atlas Scene: Node type must have csys DB for bounding geometry" */
        }
        iVar1 = *(u32 *)(*(u32 *)(param_2 + 0xa8) + 0x24) + (*(u32 *)(param_1 + 4) + -1) * 0x28;
    }
    return iVar1;
}

} /* extern "C" */
