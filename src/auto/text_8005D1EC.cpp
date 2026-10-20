// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void d(s32); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };
struct S { u8 pad[728]; A *a[10]; s32 n; u8 pad2[4]; A *b; u8 pad3[36]; s32 n2; void *c[4]; };
extern "C" { extern u8 *lbl_8035B65C; extern f32 lbl_8035E438; void fn_8019AD10(void *, void *); void fn_801907D8(void *); void fn_80232B68(void *); }

void fn_8005D1EC(u8 *p) {
    S *s = (S *)p;
    s32 i;
    for (i = 0; i < s->n; i++) {
        if (s->a[i] != 0) {
            s->a[i]->m();
            if (s->a[i] != 0) {
                s->a[i]->d(1);
            }
        }
    }
    if (s->b != 0) {
        fn_8019AD10(*(void **)(lbl_8035B65C + 12), s->b);
        fn_8019AD10(*(void **)(*(u8 **)(lbl_8035B65C + 116) + 484), s->b);
        s->b->m();
        if (s->b != 0) {
            s->b->d(1);
        }
    }
    for (i = 0; i < s->n2; i++) {
        if (s->c[i] != 0) {
            fn_801907D8(s->c[i]);
        }
    }
    fn_80232B68(p);
    *(s32 *)(p + 772) = 0;
    *(s32 *)(p + 776) = 0;
    *(f32 *)(p + 780) = lbl_8035E438;
    *(s32 *)(p + 768) = 0;
    *(s32 *)(p + 728) = 0;
    *(s32 *)(p + 732) = 0;
    *(s32 *)(p + 736) = 0;
    *(s32 *)(p + 740) = 0;
    *(s32 *)(p + 744) = 0;
    *(s32 *)(p + 748) = 0;
    *(s32 *)(p + 752) = 0;
    *(s32 *)(p + 756) = 0;
    *(s32 *)(p + 760) = 0;
    *(s32 *)(p + 764) = 0;
    *(s32 *)(p + 820) = 0;
    *(s32 *)(p + 824) = 0;
    *(s32 *)(p + 828) = 0;
    *(s32 *)(p + 832) = 0;
    *(s32 *)(p + 816) = 0;
}

} /* extern "C" */
