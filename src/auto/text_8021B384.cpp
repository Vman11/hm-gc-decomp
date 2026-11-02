// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct F { u32 pos; u8 p[12]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int seek(u32); virtual int read(void *, u32, u32 *, void *); };
struct D { u8 p[1764]; F *f; };
struct C { u8 p[28]; D *d; };
struct S { u32 pos; u32 size; volatile u32 fl; u8 p[8]; C *c; u32 base; };
extern u32 lbl_803658F8;
int fn_8021B384(S *s, void *dst, u32 n, u32 *out, void *x) {
    F *f;
    u32 old;
    int r;
    if (out) *out = 0;
    if (s->c == 0 || !(s->fl & 0x10000)) return 2;
    if (n == 0) return 0;
    if (s->pos >= s->size) { s->fl |= lbl_803658F8; return 8; }
    if (s->pos + n >= s->size) { s->fl |= lbl_803658F8; n -= s->pos + n - s->size; }
    f = s->c->d->f;
    if (f->seek(s->base + s->pos)) return 3;
    old = f->pos;
    r = f->read(dst, n, out, x);
    s->pos += f->pos - old;
    return r;
}

} /* extern "C" */
