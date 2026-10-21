// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801EF9A0(void *, void *);
struct VCall_fn_801EE540_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct VCall_fn_801EE540_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual s32 m(); };

#pragma opt_propagation off
void fn_801EE540(s32 *param_1, s32 *param_2) {
    s32 a;
    s32 b;

    ((VCall_fn_801EE540_0 *)param_1)->m();
    fn_801EF9A0(param_1, param_2);
    param_1[10] = ((VCall_fn_801EE540_1 *)**(u32 **)(param_1[2] + 0xe4))->m();
    a = param_2[2];
    b = param_2[3];
    param_1[0xd] = a;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xb] = b;
}
#pragma opt_propagation reset

} /* extern "C" */
