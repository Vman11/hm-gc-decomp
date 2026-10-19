// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_80298DC0[];
extern char lbl_80298DCC[];
s32 fn_8023B8FC(int, int, int);
s32 fn_8023BC90(void *);
struct VCall_fn_8008518C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(int); };

void fn_8008518C(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023BC90(lbl_80298DC0); /* "Behavior" */
    uVar1 = fn_8023B8FC((int)(uVar1), (int)((u32)lbl_80298DCC), (int)(0xffffffff));
    *(u32 *)(param_1 + 0x20c) = uVar1;
    ((VCall_fn_8008518C_0 *)(*(s32 **)(param_1 + 0x20c)))->m((s32)(param_1));
}
}
