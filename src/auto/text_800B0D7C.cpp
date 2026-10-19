// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029BAA4[];
extern char lbl_8029BAB4[];
extern u8 lbl_80362D34[0x4];
void fn_8023F214(int);

extern "C" {
s32 fn_8023F52C(int, void *, void *, void *, int, int);
}


extern "C" void fn_800B0D7C(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_80362D34, (void *)lbl_80362D34, (void *)lbl_8029BAA4, (int)(1), (int)(0)); /* "aAttachActor" */
    *(u32 *)(param_1 + 0x118) = uVar1;
    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_80362D34, (void *)lbl_80362D34, (void *)lbl_8029BAB4, (int)(1), (int)(0)); /* "aAttachBone" */
    *(u32 *)(param_1 + 0x11c) = uVar1;
    fn_8023F214((int)(param_1));
}

} /* extern "C" */
