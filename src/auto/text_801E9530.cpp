// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct B801E9530 { u8 p[0x14]; u32 f14; };
struct T801E9530 { u32 a, b; void set(u32 v) { b = 0; a = 0; a = v; } };
struct O801E9530 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(B801E9530 *);
    u8 p[0x38 - 4]; T801E9530 t; };
void fn_801E0628(O801E9530 *, B801E9530 *);
void fn_801E9530(O801E9530 *__restrict o, B801E9530 *__restrict b) {
    o->v4(b);
    fn_801E0628(o, b);
    o->t.set(b->f14);
}
}
