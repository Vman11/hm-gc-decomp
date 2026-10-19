// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801399F4(int, int, int, int);
struct VCall_fn_80139584_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void m(int, int); };
struct VCall_fn_80139584_1 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

void fn_80139584(u32 param_1, u32 param_2, u32 param_3) {
    u8 auStack_88 [108];

    ((VCall_fn_80139584_0 *)(param_1))->m((u32)(auStack_88), (u32)(4));
    fn_801399F4((int)(param_1), (int)(param_2), (int)(param_3), (int)(auStack_88));
    ((VCall_fn_80139584_1 *)(param_1))->m();
}
}
