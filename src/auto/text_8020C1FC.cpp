// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X { u8 pad[16]; u32 size; };
struct Cache {
    X *x;
    virtual void v0(); virtual void v1(); virtual s32 load(u32); virtual void v3(); virtual s32 retry(); virtual s32 poll();
};
struct Dev { u8 pad[1716]; u32 bs; };
struct F { u32 pos; u8 pad[4]; u32 flags; u8 pad2[8]; Dev *dev; Cache c; u8 pad3[8]; u32 base; };
extern "C" {
s32 fn_80208964(Cache *, u32, u32);
u32 fn_80208598(X *, u32, u32, u8 *);
}
static inline Cache *lookup(F *f, u32 len, BOOL &full) {
    u32 p = f->pos + f->base;
    if (fn_80208964(&f->c, p, len)) { full = TRUE; return &f->c; }
    if (fn_80208964(&f->c, p, 0)) { full = FALSE; return &f->c; }
    full = FALSE;
    return 0;
}
static inline u32 blk(F *f) {
    u32 p = f->pos + f->base;
    u32 q = p / f->dev->bs;
    if (q * f->dev->bs > p) q--;
    q *= f->dev->bs;
    return q;
}
static inline u32 blkp(F *f, u32 p) {
    u32 bs = f->dev->bs;
    u32 q = p / bs;
    if (q * bs > p) q--;
    q *= bs;
    return q;
}
static inline s32 wait(F *f) {
    s32 e = f->c.poll();
    if (e == 7) e = f->c.retry();
    return e;
}
extern "C" {
s32 fn_8020C1FC(F *f, u8 *dst, u32 len, u32 *out) {
    BOOL ok;
    BOOL full;
    Cache *b;
    s32 e;
    *out = ok = 0;
    if (f->dev == 0 || !(f->flags & 0x10000)) return 2;
    if ((f->flags & 4) || (f->flags & 8)) ok = 1;
    if (!(u8)ok) return 9;
    if (len == 0) return 0;
    if (dst == 0) return 6;
    b = lookup(f, len, full);
    if (b == 0) {
        u32 bb = blk(f);
        e = f->c.load(bb);
        if (e != 0 && e != 7) return e;
        b = lookup(f, len, full);
    }
    e = wait(f);
    if (e != 0) return e;
    if (b && full) {
        fn_80208598(b->x, f->pos + f->base, len, dst);
        f->pos += len;
        return 0;
    }
    if (b) {
        u32 n = fn_80208598(b->x, f->pos + f->base, len, dst);
        dst += n;
        len -= n;
        f->pos += n;
    }
    while (len) {
        u32 p = f->pos + f->base;
        u32 q = blkp(f, p);
        u32 chunk, avail, n;
        chunk = len;
        avail = f->c.x->size - (p - q);
        if (len > avail) chunk = avail;
        e = f->c.load(q);
        if (e != 0 && e != 7) return e;
        e = wait(f);
        if (e != 0) return e;
        n = fn_80208598(b->x, f->pos + f->base, chunk, dst);
        dst += n;
        len -= n;
        f->pos += n;
    }
    return 0;
}
}

} /* extern "C" */
