// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801F7694(void *, void *);
struct VCall_fn_801F6A7C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

#pragma opt_propagation off
void fn_801F6A7C(s32 *param_1, s32 *param_2) {
    s32 a;
    s32 b;
    s32 c;
    s32 t;

    if (param_1[2] != 0) {
        ((VCall_fn_801F6A7C_0 *)param_1)->m();
    }
    fn_801F7694(param_1, param_2);
    a = param_2[0xd];
    b = param_2[0xe];
    param_1[0x1e] = a;
    c = param_2[0xf];
    t = param_1[0x1e];
    param_1[0x1d] = t;
    param_1[0x1f] = b;
    param_1[0x20] = c;
}
#pragma opt_propagation reset

} /* extern "C" */
