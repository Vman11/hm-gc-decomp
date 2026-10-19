// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B308;
extern u32 lbl_8035B65C;
void fn_80238404(int, int, int);
void __ct__9C80253F24Fiiii(int, int, int, int, int);
struct VCall_fn_8022FA58_0 { char vptr_pad[0x2f0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void m(int, int, int); };

void fn_8022FA58(u32 param_1, u32 param_2, u32 param_3) {
    if (param_2 == *(u32 *)(lbl_8035B308 + 0x48)) {
        ((VCall_fn_8022FA58_0 *)(lbl_8035B65C))->m((u32)(param_1 + 0x254), (u32)(param_2), (u32)(0));
        __ct__9C80253F24Fiiii((int)(lbl_8035B65C), (int)(param_1 + 0x254), (int)(param_2), (int)(0), (int)(0));
    }
    fn_80238404((int)(param_1), (int)(param_2), (int)(param_3));
}
}
