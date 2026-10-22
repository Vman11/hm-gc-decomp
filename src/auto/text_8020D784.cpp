// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct B { u8 pad[68]; char name[32]; };
struct X { u8 pad[8]; u32 f8; };
struct S1724 { void *f0; };
struct A {
    u8 pad[1720];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual s32 s14();
    virtual X *s15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual s32 s19();
    virtual B *s20();
    S1724 *f1724;
};
extern "C" {
void fn_800FA474(char *, char *, s32);
void *fn_800D315C(void *, char *);
s32 fn_8020B114(void *);

s32 fn_8020D784(A *a, B *b) {
    char buf[32];
    s32 r;
    if (a->s14()) {
        fn_800FA474(b->name, buf, 31);
        if (b == a->s20() && (r = a->s19()) != 0) {
            return r;
        }
        return fn_8020B114(fn_800D315C(a->f1724->f0, buf));
    }
    {
        X *x = a->s15();
        r = 12;
        if (x->f8 & 2) {
            r = 11;
        }
    }
    return r;
}

} /* extern "C" */
