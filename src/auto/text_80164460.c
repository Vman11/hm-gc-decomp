// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 r, g, b, a; } C;
typedef struct { u8 pad[0x1a98]; void *p[1]; } O;
void fn_800D7A00(void *, C *);
static inline void set(C *d, u8 r, u8 g, u8 b, u8 a) { d->r = r; d->g = g; d->b = b; d->a = a; }
void fn_80164460(O *o, s32 i, C *out) { C c; fn_800D7A00(o->p[i], &c); set(out, c.r, c.g, c.b, c.a); }
