// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029AFC0[];
extern u8 lbl_80361FDC[0x4];
void fn_8023F214(int);

extern "C" {
s32 fn_8023F52C(int, void *, void *, void *, int, int);
}


extern "C" void fn_800A850C(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_80361FDC, (void *)lbl_80361FDC, (void *)lbl_8029AFC0, (int)(1), (int)(0)); /* "BeamDamage" */
    *(u32 *)(param_1 + 0x124) = uVar1;
    fn_8023F214((int)(param_1));
}

} /* extern "C" */
