// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EC760[];
extern char lbl_80365154[0x4];
extern char lbl_80365158[0x6];
void fn_80060E30(...);
struct VCall_fn_801CE888_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void m(u8 *, s32, s32); };
void fn_801CE68C(u8 *, u32, VCall_fn_801CE888_1 *, u32);
struct C80215F50 { u8 pad[0x2c]; VCall_fn_801CE888_1 *x2c; u8 pad2[0x38 - 0x30]; C80215F50(); ~C80215F50(); };
void fn_80215BFC(C80215F50 *);
s32 fn_80215C84(C80215F50 *, u32, char *, s32, s32);
struct VCall_fn_801CE888_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

u32 fn_801CE888(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    s32 iVar1;
    VCall_fn_801CE888_1 *o;
    C80215F50 lobj0;

    if (*(s32 *)(param_1 + 0x18) != 0) {
        ((VCall_fn_801CE888_0 *)param_1)->m();
    }
    iVar1 = fn_80215C84(&lobj0, param_3, lbl_80365154, 2, 0);
    if (iVar1 != 0) {
        fn_80060E30(iVar1, lbl_80365158, param_3, lbl_80365154);
    }
    o = lobj0.x2c;
    o->m(lbl_802EC760, 0x53, 0);
    fn_801CE68C(param_1, param_2, o, param_5);
    fn_80215BFC(&lobj0);
    *(u32 *)(param_1 + 0x18) = 1;
    return 0;
}

} /* extern "C" */
