// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_8032C2D0[];
extern u8 lbl_8035AC30[0x4];
extern u8 lbl_8035AC34[0x4];
void fn_801472C8(int, int, int, int, int);
struct VCall_fn_80129168_0 { char vptr_pad[0x20]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int, int, int); };

void fn_80129168(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    fn_801472C8((int)(lbl_8032C2D0), (int)(param_2), (int)(param_1), (int)(param_3), (int)(param_4));
    ((VCall_fn_80129168_0 *)(param_1))->m((s32)(lbl_8035AC30), (s32)(lbl_8035AC34), (s32)(2));
}
}
