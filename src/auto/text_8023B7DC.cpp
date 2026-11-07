#include "common.h"
extern "C" {
struct A59;
struct E59 { s32 f0; A59 *owner; };
struct A59 { E59 *(*alloc)(s32 n); u8 p4[0x1c - 4]; s32 size; };
A59 *fn_800F85F0(void *a, s32 b);
#pragma push
#pragma peephole off
E59 *fn_8023B7DC(void *a, s32 b, s32 n) {
    A59 *o = fn_800F85F0(a, b);
    if (o->alloc != 0) {
        E59 *r = o->alloc(n);
        if (n <= 1) {
            r->owner = o;
        } else {
            s32 i;
            u8 *q = (u8 *)r;
            for (i = 0; i < n; i++) {
                ((E59 *)q)->owner = o;
                q += o->size;
            }
        }
        return r;
    }
    return 0;
}
#pragma pop
}
