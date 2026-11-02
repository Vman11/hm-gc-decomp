// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A801E7D14 { u8 pad[8]; s32 f8; s32 fc; s32 f10; s32 f14; };
struct C801E7D14 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(A801E7D14 *a); u8 pad[0x24]; s32 f28; s32 f2c; s32 f30; s32 f34; s32 f38; };
void fn_801EF9A0(C801E7D14 *p, A801E7D14 *a);
void fn_801E7D14(C801E7D14 *__restrict p, A801E7D14 *__restrict a) { p->v4(a); fn_801EF9A0(p, a); s32 t = a->f8; p->f2c = 0; p->f28 = 0; p->f28 = t; p->f30 = a->fc; p->f34 = a->f10; p->f38 = a->f14; }

} /* extern "C" */
