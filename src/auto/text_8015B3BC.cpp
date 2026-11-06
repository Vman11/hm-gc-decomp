#include "common.h"

extern "C" {

struct Q {
    u8 pad[1132];
    bool on;
    u8 pad1133[11];
    s32 mode;
    u32 a1148;
    u32 a1152;
    u32 a1156;
};
struct Fmt { u8 pad[0x1c]; };
struct Lock {
    u8 *pos; u32 posStride; u8 p08[8];
    u8 *nrm; u32 nrmStride; u8 p18[8];
    u8 *col; u32 colStride; u8 p28[8];
    u8 *tex[8]; u32 texStride[8];
    u8 p70[4];
};
struct Tex { u8 pad[0x1c]; u16 w, h; };
struct D { u8 pad[0x14]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual Tex *getTex(int); };
struct Sub { u8 pad[0x10]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual D *get(void *); };
struct A { u8 pad[8]; u32 flags; u8 pad0c[0x30]; Sub sub; };
struct C { u8 pad[0x2c]; u32 flags; u8 pad30[0x14]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void set(int, int); };
struct Fac { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void lockVB(Fmt *, u32, Lock *); virtual void unlockVB(u32); };
struct Ren { u8 pad[0x29a0]; Fac fac; };
struct B { u8 pad[0x1934]; Ren *ren; Q *q; };

void fn_8014CA08(Fmt *);
void fn_8014C8C8(Fmt *, u32, u32, u32);
void fn_801576A0(Q *);
void fn_800D7CA4(int, bool, int, s32, u32, u32, u32);
void fn_80163BE4(B *);
void fn_80163BC0(B *);
void fn_8015D5A8(C *, B *, D *);
void fn_80158AB4(Fac *, Ren *, u32, u32);
extern f32 lbl_803645D4;

static inline void stop(Q *q) {
    if (!q->on) return;
    q->on = false;
    if (!q->a1148) fn_801576A0(q);
    fn_800D7CA4(0, q->on, 0, q->mode, q->a1148, q->a1152, q->a1156);
}

#define COL(c) (((u32)(c)[0] << 24) | ((u32)(c)[1] << 16) | ((u32)(c)[2] << 8) | ((u32)(c)[3] & 0xff))

void fn_8015B3BC(A *a, B *b, void *arg, C *c, f32 *pos, f32 *uv, u8 *col) {
    Fmt fmt;
    Lock lk;
    D *d;
    Tex *t;
    Fac *f;
    f32 su, sv, u0, v0, u1, v1;
    fn_8014CA08(&fmt);
    d = a->sub.get(arg);
    if ((a->flags & 4) && !(c->flags & 0x40)) c->set(3, 0);
    stop(b->q);
    fn_80163BE4(b);
    fn_8015D5A8(c, b, d);
    t = d->getTex(0);
    f = &b->ren->fac;
    su = lbl_803645D4 / (f32)(s32)t->w;
    sv = lbl_803645D4 / (f32)(s32)t->h;
    u0 = uv[0] * su;
    v0 = uv[1] * sv;
    u1 = uv[2] * su;
    v1 = uv[3] * sv;
    fn_8014C8C8(&fmt, 0xa040, 0, 1);
    f->lockVB(&fmt, 4, &lk);

    ((f32 *)lk.pos)[0] = pos[0];
    ((f32 *)lk.pos)[1] = pos[1];
    lk.pos += lk.posStride;
    *(u32 *)lk.col = COL(col);
    lk.col += lk.colStride;
    ((f32 *)lk.tex[0])[0] = u0;
    ((f32 *)lk.tex[0])[1] = v0;
    lk.tex[0] += lk.texStride[0];

    ((f32 *)lk.pos)[0] = pos[2];
    ((f32 *)lk.pos)[1] = pos[1];
    lk.pos += lk.posStride;
    *(u32 *)lk.col = COL(col + 4);
    lk.col += lk.colStride;
    ((f32 *)lk.tex[0])[0] = u1;
    ((f32 *)lk.tex[0])[1] = v0;
    lk.tex[0] += lk.texStride[0];

    ((f32 *)lk.pos)[0] = pos[0];
    ((f32 *)lk.pos)[1] = pos[3];
    lk.pos += lk.posStride;
    *(u32 *)lk.col = COL(col + 8);
    lk.col += lk.colStride;
    ((f32 *)lk.tex[0])[0] = u0;
    ((f32 *)lk.tex[0])[1] = v1;
    lk.tex[0] += lk.texStride[0];

    ((f32 *)lk.pos)[0] = pos[2];
    ((f32 *)lk.pos)[1] = pos[3];
    lk.pos += lk.posStride;
    *(u32 *)lk.col = COL(col + 12);
    lk.col += lk.colStride;
    ((f32 *)lk.tex[0])[0] = u1;
    ((f32 *)lk.tex[0])[1] = v1;
    lk.tex[0] += lk.texStride[0];

    f->unlockVB(4);
    fn_80158AB4(f, b->ren, 0, 0);
    fn_80163BC0(b);
}

}
