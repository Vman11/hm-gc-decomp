// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A4558[];
void fn_80060568(int, int, int, int);

u8 fn_801F36D8(s32 param_1) {
    u8 uVar1;

    if (*(u32 *)(param_1 + 4) >= *(u32 *)(param_1 + 8)) {
        fn_80060568((int)(lbl_802A4558), (int)(0), (int)(0), (int)(0)); /* "Attempt to read past EOF." */
    }
    uVar1 = **(u8 **)(param_1 + 4);
    *(u8 **)(param_1 + 4) = *(u8 **)(param_1 + 4) + 1;
    return uVar1;
}

} /* extern "C" */
