// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_803644FC;
void fn_8012008C(void);
void fn_80152AD4(void);
void fn_8015A8B8(int);
struct VCall_fn_8014D614_0 { char vptr_pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };
struct VCall_fn_8014D614_1 {  virtual int m(); };
struct VCall_fn_8014D614_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };

void fn_8014D614(s32 param_1, u32 param_2) {
    u32 uVar1;

    fn_8012008C();
    fn_80152AD4();
    ((VCall_fn_8014D614_0 *)(param_1))->m((s32)(param_2));
    fn_8015A8B8((int)(param_1 + 0x78));
    *(s32 *)(param_1 + 0x10) = param_1 + 0x78;
    uVar1 = ((VCall_fn_8014D614_1 *)(*(s32 **)(param_1 + 0x10)))->m();
    *(u32 *)(param_1 + 0x14) = uVar1;
    uVar1 = ((VCall_fn_8014D614_2 *)(*(s32 **)(param_1 + 0x10)))->m();
    *(u32 *)(param_1 + 0x18) = uVar1;
    *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) | lbl_803644FC;
}
}
