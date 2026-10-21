// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_9C801EAE { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); void *v2; };
extern "C" { extern u8 __vt__9C801EAE64[]; void fn_80196598(void *, s32); void __dt__9C801EB864Fv(void *, s32); void __dl__FPv(void *); }

void *__dt__9C801EAE64Fv(V_9C801EAE *q, s16 f) {
    if (q != NULL) {
        *(void **)((u8 *)q + 20) = __vt__9C801EAE64;
        q->v2 = __vt__9C801EAE64 + 44;
        q->m();
        fn_80196598(&q->v2, 0);
        __dt__9C801EB864Fv(q, 0);
        if (f > 0) {
            __dl__FPv(q);
        }
    }
    return q;
}

} /* extern "C" */
