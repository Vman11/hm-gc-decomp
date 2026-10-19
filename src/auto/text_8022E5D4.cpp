// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B330;
void __dl__FPv(int);
void fn_8022F2A0(int);
void fn_8022F3B0(int, int);
void fn_80233CE8(int);
void fn_80233DEC(int, int);
void fn_802356C8(int);
void fn_80235728(int, int);
void fn_80236628(int);
void fn_80236808(int, int);
void fn_80270320(int);
void fn_802707E8(int, int);
struct VCall_fn_8022E5D4_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8022E5D4_1 { char vptr_pad[0x10];  virtual void m(int); };

u32 * fn_8022E5D4(u32 *param_1, s16 param_2) {
    u32 iVar1;

    if (param_1 != (u32 *)0x0) {
        if (*param_1 != 0) {
            ((VCall_fn_8022E5D4_0 *)(*param_1))->m();
            iVar1 = *param_1;
            if (iVar1 != 0) {
                ((VCall_fn_8022E5D4_1 *)(iVar1))->m((u32)(1));
            }
        }
        if (param_1[1] != 0) {
            fn_80233CE8((int)(param_1[1]));
            fn_80233DEC((int)(param_1[1]), (int)(1));
        }
        if (param_1[2] != 0) {
            fn_8022F2A0((int)(param_1[2]));
            fn_8022F3B0((int)(param_1[2]), (int)(1));
        }
        if (param_1[3] != 0) {
            fn_80270320((int)(param_1[3]));
            fn_802707E8((int)(param_1[3]), (int)(1));
        }
        if (param_1[5] != 0) {
            fn_80236628((int)(param_1[5]));
            fn_80236808((int)(param_1[5]), (int)(1));
        }
        if (param_1[6] != 0) {
            fn_802356C8((int)(param_1[6]));
            fn_80235728((int)(param_1[6]), (int)(1));
        }
        lbl_8035B330 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
