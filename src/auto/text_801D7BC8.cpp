// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct L801D7BC8 {
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29(); virtual void f30(); virtual void f31(); virtual void f32(); virtual void f33();
    virtual s32 Handle(void *owner, void *a, void *b);
};

struct D801D7BC8 {
    u8 pad[128];
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25(); virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29(); virtual void f30(); virtual void f31(); virtual void f32(); virtual void f33(); virtual void f34(); virtual void f35(); virtual void f36(); virtual void f37(); virtual void f38(); virtual void f39(); virtual void f40(); virtual void f41(); virtual void f42(); virtual void f43(); virtual void f44(); virtual void f45(); virtual void f46(); virtual void f47(); virtual void f48(); virtual void f49(); virtual void f50(); virtual void f51(); virtual void f52(); virtual void f53(); virtual void f54(); virtual void f55(); virtual void f56(); virtual void f57();
    virtual void Default(void *a, void *b);
};

struct N801D7BC8 {
    L801D7BC8 *obj;
    s32 pre;
    N801D7BC8 *next;
};

struct O801D7BC8 {
    u8 pad[136];
    N801D7BC8 *list;
    u8 pad8C[284 - 140];
    D801D7BC8 *def;
};

s32 fn_801D7BC8(O801D7BC8 *o, void *a, void *b) {
    s32 stop = 0;
    N801D7BC8 *n;
    for (n = o->list; n != 0; n = n->next) {
        if (n->pre != 0 && n->obj->Handle(o, a, b) == 0) stop = 1;
    }
    if (stop) return 0;
    if (o->def != 0) o->def->Default(a, b);
    stop = 0;
    for (n = o->list; n != 0; n = n->next) {
        if (n->pre == 0 && n->obj->Handle(o, a, b) == 0) stop = 1;
    }
    return stop ? 0 : 0;
}

} /* extern "C" */
