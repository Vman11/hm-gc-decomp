#include "common.h"
extern "C" {
struct A59;
struct E59 { s32 f0; A59 *owner; };
struct A59 { E59 *(*alloc)(s32 n); u8 p4[0x1c - 4]; s32 size; };
A59 *fn_800F85F0(void *a, s32 b);
E59 *fn_8023B7DC(void *a, s32 b, s32 n) {
    A59 *o = fn_800F85F0(a, b);
    if (o->alloc != 0) {
        E59 *r = o->alloc(n);
        if (n <= 1) {
            r->owner = o;
        } else {
            E59 *q = r;
            for (s32 i = 0; i < n; i++) {
                q->owner = o;
                q = (E59 *)((u8 *)q + o->size);
            }
        }
        return r;
    }
    return 0;
}
}
