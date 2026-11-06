// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct H { u8 p[0x10]; u32 n; };
void *memmove(void *, const void *, u32);
struct O { H *h; u32 f4; virtual void v0(); virtual void v1(); virtual void v2(); virtual void setN(u32); u8 *buf; };
static inline void del(void *p, u32 n) { memmove(p, (u8 *)p + 1, n); }
void fn_80114254(O *o, u32 i) { u32 j = i + 1; if (j < o->h->n) del(o->buf + i, o->h->n - j); o->setN(o->h->n - 1); }
}
