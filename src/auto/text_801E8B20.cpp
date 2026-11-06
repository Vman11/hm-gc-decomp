// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct B801E8B20 { u8 p[0x8]; u32 f8; };
struct T801E8B20 { u32 a, b; void set(u32 v) { b = 0; a = 0; a = v; } };
struct O801E8B20 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(B801E8B20 *);
    u32 f4; s32 f8; u8 p[0x28 - 0xc]; T801E8B20 t; };
void fn_801EF9A0(O801E8B20 *, B801E8B20 *);
void fn_801E8B20(O801E8B20 *__restrict o, B801E8B20 *__restrict b) {
    if (o->f8) o->v4(b);
    fn_801EF9A0(o, b);
    o->t.set(b->f8);
}
}
