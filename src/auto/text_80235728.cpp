#include "common.h"

extern "C" {

extern s32 lbl_8035B388;
void fn_8024B580(void);
void __dl__FPv(void *);
void fn_800E1F04(void *, void (*)(void), u32, u32);
struct E80235728 { u8 b[0xc4]; };
void fn_8024AFF8(E80235728 *);
struct S80235728 { u32 f0; E80235728 arr[4]; };

S80235728 *fn_80235728(S80235728 *p, s16 f) {
    s32 i;
    S80235728 *q;

    if (p != 0) {
        lbl_8035B388 = i = 0;
        q = p;
        for (; i < 4; i++) {
            fn_8024AFF8(q->arr);
            q = (S80235728 *)((u8 *)q + 0xc4);
        }
        p->f0 = 0;
        fn_800E1F04(p->arr, fn_8024B580, 0xc4, 4);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
