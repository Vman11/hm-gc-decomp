// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct Pal {
    u8 p0[4];
    virtual void p0_(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void get(void *, int, u32); virtual void set(void *, int, u32);
};
struct Surf {
    u8 p0[0x20];
    virtual void s0(); virtual void s1(); virtual u16 *pal(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void s6(); virtual void s7(); virtual void s8(); virtual void lock(s32 *, s32 *, int); virtual void unlock();
};
struct Rc { s32 x0, y0, x1, y1; };
struct Ent { u8 p0[8]; Rc r; u8 p18[0]; };
struct Ent24 { u8 p0[8]; Rc r; };
struct D { s32 x, y, w, h; };
struct Q34 { u8 p[0x14]; u32 f14; };
struct P { u8 p[0x34]; Q34 *f34; };
struct Itm {
    u16 f0; u8 p2[0x1e];
    virtual void i0(); virtual void i1(); virtual Pal *pal(); virtual void i3(); virtual void i4(); virtual void i5(); virtual void i6();
};
struct T {
    u8 p0[8]; u32 f8; u8 pc[0x1a - 0xc]; u16 f1a; u8 p1c[0x2c - 0x1c]; Ent24 *f2c; u8 p30[8];
    virtual Itm *item(u32);
};
extern "C" {
extern u8 lbl_8032BD10[];
void fn_80129168(Itm *, Surf *, void *, u32);
void fn_80129040(Itm *, int, int);
void fn_80128F98(Itm *, D *, s32, s32, Rc *);
void fn_80128F54(Itm *);
static inline s32 W(const Rc *r) { return r->x1 - r->x0; }
static inline s32 H(const Rc *r) { return r->y1 - r->y0; }
static inline void sz(D *d, const Rc *r) { d->w = W(r); d->h = H(r); }
static inline u32 cnt(Surf *s) { return *s->pal(); }
static inline Pal *getp(Surf *s) { return (Pal *)s->pal(); }
void fn_8012E15C(T *t, P *p, Surf *dst) {
    s32 pitch, h;
    Itm *it; void *buf; int fl; u32 i; u32 n;
    D d;
    dst->lock(&pitch, &h, 1);
    n = 0;
    buf = 0;
    if (dst->pal()) {
        n = cnt(dst);
        ((Pal *)dst->pal())->get(lbl_8032BD10, 0, n);
        buf = lbl_8032BD10;
    }
    d.x = 0;
    d.y = 0;
    for (i = 0; i < t->f1a; i++) {
        it = t->item(i);
        fl = 0;
        if (t->f8 & 4) {
            if (!(it->f0 & 4)) fl = 1;
            else if ((p->f34->f14 & 0x10200) == 0x10200) it->i6();
        }
        fn_80129168(it, dst, buf, n);
        if (it->pal()) it->pal()->set(buf, 0, n);
        fn_80129040(it, fl, 0);
        d.w = W(&t->f2c[i].r);
        d.h = H(&t->f2c[i].r);
        fn_80128F98(it, &d, pitch, h, &t->f2c[i].r);
        fn_80128F54(it);
    }
    dst->unlock();
}

} /* extern "C" */
