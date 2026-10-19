// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B4EC;
void __dl__FPv(int);
void fn_80242A3C(int, int);
struct VCall_fn_80244C24_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_80244C24_1 { char vptr_pad[0x10];  virtual void m(int); };

u32 fn_80244C24(u32 param_1, s16 param_2) {
    u32 iVar1;

    if (param_1 != 0) {
        lbl_8035B4EC = 0;
        ((VCall_fn_80244C24_0 *)(param_1))->m();
        iVar1 = *(u32 *)(param_1 + 0x10);
        if (iVar1 != 0) {
            if (iVar1 != 0) {
                ((VCall_fn_80244C24_1 *)(iVar1))->m((u32)(1));
            }
        }
        *(u32 *)(param_1 + 0xc) = 0;
        *(u32 *)(param_1 + 0x10) = 0;
        fn_80242A3C((int)(param_1), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
