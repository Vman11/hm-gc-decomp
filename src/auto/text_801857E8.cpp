// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035AEA8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
void fn_801A1060(int, int, int, int);
struct VCall_fn_801857E8_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

void fn_801857E8(u32 *param_1, u32 param_2, u32 param_3) {
    u32 uVar1;

    if ((*param_1 & 1) != 0) {
        ((VCall_fn_801857E8_0 *)(param_1))->m();
    }
    param_1[0x24] = param_2;
    fn_801A1060((int)(param_1), (int)(param_2), (int)(param_3), (int)(0));
    param_1[0x25] = *(u32 *)(param_3 + 0x94);
    if (lbl_8035AEA8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AEA8));
    uVar1 = __nwa__FUl((int)(param_1[0x25] << 2));
    param_1[0x27] = uVar1;
    fn_800F7E98();
    if (param_1[0x27] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    param_1[0x26] = 0;
}
}
