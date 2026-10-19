// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035AC08;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
void fn_8013EBAC(int, int, int);
struct VCall_fn_80131F2C_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(); };
struct VCall_fn_80131F2C_1 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(int); };
struct VCall_fn_80131F2C_2 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(); };
struct VCall_fn_80131F2C_3 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(int); };
struct VCall_fn_80131F2C_4 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(); };

void fn_80131F2C(u32 *param_1, u32 param_2, u32 *param_3) {
    u32 iVar1;

    if (param_1[2] != 0) {
        ((VCall_fn_80131F2C_0 *)(param_1))->m();
    }
    iVar1 = *param_3;
    param_1[6] = param_3[6];
    if (iVar1 != 0) {
        fn_8013EBAC((int)(param_1 + 7), (int)(param_2), (int)iVar1);
    }
    if (param_3[1] != 0) {
        *param_1 = param_3[1];
        ((VCall_fn_80131F2C_1 *)(param_1))->m((u32)(param_2));
    }
    if (param_3[2] != 0) {
        param_1[0xd] = param_3[2];
        ((VCall_fn_80131F2C_2 *)(param_1))->m();
    }
    if (param_3[3] != 0) {
        param_1[1] = param_3[3];
        ((VCall_fn_80131F2C_3 *)(param_1))->m((u32)(param_2));
    }
    if (param_3[4] != 0) {
        param_1[2] = param_3[4];
        ((VCall_fn_80131F2C_4 *)(param_1))->m();
    }
    if (param_3[5] != 0) {
        param_1[3] = param_3[5];
        if (lbl_8035AC08 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035AC08));
        param_1[4] = __nwa__FUl((int)(param_1[3] << 4));
        fn_800F7E98();
        if (param_1[4] == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
    }
}
}
