// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X { virtual int f(); };
struct B { u32 f0; X *x; };
struct O { u8 p[16]; void *f10; u8 q[36 - 20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); u8 r[64 - 40]; B *b; };
void fn_80104F78(O *, int, int);
void fn_801FC99C(O *o, B *b) {
    if (o->f10) o->v3();
    o->b = b;
    X *x = b->x;
    fn_80104F78(o, x->f(), b->x->f());
}

} /* extern "C" */
