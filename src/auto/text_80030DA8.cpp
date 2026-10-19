// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801808D0(int, int);
void fn_80253FC0(int);
struct VCall_fn_80030DA8_0 { char vptr_pad[0x74]; virtual void p0(); virtual void m(); };
struct VCall_fn_80030DA8_1 { char vptr_pad[0xa4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(); };

void fn_80030DA8(s32 param_1) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        if (*(u32 *)(param_1 + 0xc) != 0) {
            fn_801808D0((int)(*(u32 *)(param_1 + 0x14)), (int)(*(u32 *)(param_1 + 0xc)));
        }
        ((VCall_fn_80030DA8_0 *)(*(u32 *)(param_1 + 0x14)))->m();
    }
    if (*(u32 *)(param_1 + 0x10) != 0) {
        ((VCall_fn_80030DA8_1 *)(*(u32 *)(param_1 + 0x10)))->m();
    }
    fn_80253FC0((int)(param_1));
}
}
