// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_9C801E5F { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern "C" { extern u8 __vt__9C801E5F8C[]; void fn_8017BAF4(void *, s32); void __dt__9C801E6678Fv(void *, s32); void __dl__FPv(void *); }

void *__dt__9C801E5F8CFv(V_9C801E5F *q, s16 f) {
    if (q != NULL) {
        *(void **)((u8 *)q + 20) = __vt__9C801E5F8C;
        *(void **)((u8 *)q + 24) = __vt__9C801E5F8C + 44;
        q->m();
        fn_8017BAF4((u8 *)q + 56, -1);
        __dt__9C801E6678Fv(q, 0);
        if (f > 0) {
            __dl__FPv(q);
        }
    }
    return q;
}

} /* extern "C" */
