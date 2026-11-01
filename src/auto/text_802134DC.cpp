// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80365888;
struct DB802134DC { u32 pos; u8 pad[0xc]; };
struct D802134DC : DB802134DC { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual s32 seek(u32 off); virtual s32 read(void *buf, u32 len, u32 *nread, s32 x); };
struct C802134DC { u8 pad[0x6e4]; D802134DC *d; };
struct B802134DC { u8 pad[0x1c]; C802134DC *c; };
struct S802134DC { u32 pos; u32 size; volatile u32 flags; u8 padc[8]; B802134DC *b; u32 base; };
s32 fn_802134DC(S802134DC *s, void *buf, u32 len, u32 *nread, s32 x) {
    D802134DC *d;
    u32 old;
    s32 r;
    if (nread != 0) *nread = 0;
    if (s->b == 0 || !(s->flags & 0x10000)) return 2;
    if (len == 0) return 0;
    if (s->pos >= s->size) {
        s->flags |= lbl_80365888;
        return 8;
    }
    if (s->pos + len >= s->size) {
        s->flags |= lbl_80365888;
        len -= s->pos + len - s->size;
    }
    d = s->b->c->d;
    if (d->seek(s->base + s->pos) != 0) return 3;
    old = d->pos;
    r = d->read(buf, len, nread, x);
    s->pos += d->pos - old;
    return r;
}

} /* extern "C" */
