// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035A9F0;
void fn_800F7894(int, int);

void fn_80060EBC(s32 param_1) {
    if (*(u32 *)(param_1 + 0x34e8) != 0) {
        fn_800F7894((int)(lbl_8035A9F0), (int)(*(u32 *)(param_1 + 0x34e8)));
    }
    if (*(u32 *)(param_1 + 0x34e0) != 0) {
        fn_800F7894((int)(lbl_8035A9F0), (int)(*(u32 *)(param_1 + 0x34e0)));
    }
}

} /* extern "C" */
