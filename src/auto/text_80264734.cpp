// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035B754;
extern char lbl_80366B5C[0x6];
s32 fn_8010FEDC(int, int, int, int);
s32 fn_80110444(int, int, int);
void fn_80246A30(int, int);
struct VCall_fn_80264734_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_80264734_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80264734_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_80264734(s32 *param_1, s32 param_2) {
    s32 iVar1;

    iVar1 = ((VCall_fn_80264734_0 *)(param_1))->m();
    if (iVar1 != 0) {
        ((VCall_fn_80264734_1 *)(param_1))->m();
    }
    param_1[0x2a] = *(u32 *)(param_2 + 0xc);
    if ((*(u32 *)(param_2 + 0x10) != 0) && ((u32)param_1[0x2a] != 0)) {
        iVar1 = fn_8010FEDC((int)(param_1[0x2a]), (int)(*(u32 *)(param_2 + 0x10)), (int)(lbl_80366B5C), (int)(1)); /* "MPath" */
        param_1[0x2b] = iVar1;
    }
    param_1[3] = *(u32 *)(lbl_8035B754 + 0xc);
    iVar1 = fn_80110444((int)(param_1[3]), (int)(lbl_80366B5C), (int)(0));
    param_1[4] = iVar1;
    iVar1 = param_1[0x3d];
    if ((u32)iVar1 != 0) {
        if (param_1[0x2c] == 2) {
            *(u32 *)(iVar1 + 0x10) = 1;
            fn_80246A30((int)(iVar1), (int)(0));
        }
        else {
            *(u32 *)(iVar1 + 0x10) = 0;
            fn_80246A30((int)(iVar1), (int)(0));
        }
    }
    param_1[0x26] = 0x3a;
    ((VCall_fn_80264734_2 *)(param_1))->m((s32)(param_2));
}
}
