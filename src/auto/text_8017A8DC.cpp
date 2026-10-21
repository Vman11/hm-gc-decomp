// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); };
struct Sub { u8 pad[0x294]; u8 t[4]; };
struct X { u32 pad0; Sub *sub; };
struct Key { u8 d[8]; };
extern "C" { void fn_800FB064(R *, void *); void *fn_800F9398(void *, void *); }

extern "C" void fn_8017A8DC(void **p, X *x, R *r) {
    Key key;
    if (*p != 0) {
        r->err(39);
    }
    fn_800FB064(r, &key);
    *p = fn_800F9398(x->sub->t, &key);
    if (*p == 0) {
        r->err(37);
    }
}

} /* extern "C" */
