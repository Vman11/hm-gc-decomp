// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A801E3F70 { u8 pad[8]; s32 f8; };
struct C801E3F70 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(A801E3F70 *a); u8 pad[0x24]; s32 f28; s32 f2c; };
void fn_801EF9A0(C801E3F70 *p, A801E3F70 *a);
static inline void clr(C801E3F70 *p) { p->f2c = 0; p->f28 = 0; }
static inline void clr2(C801E3F70 *p, s32 t) { p->f2c = 0; p->f28 = 0; p->f28 = t; }
void fn_801E3F70(C801E3F70 *__restrict p, A801E3F70 *__restrict a) { p->v4(a); fn_801EF9A0(p, a); s32 t = a->f8; clr(p); p->f28 = t; }

} /* extern "C" */
