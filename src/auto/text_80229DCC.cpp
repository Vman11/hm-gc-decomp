// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A8590[];
extern s32 lbl_8035B65C;
s32 fn_801104C0(int, int, int, int);

void fn_80229DCC(s32 param_1) {
    u32 uVar1;

    *(s32 *)(param_1 + 0xc) = lbl_8035B65C + 0x90;
    uVar1 = fn_801104C0((int)(*(s32 *)(param_1 + 0xc)), (int)(lbl_802A8590), (int)(*(s32 *)(param_1 + 0xc) + 8), (int)(0)); /* "NearTrgr" */
    *(u32 *)(param_1 + 0x10) = uVar1;
}

} /* extern "C" */
