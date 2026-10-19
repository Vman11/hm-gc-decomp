// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A8210[];
void fn_80241DD0(int, int, int, int, int, int);

void fn_802227F0(u32 param_1) {
    u32 iVar1;

    if ((*(u32 *)(param_1 + 8) != 0) && (iVar1 = *(u32 *)(*(u32 *)(param_1 + 8) + 0x20c), iVar1 != 0))
    {
        fn_80241DD0((int)(iVar1), (int)(lbl_802A8210), (int)(0), (int)(0), (int)(0), (int)(0)); /* "ANIMLOOP" */
    }
}

} /* extern "C" */
