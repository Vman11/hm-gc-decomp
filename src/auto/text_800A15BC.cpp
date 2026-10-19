// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80361BD4[0x4];
s32 fn_800F6CD0(int, int);
void fn_80240B50(int, int, int);

void fn_800A15BC(s32 param_1) {
    s32 iVar1;

    iVar1 = fn_800F6CD0((int)(*(u32 *)(param_1 + 0x1a4)), (int)(lbl_80361BD4));
    if (iVar1 == 0) {
        fn_80240B50((int)(param_1), (int)(*(u32 *)(param_1 + 0x1a4)), (int)(0));
    }
}

} /* extern "C" */
