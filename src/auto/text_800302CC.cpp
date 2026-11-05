#include "common.h"
struct PM { u32 a, b, c; };
extern "C" {
extern PM lbl_802AF9B0;
extern void *lbl_8035B65C;
void fn_80253B24(void *, void *, PM *, void *);
void fn_800302CC(void *a, void *b) {
    volatile PM *q = &lbl_802AF9B0;
    volatile PM v;
    { s32 z, x0, y; x0 = q->a; y = q->b; z = q->c; v.a = x0; v.b = y; v.c = z; }
    fn_80253B24(*(void *volatile *)&lbl_8035B65C, a, (PM *)&v, b);
}
}
