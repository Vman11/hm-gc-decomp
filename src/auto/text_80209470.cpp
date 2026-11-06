#include "common.h"
extern "C" {

struct X { u8 pad[4]; u8 *buf; u8 pad2[4]; u32 start; u32 size; };
struct Cache {
    X *x;
    virtual void v0(); virtual void v1(); virtual void load(u32); virtual void v3(); virtual s32 retry(); virtual s32 poll();
};
class C80208924 { public: C80208924(); virtual void v0(); virtual void v1(); virtual s32 st(); u8 d[20]; };
class C80209368 { public: C80209368(); u8 d[0x60]; };
struct F {
    u32 pos; u32 size; volatile u32 flags; u32 fc; u32 f10; u32 f14; u32 f18;
    Cache c; u8 pad1[0x68 - 0x24]; Cache c2; u8 pad2[0xb4 - 0x70]; s32 dev;
};
}
extern "C" {
s32 fn_80208964(Cache *, u32, u32);
void fn_80208870(C80208924 *, Cache *, s32, u8 *, u32);
void fn_80209224(C80209368 *, u32, u8 *, u32, u32, Cache *, u32, s32, u8 *, u32);
void *memcpy(void *, const void *, u32);
void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void);
extern void *lbl_8035A9F4;
extern u32 lbl_803657D0;
}
static inline s32 wait(Cache *c) {
    s32 e = c->poll();
    if (e == 7) e = c->retry();
    return e;
}
static inline Cache *lookup(F *f, u32 len, BOOL &full) {
    u32 p = f->pos;
    if (fn_80208964(&f->c, p, len)) { full = TRUE; return &f->c; }
    if (fn_80208964(&f->c2, p, len)) { full = TRUE; return &f->c2; }
    if (fn_80208964(&f->c, p, 0)) { full = FALSE; return &f->c; }
    if (fn_80208964(&f->c2, p, 0)) { full = FALSE; return &f->c2; }
    full = FALSE;
    return 0;
}
static inline C80208924 *allocReq() {
    C80208924 *r;
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    r = new C80208924;
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
extern "C" {
s32 fn_80209470(F *f, u8 *dst, u32 len, u32 *out, void **req) {
    Cache *b;
    u32 base;
    u32 off;
    u8 *d0;
    BOOL full;
    u32 p;
    u32 n;
    u8 *dbase;
    s32 e;
    if (out) *out = 0;
    *req = 0;
    d0 = dst;
    if (f->dev != 0 && (f->flags & 0x10000)) {
    if (len == 0) return 0;
    if (f->pos >= f->size) { f->flags |= lbl_803657D0; return 8; }
    e = wait(&f->c);
    if (e != 0) return e;
    e = wait(&f->c2);
    if (e != 0) return e;
    if (f->pos + len >= f->size) {
        f->flags |= lbl_803657D0;
        len -= f->pos + len - f->size;
    }
    b = lookup(f, len, full);
    if (b && full) {
        memcpy(dst, b->x->buf + (f->pos - b->x->start), len);
        f->pos += len;
        if (out) *out = len;
        return 0;
    }
    if (b) {
        X *x = b->x;
        u32 o = f->pos - x->start;
        n = x->size - o;
        memcpy(dst, x->buf + o, n);
        dst += n;
        if (out) *out += n;
        len -= n;
        f->pos += n;
    }
    base = f->pos & ~31;
    off = f->pos - base;
    if (len <= f->c.x->size - off) {
        C80208924 *r;
        f->c.load(base);
        if (f->c2.x) f->c2.load(base + f->c.x->size);
        r = allocReq();
        fn_80208870(r, &f->c, f->pos - base, dst, len);
        if (out) *out += len;
        f->pos += len;
        *req = r;
        return 7;
    }
    dbase = (u8 *)((u32)dst & ~31);
    if ((f->pos - (dst - dbase)) & 3) {
        while (len) {
            u32 o;
            u32 a = f->pos & ~31;
            o = f->pos - a;
            f->c.load(a);
            e = f->c.retry();
            if (e != 0) return e;
            n = f->c.x->size - o;
            if (n > len) n = len;
            memcpy(dst, b->x->buf + o, n);
            dst += n;
            if (out) *out += n;
            len -= n;
            f->pos += n;
        }
        return 0;
    }
    if (dbase < d0) {
        X *x;
        u32 b2;
        f->c.load(base);
        e = f->c.retry();
        if (e != 0) return e;
        x = f->c.x;
        n = (u32)((u32)(dst + (x->size - off)) & ~31) - (u32)dst;
        memcpy(dst, x->buf + off, n);
        dst += n;
        if (out) *out += n;
        len -= n;
        dbase = (u8 *)((u32)dst & ~31);
        f->pos += n;
        b2 = f->pos & ~31;
        if (len <= f->c.x->size - (f->pos - b2)) {
            C80208924 *r;
            f->c.load(b2);
            if (f->c2.x) f->c2.load(b2 + f->c.x->size);
            r = allocReq();
            fn_80208870(r, &f->c, f->pos - b2, dst, len);
            if (out) *out += len;
            f->pos += len;
            *req = r;
            return 7;
        }
    }
    {
        u32 head = dst - dbase;
        u32 end = ((f->pos + len + 31) & ~31) - f->c.x->size;
        u32 t = head + (end - f->pos);
        u32 al = (t + 31) & ~31;
        s32 sz;
        C80209368 *r;
        sz = al;
        end += al - t;
        if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        r = new C80209368;
        fn_800F7E98();
        if (!r) fn_800604C4(-4, 0, 0, 0);
        fn_80209224(r, f->f14, dbase, sz, f->pos - head, &f->c, end, 0, dbase + sz, len + head - sz);
        if (f->c2.x) f->c2.load(end + f->c.x->size);
        if (out) *out += len;
        f->pos += len;
        *req = r;
        return 7;
    }
    }
    return 2;
}
}
