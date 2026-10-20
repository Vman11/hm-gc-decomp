// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801DE4E0 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
extern "C" { extern u8 lbl_802ED368[]; void fn_801B2C64(void *); void fn_801B2CBC(void *, s32); void __dl__FPv(void *); }

void *__dt__9C801DE4E0Fv(V_801DE4E0 *q, s16 f) {
    if (q != NULL) {
        *(void **)((u8 *)q + 16) = lbl_802ED368;
        fn_801B2C64(q);
        q->m();
        fn_801B2CBC(q, 0);
        if (f > 0) {
            __dl__FPv(q);
        }
    }
    return q;
}

} /* extern "C" */
