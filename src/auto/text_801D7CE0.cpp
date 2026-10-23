// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O801D7CE0;
struct H801D7CE0 {
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14();
    virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19();
    virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24();
    virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29();
    virtual void f30(); virtual void f31(); virtual void f32();
    virtual s32 f33(O801D7CE0 *o, s32 a);
};
struct N801D7CE0 { H801D7CE0 *h; s32 active; N801D7CE0 *next; };
struct C801D7CE0 {
    u8 pad[128];
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14();
    virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19();
    virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24();
    virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29();
    virtual void f30(); virtual void f31(); virtual void f32(); virtual void f33(); virtual void f34();
    virtual void f35(); virtual void f36(); virtual void f37(); virtual void f38(); virtual void f39();
    virtual void f40(); virtual void f41(); virtual void f42(); virtual void f43(); virtual void f44();
    virtual void f45(); virtual void f46(); virtual void f47(); virtual void f48(); virtual void f49();
    virtual void f50(); virtual void f51(); virtual void f52(); virtual void f53(); virtual void f54();
    virtual void f55(); virtual void f56();
    virtual void f57(s32 a, s32 b);
};
struct D801D7CE0 {
    u8 pad[52];
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5();
    virtual void f6(s32 a, void *b);
};
struct O801D7CE0 {
    u8 pad[104];
    void *f104;
    u8 pad108[4];
    D801D7CE0 *f112;
    u8 pad116[136 - 116];
    N801D7CE0 *list;
    u8 pad140[284 - 140];
    C801D7CE0 *f284;
};

s32 fn_801D7CE0(O801D7CE0 *p, s32 a, s32 b) {
    s32 fail;
    N801D7CE0 *n;
    fail = 0;
    for (n = p->list; n != 0; n = n->next) {
        if (n->active != 0) {
            if (n->h->f33(p, a) == 0) fail = 1;
        }
    }
    if (fail) return 0;
    if (p->f284) p->f284->f57(a, b);
    if (b != 0 && p->f112) p->f112->f6(16, p->f104);
    fail = 0;
    for (n = p->list; n != 0; n = n->next) {
        if (n->active == 0) {
            if (n->h->f33(p, a) == 0) fail = 1;
        }
    }
    return fail ? 0 : 0;
}

} /* extern "C" */
