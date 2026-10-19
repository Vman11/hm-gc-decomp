// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80361C90[0x4];
extern char lbl_80361CE4[0x8];
void fn_8023F214(int);

extern "C" {
s32 fn_8023F52C(int, void *, void *, void *, int, int);
}


extern "C" void fn_800A47D8(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_80361C90, (void *)lbl_80361C90, (void *)lbl_80361CE4, (int)(0), (int)(0)); /* "StopSfx" */
    *(u32 *)(param_1 + 0x13c) = uVar1;
    fn_8023F214((int)(param_1));
}

} /* extern "C" */
