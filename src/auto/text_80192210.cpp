// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S80192210 {
    u8 pad[292];
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
    virtual u32 state();
};

struct P80192210 {
    u32 flags;
    u8 pad4[40];
    u32 val;
    u8 pad48[56];
    virtual void m0(void *, S80192210 *, u32);
    virtual void m1(u32, S80192210 *, u32);
    virtual void m2();
    virtual void p3(); virtual void p4();
    virtual void m5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
    virtual void m10();
};

void fn_80192210(P80192210 *p, u32 a, void *b, S80192210 *s) {
    u32 st;
    if (p->flags & 1) {
        p->m10();
    }
    p->val = a;
    while ((st = s->state()) != 5) {
        p->m0(b, s, st);
    }
    p->m5();
    while ((st = s->state()) != 6) {
        p->m1(a, s, st);
    }
    p->m2();
    p->flags |= 1;
}

} /* extern "C" */
