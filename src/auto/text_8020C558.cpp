// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X { u8 pad[4]; u8 *buf; u8 pad2[4]; u32 start; u32 size; };
struct Cache {
    X *x;
    virtual void v0(); virtual void v1(); virtual s32 load(u32); virtual void v3(); virtual s32 retry(); virtual s32 poll();
};
class C80208924 { public: C80208924(); virtual void v0(); virtual void v1(); virtual s32 st(); u8 d[20]; };
struct Dev { u8 pad[1716]; u32 bs; };
struct F {
    u32 pos; u32 size; volatile u32 flags; u32 fc;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void rel(C80208924 *);
    Dev *dev; Cache c; u8 pad3[8]; u32 base;
};
extern "C" {
s32 fn_80208964(Cache *, u32, u32);
void fn_80208870(C80208924 *, Cache *, s32, u8 *, u32);
void *memcpy(void *, const void *, u32);
void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void);
extern void *lbl_8035A9F4;
extern u32 lbl_80365808;
}
static inline Cache *lookup(F *f, u32 len, BOOL &full) {
    u32 p = f->pos + f->base;
    if (fn_80208964(&f->c, p, len)) { full = TRUE; return &f->c; }
    if (fn_80208964(&f->c, p, 0)) { full = FALSE; return &f->c; }
    full = FALSE;
    return 0;
}
static inline s32 wait(F *f) {
    s32 e = f->c.poll();
    if (e == 7) e = f->c.retry();
    return e;
}
extern "C" {
s32 fn_8020C558(F *f, u8 *dst, u32 len, u32 *out, C80208924 **req) {
    u32 n;
    BOOL full;
    C80208924 *r;
    Cache *b;
    s32 e;
    if (out) *out = 0;
    *req = 0;
    if (f->dev == 0 || !(f->flags & 0x10000)) return 2;
    if (len == 0) return 0;
    if (f->pos + f->base >= f->size) { f->flags |= lbl_80365808; return 8; }
    e = wait(f);
    if (e != 0) return e;
    if (f->pos + f->base + len >= f->size) {
        f->flags |= lbl_80365808;
        len -= f->pos + f->base + len - f->size;
    }
    b = lookup(f, len, full);
    if (b) {
        if (full) {
            memcpy(dst, b->x->buf + (f->pos + f->base - b->x->start), len);
            f->pos += len;
            if (out) *out = len;
            return 0;
        } else {
            X *x = b->x;
            u32 off = f->pos + f->base - x->start;
            n = x->size - off;
            memcpy(dst, x->buf + off, n);
            dst += n;
            if (out) *out += n;
            len -= n;
            f->pos += n;
        }
    }
    if (f->pos + f->base + len > f->size) len = f->size - f->pos - f->base;
    r = 0;
    while (len) {
        if (r) {
            s32 e2 = r->st();
            f->rel(r);
            if (e2) return e2;
        }
        n = len;
        if (f->c.x->size < len) n = f->c.x->size;
        if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        r = new C80208924;
        fn_800F7E98();
        if (!r) fn_800604C4(-4, 0, 0, 0);
        fn_80208870(r, &f->c, 0, dst, n);
        f->pos += n;
        if (out) *out += n;
        dst += n;
        len -= n;
    }
    *req = r;
    return 7;
}
}

} /* extern "C" */
