// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80294804[];
extern u32 lbl_8035B754;
void fn_800320A0(int, int);
u32 fn_80110444(int, int, int);

void fn_8003215C(u32 param_1) {
    u32 iVar1;

    iVar1 = fn_80110444((int)(*(u32 *)(lbl_8035B754 + 0xc)), (int)(lbl_80294804), (int)(0)); /* "Materials" */
    if ((iVar1 != 0) && (*(u32 *)(iVar1 + 0x10) != 0)) {
        fn_800320A0((int)(param_1), (int)(*(u32 *)(iVar1 + 0x10)));
    }
}

} /* extern "C" */
