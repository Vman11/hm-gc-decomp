// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_80364DA0;
void fn_801A32FC(void);
void fn_801FB648(int);
void fn_802006CC(int);
struct VCall_fn_801A3BEC_0 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(int); };
struct VCall_fn_801A3BEC_1 {  virtual int m(); };
struct VCall_fn_801A3BEC_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_801A3BEC_3 { virtual void p0(); virtual int m(); };
struct VCall_fn_801A3BEC_4 { char vptr_pad[0x4]; virtual void p0(); virtual void m(int); };

void fn_801A3BEC(u32 param_1, u32 *param_2) {
    u32 uVar1;
    u8 auStack_28 [32];

    fn_801A32FC();
    if ((s32)*param_2 != 0) {
        ((VCall_fn_801A3BEC_0 *)(param_1))->m((u32)(param_2));
        fn_802006CC((int)(param_1 + 0x20));
        *(s32 *)(param_1 + 0xc) = param_1 + 0x20;
        uVar1 = ((VCall_fn_801A3BEC_1 *)(*(u32 **)(param_1 + 0xc)))->m();
        *(u32 *)(param_1 + 0x10) = uVar1;
        uVar1 = ((VCall_fn_801A3BEC_2 *)(*(u32 **)(param_1 + 0xc)))->m();
        *(u32 *)(param_1 + 0x18) = uVar1;
        uVar1 = ((VCall_fn_801A3BEC_3 *)(*(u32 **)(param_1 + 0xc)))->m();
        *(u32 *)(param_1 + 0x14) = uVar1;
        fn_801FB648((int)(auStack_28));
        ((VCall_fn_801A3BEC_4 *)(*(u32 *)(param_1 + 0x14)))->m((u32)(auStack_28))
        ;
        *(u32 *)(param_1 + 4) = *(u32 *)(param_1 + 4) | lbl_80364DA0;
    }
}
}
