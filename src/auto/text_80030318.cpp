#include "common.h"
struct F { u32 a, b, c; F(const F &o) { u32 y = o.b, x = o.a; *(volatile u32*)&b = y; *(volatile u32*)&a = x; *(volatile u32*)&c = *(const volatile u32*)&o.c; } };
extern "C" {
extern const F lbl_8029BF10;
extern void *lbl_8035B65C;
void fn_80253AD8(void *, void *, F, void *);
void fn_80030318(void *a, void *b) {
    fn_80253AD8(*(void*volatile*)&lbl_8035B65C, a, lbl_8029BF10, b);
}
}
