// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801EF8D0(int, int, int);
struct VCall_fn_801EE480_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct VCall_fn_801EE480_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual int m(); };
struct VCall_fn_801EE480_2 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_801EE480(u32 *param_1, u32 param_2, u32 param_3) {
    u32 iVar1;

    ((VCall_fn_801EE480_0 *)(param_1))->m();
    fn_801EF8D0((int)(param_1), (int)(param_2), (int)(param_3));
    iVar1 = ((VCall_fn_801EE480_1 *)((u32 *)**(u32 **)(param_1[2] + 0xe4)))->m();
    param_1[10] = iVar1;
    if (param_1[0xd] != 0) {
        iVar1 = (param_1[0xc] != 0) ? param_1[0xc] : param_1[0xb];
        if (iVar1 != 0) {
            return;
        }
    }
    ((VCall_fn_801EE480_2 *)(param_3))->m((u32)(0x1e));
}
}
