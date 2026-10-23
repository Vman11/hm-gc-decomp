// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct R {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void set(u32);
};
struct Q {
    u8 pad[48];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual R *get();
};
struct H {
    u8 pad[16];
    u32 f16;
    u32 f20;
    u8 pad2[36 - 24];
    virtual void v0(); virtual void v1();
    virtual ~H();
};
struct S44 { u32 f0; Q *f4; };
struct P { u32 flags; u8 pad[40]; S44 *f44; H *f48; };
extern "C" {
void fn_80190E48(P *p) {
    if (p->f48 != 0 && (p->flags & 8)) {
        R *r = p->f44->f4->get();
        r->set(p->f48->f16);
        r->set(p->f48->f20);
        delete p->f48;
        p->flags &= ~8;
    }
    p->f48 = 0;
}

} /* extern "C" */
