// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_800FAEF8(int);
struct VCall_fn_801BDD3C_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct VCall_fn_801BDD3C_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_801BDD3C_2 { char vptr_pad[0x80];  virtual void m(int, int, int); };

u32 fn_801BDD3C(s32 *param_1, s32 param_2, u32 param_3, s32 param_4) {
    u32 iVar1;

    if (*param_1 != 0) {
        ((VCall_fn_801BDD3C_0 *)(param_1))->m();
    }
    *param_1 = 1;
    param_1[0x1d] = param_2;
    fn_800FAEF8((int)(param_4));
    while (iVar1 = ((VCall_fn_801BDD3C_1 *)(param_4))->m(), iVar1 != 6) {
        ((VCall_fn_801BDD3C_2 *)(param_1))->m((s32)(iVar1), (s32)(param_3), (s32)(param_4));
    }
    return 0;
}
}
