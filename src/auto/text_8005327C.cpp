// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80242210(int);
struct VCall_fn_8005327C_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(int); };

void fn_8005327C(u32 param_1) {
    u32 iVar1;

    iVar1 = *(u32 *)(param_1 + 0x158);
    if (iVar1 != 0) {
        if (iVar1 != 0) {
            ((VCall_fn_8005327C_0 *)(iVar1))->m((u32)(1));
        }
        *(u32 *)(param_1 + 0x158) = 0;
    }
    fn_80242210((int)(param_1));
}
}
