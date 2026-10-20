// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_9C801EA5 { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern "C" { extern u8 lbl_802EDF90[]; void __dt__9C801DFDC8Fv(void *, s32); void __dl__FPv(void *); }

void *__dt__9C801EA59CFv(V_9C801EA5 *q, s16 f) {
    if (q != NULL) {
        *(void **)((u8 *)q + 20) = lbl_802EDF90;
        *(void **)((u8 *)q + 28) = lbl_802EDF90 + 44;
        q->m();
        __dt__9C801DFDC8Fv(q, 0);
        if (f > 0) {
            __dl__FPv(q);
        }
    }
    return q;
}

} /* extern "C" */
