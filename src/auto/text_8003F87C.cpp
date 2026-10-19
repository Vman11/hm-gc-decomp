// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80294F10[];
extern u8 lbl_8035C250[0x4];
void fn_80040CD8(int);

extern "C" {
s32 fn_8023F52C(int, void *, void *, void *, int, int);
}


extern "C" void fn_8003F87C(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_8035C250, (void *)lbl_8035C250, (void *)lbl_80294F10, (int)(1), (int)(0)); /* "rFakeSinkSpeed" */
    *(u32 *)(param_1 + 0x178) = uVar1;
    fn_80040CD8((int)(param_1));
}

} /* extern "C" */
