// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B {
    virtual void v0();
    virtual void v1();
    virtual int v2();
};
struct A {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(int, int, int, B **);
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(B *);
};
struct P {
    u8 pad[4];
    A *a;
};
static inline int conv(int r) {
    if (r == 7) r = 7;
    return r;
}
static inline void rel(A *a, B *b) {
    if (a) a->v9(b);
}
int fn_80215154(P *p, int a, int b, int c) {
    B *local;
    int r;
    r = conv(p->a->v5(a, b, c, &local));
    if (r == 7) {
        r = local->v2();
        rel(p->a, local);
    }
    return r;
}

} /* extern "C" */
