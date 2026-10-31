// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct WDD {
    u8 pad[0x80];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual u32 kind();
    u8 pad84[0x11c - 0x84]; WDD *f11c; u8 pad120[0x134 - 0x120]; WDD *f134; WDD *f138;
};

inline void fn_801DD848(WDD *p, WDD *c) {
    WDD *q;
    c->f11c = 0;
    q = p->f138;
    if (!q) {
        c->f134 = 0;
        return;
    }
    if (q == c) {
        p->f138 = q->f134;
        c->f134 = 0;
        return;
    }
    for (; q->f134; q = q->f134) {
        if (q->f134 == c) {
            q->f134 = c->f134;
            break;
        }
    }
    c->f134 = 0;
}

inline void fn_801DD8B4(WDD *p, WDD *c) {
    c->f11c = p;
    if (!p->f138) {
        p->f138 = c;
        return;
    }
    p = p->f138;
    while (p->f134) {
        if (p->f134->kind() == 0x5f) break;
        p = p->f134;
    }
    c->f134 = p->f134;
    p->f134 = c;
}

void fn_801DD63C(WDD *p, WDD *c) {
    WDD *cc = c;
    WDD *pp = p;
    if (cc->f134) {
        fn_801DD848(pp, cc);
        fn_801DD8B4(pp, cc);
    }
    if (pp->f11c) fn_801DD63C(pp->f11c, pp);
}

} /* extern "C" */
