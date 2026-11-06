// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct B801F0470 { u8 p[0x8]; u32 f8, fc, f10, f14; };
struct T801F0470 { u32 a, b; void set(u32 v) { b = 0; a = 0; a = v; } };
struct O801F0470 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(B801F0470 *);
    u8 p[0x28 - 4]; T801F0470 t; u32 f30, f34, f38; };
void fn_801EF9A0(O801F0470 *, B801F0470 *);
void fn_801F0470(O801F0470 *__restrict o, B801F0470 *__restrict b) {
    o->v4(b);
    fn_801EF9A0(o, b);
    o->t.set(b->f8);
    o->f34 = b->f10;
    o->f30 = b->fc;
    o->f38 = b->f14;
}
}
