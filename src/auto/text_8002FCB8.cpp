// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8035BC00[0x8];
s32 fn_800F6CD0(int, int);
void fn_80249A18(int);

void fn_8002FCB8(s32 param_1, u32 param_2) {
    s32 iVar1;

    fn_80249A18((int)(*(u32 *)(param_1 + 0x1c4)));
    iVar1 = fn_800F6CD0((int)(param_2), (int)(lbl_8035BC00)); /* "NEWGAME" */
    if (iVar1 != 0) {
        *(u32 *)(param_1 + 0x1c0) = 1;
    }
}

} /* extern "C" */
