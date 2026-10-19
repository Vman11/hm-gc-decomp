// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_80357AE0[];
extern s32 lbl_8035B6E8;
struct VCall_fn_80076DFC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(int, int, int, int, int); };

void fn_80076DFC(u32 param_1, s32 *param_2) {
    if (param_2 != (s32 *)0x0) {
        ((VCall_fn_80076DFC_0 *)(param_2))->m((s32)(0), (s32)(lbl_80357AE0), (s32)(0), (s32)(0), (s32)(0));
        lbl_8035B6E8 = 1;
    }
}
}
