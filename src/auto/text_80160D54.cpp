// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct O { u8 p[0x14]; void *f14; u16 *f18; } O;
u16 fn_80147CD8(void *, u32 *);
void fn_80160D54(O *o, u32 *p, u32 base, u32 n) { u32 *q = p; u32 i; for (i = 0; i < n; i++) { u16 r = fn_80147CD8(o->f14, q); q++; o->f18[base + i] = r; } }

} /* extern "C" */
