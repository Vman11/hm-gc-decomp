#include "common.h"
extern "C" {
typedef struct { u32 a, b, c; } T12;
void fn_8010904C(void *, void *, T12 *, s32, void *);
extern u8 *lbl_8035B684;
void fn_80253AD8(void *p, void *a, T12 *t, void *d) {
    volatile T12 *q = t;
    volatile T12 v;
    { u32 z, y, x; x = q->a; y = q->b; z = q->c; v.a = x; v.b = y; v.c = z; }
    fn_8010904C(*(u8 *volatile *)&lbl_8035B684 + 0x88, a, (T12 *)&v, -1, d);
}
}
