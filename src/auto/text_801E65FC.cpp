// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_9C801E66 { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern "C" { extern u8 lbl_802EDB90[]; void __dt__9C801EB864Fv(void *, s32); void __dl__FPv(void *); }

void *__dt__9C801E6678Fv(V_9C801E66 *q, s16 f) {
    if (q != NULL) {
        *(void **)((u8 *)q + 20) = lbl_802EDB90;
        *(void **)((u8 *)q + 24) = lbl_802EDB90 + 44;
        q->m();
        __dt__9C801EB864Fv(q, 0);
        if (f > 0) {
            __dl__FPv(q);
        }
    }
    return q;
}

} /* extern "C" */
