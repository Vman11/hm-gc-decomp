// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035AE8C;
void fn_8019A7D0(int, int, int);
struct VCall_fn_8019A6CC_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_8019A6CC(s32 param_1, s32 param_2) {
    lbl_8035AE8C = lbl_8035AE8C + 1;
    fn_8019A7D0((int)(param_1), (int)(3), (int)(0));
    *(u32 *)(param_2 + 0x84) = 0;
    *(u32 *)(param_2 + 0x78) = 0;
    *(u32 *)(param_2 + 0x88) = 0;
    **(u32 **)(param_2 + 0x90) = 0;
    *(u32 *)(*(s32 *)(param_2 + 0x90) + 4) = 0;
    *(u32 *)(*(s32 *)(param_2 + 0x90) + 8) = 0;
    *(u32 *)(param_2 + 0x94) = 0;
    ((VCall_fn_8019A6CC_0 *)(*(s32 *)(param_1 + 0x40)))->m((s32)(param_2));
}
}
