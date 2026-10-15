/* Functions from 0x8022D694 to 0x8022D6FC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8022D694(void *arg0) {
    struct A {
        u8 pad[0xA0];
        void *a0;
        u8 pad2[0x0C];
        s32 b0;
        u8 pad3[4];
        void *b8;
    } *a = arg0;
    struct B {
        u8 pad[8];
        s32 index;
        void *c;
        u8 pad2[4];
    } *b;
    struct C {
        u8 pad[0xA0];
        void *a0;
    } *c;
    struct D {
        u8 pad[0xB0];
        void *b0;
    } *d;
    void *p;

    b = a->b8;
    if (b != 0) {
        p = b->c;
        if (p != 0) {
            c = p;
            p = c->a0;
            if (p != 0) {
                d = p;
                return (s32)((u8 *)d->b0 + b->index * 0x3C);
            }
        }
        return 0;
    }
    p = a->a0;
    if (p != 0) {
        d = p;
        return (s32)((u8 *)d->b0 + a->b0 * 0x3C);
    }
    return 0;
}
