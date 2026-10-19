// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_802A84B0[];
extern u32 lbl_8035B684;
u32 fn_8023B8FC(int, int, int);
u32 fn_8023BC90(int);
struct VCall_fn_80227E2C_0 { char vptr_pad[0xc0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int, int); };
struct VCall_fn_80227E2C_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(int); };

void fn_80227E2C(u32 param_1) {
    u32 uVar1;
    u32 *piVar2;
    u8 auStack_18 [4];

    ((VCall_fn_80227E2C_0 *)(lbl_8035B684))->m((u32)(auStack_18), (u32)(0xffffffff));
    uVar1 = fn_8023BC90((int)(lbl_802A84B0)); /* "Behavior" */
    uVar1 = fn_8023B8FC((int)(uVar1), (int)(auStack_18), (int)(0xffffffff));
    *(u32 *)(param_1 + 0x20c) = uVar1;
    piVar2 = *(u32 **)(param_1 + 0x20c);
    if (piVar2 != (u32 *)0x0) {
        ((VCall_fn_80227E2C_1 *)(piVar2))->m((u32)(param_1));
    }
}
}
