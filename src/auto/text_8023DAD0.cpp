// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_8035756C[];
extern u8 lbl_8035758C[];
extern u32 lbl_8035B460;
extern u32 lbl_8035B464;
void __dl__FPv(int);
void fn_800F8DD0(int);
void fn_8023EDE4(int);
struct VCall_fn_8023DAD0_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_8023DAD0_1 { char vptr_pad[0xc];  virtual void m(int); };
struct VCall_fn_8023DAD0_2 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8023DAD0_3 { char vptr_pad[0x10];  virtual void m(int); };
struct VCall_fn_8023DAD0_4 { char vptr_pad[0x59f8];  virtual void m(int); };

u32 * fn_8023DAD0(u32 *param_1, s16 param_2) {
    u32 iVar1;

    if (param_1 != (u32 *)0x0) {
        lbl_8035B460 = 0;
        if (param_1[4] != 0) {
            ((VCall_fn_8023DAD0_0 *)(param_1[4]))->m();
            iVar1 = param_1[4];
            if (iVar1 != 0) {
                ((VCall_fn_8023DAD0_1 *)(iVar1))->m((u32)(1));
            }
        }
        if (param_1[1] != 0) {
            ((VCall_fn_8023DAD0_2 *)(param_1[1]))->m();
            iVar1 = param_1[1];
            if (iVar1 != 0) {
                ((VCall_fn_8023DAD0_3 *)(iVar1))->m((u32)(1));
            }
        }
        if (*param_1 != 0) {
            fn_8023EDE4((int)(*param_1));
            iVar1 = *param_1;
            if (iVar1 != 0) {
                ((VCall_fn_8023DAD0_4 *)(iVar1))->m((u32)(1));
            }
        }
        fn_800F8DD0((int)(lbl_8035758C));
        fn_800F8DD0((int)(lbl_8035756C));
        lbl_8035B464 = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
