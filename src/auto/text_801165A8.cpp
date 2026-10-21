// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 *fn_80110444(u32, u32, s32);
struct VCall_fn_801165A8_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32 *, s32, s32); };
struct C801165A8 { u8 pad[0x14]; s32 lo; s32 hi; };

#pragma opt_propagation off
void fn_801165A8(u32 param_1, u32 param_2, s32 param_3) {
    s32 *piVar1;
    s32 v;
    s32 m;
    s32 c;
    C801165A8 *r;
    s32 m2;
    s32 c2;
    C801165A8 *r2;

    v = param_3;
    piVar1 = fn_80110444(param_1, param_2, 0);
    if (piVar1 != 0 && (piVar1 = (s32 *)*piVar1, piVar1 != 0)) {
        r = *(C801165A8 **)piVar1;
        m = r->hi;
        c = v;
        if (c > m) {
            v = m;
        }
        r2 = *(C801165A8 **)piVar1;
        m2 = r2->lo;
        c2 = v;
        if (c2 < m2) {
            v = m2;
        }
        ((VCall_fn_801165A8_0 *)piVar1)->m(&v, 0, 1);
    }
}
#pragma opt_propagation reset

} /* extern "C" */
