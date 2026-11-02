// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
struct L { s32 a; s32 b; u8 pad[0x10]; };
extern "C" void fn_801FB648(L *);
struct O {
    u8 pad[0x1c];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void f18(s32, L *);
};
extern "C" void fn_801A3260(O *o, s32 k, s32 a, s32 b) {
    L l;
    fn_801FB648(&l);
    l.a = a;
    l.b = b;
    o->f18(k, &l);
}

} /* extern "C" */
