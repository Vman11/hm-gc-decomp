// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295678[];
extern char lbl_80295684[];
extern u8 lbl_8035CB10[0x8];
void fn_8023F214(int);

extern "C" {
s32 fn_8023F52C(int, void *, void *, void *, int, int);
}


extern "C" void fn_80044B00(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_8035CB10, (void *)lbl_8035CB10, (void *)lbl_80295678, (int)(0), (int)(0)); /* "FiredSound" */
    *(u32 *)(param_1 + 0x118) = uVar1;
    uVar1 = fn_8023F52C((int)(param_1), (void *)lbl_8035CB10, (void *)lbl_8035CB10, (void *)lbl_80295684, (int)(0), (int)(0)); /* "HitSound" */
    *(u32 *)(param_1 + 0x11c) = uVar1;
    fn_8023F214((int)(param_1));
}

} /* extern "C" */
