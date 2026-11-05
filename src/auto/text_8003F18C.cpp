#include "common.h"
struct PM { u32 a, b, c; };
extern "C" {
extern const PM lbl_8029BF10;
extern void *lbl_8035B65C;
void fn_80253AD8(void *, void *, PM *, void *);
void fn_8003F18C(void *a, void *b) {
    const PM *q = &lbl_8029BF10;
    volatile PM v;
    { s32 x0, y; y = q->b; x0 = q->a; v.b = y; v.a = x0; }
    v.c = q->c;
    fn_80253AD8(*(void *volatile *)&lbl_8035B65C, a, (PM *)&v, b);
}
}
