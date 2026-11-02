// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A801E7008 { u8 pad[8]; s32 f8; };
struct C801E7008 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(A801E7008 *a); s32 f4; s32 f8; u8 pad[0x1c]; s32 f28; s32 f2c; };
void fn_801EF9A0(C801E7008 *p, A801E7008 *a);
void fn_801E7008(C801E7008 *__restrict p, A801E7008 *__restrict a) { if (p->f8 != 0) p->v4(a); fn_801EF9A0(p, a); s32 t = a->f8; p->f2c = 0; p->f28 = 0; p->f28 = t; }

} /* extern "C" */
