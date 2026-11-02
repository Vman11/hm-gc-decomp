// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
struct T { virtual void v0(); virtual void v1(); virtual s32 f10(); };
struct S {
    u8 pad[0x10];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual s32 f20(s32, s32, T **); virtual void v7(); virtual void v8(); virtual void f2c(T *);
};
struct O { u8 pad[4]; S *s; };
extern "C" s32 fn_80210830(O *o, s32 a, s32 b) {
    T *t;
    s32 r = o->s->f20(a, b, &t);
    if (r == 7) {
        r = t->f10();
        o->s->f2c(t);
        return r;
    }
    return r;
}

} /* extern "C" */
