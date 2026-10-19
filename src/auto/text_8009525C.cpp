// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80299BE8[];
extern u8 lbl_80360FB4[0x4];
extern char lbl_80360FB8[0x6];
void fn_8023F214(int);

extern "C" {
s32 fn_8023F52C(int, void *, void *, void *, int, int);
}


extern "C" void fn_8009525C(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_80360FB4, (void *)lbl_80360FB4, (void *)lbl_80299BE8, (int)(0), (int)(0)); /* "StartActive" */
    *(u32 *)(param_1 + 0x13c) = uVar1;
    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_80360FB4, (void *)lbl_80360FB4, (void *)lbl_80360FB8, (int)(0), (int)(0)); /* "Pulse" */
    *(u32 *)(param_1 + 0x140) = uVar1;
    fn_8023F214((int)(param_1));
}

} /* extern "C" */
