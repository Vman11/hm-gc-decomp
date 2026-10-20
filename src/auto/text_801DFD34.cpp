// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801DFDC8 { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern "C" { extern u8 __vt__9C801DFDC8[]; void fn_8017AD60(void *, s32); void __dt__9C80031B94Fv(void *, s32); void __dt__9C801EB864Fv(void *, s32); void __dl__FPv(void *); }

void *__dt__9C801DFDC8Fv(V_801DFDC8 *q, s16 f) {
    if (q != NULL) {
        *(void **)((u8 *)q + 20) = __vt__9C801DFDC8;
        *(void **)((u8 *)q + 28) = __vt__9C801DFDC8 + 44;
        q->m();
        fn_8017AD60((u8 *)q + 52, -1);
        __dt__9C80031B94Fv((u8 *)q + 24, 0);
        __dt__9C801EB864Fv(q, 0);
        if (f > 0) {
            __dl__FPv(q);
        }
    }
    return q;
}

} /* extern "C" */
