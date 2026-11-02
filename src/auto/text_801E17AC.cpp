// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad[8]; s32 f8; f32 fc; f32 f10; f32 f14; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void f18(A *);
    u8 pad[0x24]; s32 f28; f32 f2c; f32 f30; f32 f34;
};
void fn_801EF9A0(O *, A *);
void fn_801E17AC(O *o, A *a) {
    o->f18(a);
    fn_801EF9A0(o, a);
    s32 x = *(volatile s32 *)&a->f8;
    f32 y = a->f10;
    o->f28 = x;
    f32 z = a->f14;
    o->f30 = y;
    f32 w = a->fc;
    o->f34 = z;
    o->f2c = w;
}

} /* extern "C" */
