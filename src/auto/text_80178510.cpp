#include "common.h"
extern "C" {
struct Q4 { f32 x0, y0, x1, y1; };
struct Col { u8 c[4][4]; };
struct Fmt { u8 pad[0x1c]; };
struct Strm { u8 *pos; u32 posStride; u8 pad8[0x18]; u8 *col; u32 colStride; u8 pad28[8]; u8 *uv; u8 pad34[0x1c]; u32 uvStride; };
extern Strm lbl_80330188;
extern u32 lbl_8035AD5C;
extern f32 lbl_8035AD54;
extern f32 lbl_8035AD58;
extern f32 lbl_803647B4;
extern f32 lbl_803647B8;
class Bat { public: virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void begin(Fmt *, u32, Strm *); virtual void flush(); };
struct Dev { u8 pad[0x29a0]; Bat bat; };
struct B { u8 pad[0xc]; u32 fc; u8 pad10[0x1924]; Dev *f1934; };
struct A { u8 pad[8]; u32 f8; u8 padc[4]; s32 f10; };
struct C { u8 pad[4]; s32 f4; Q4 f8; };
struct D { s32 f0; u8 pad4[6]; u16 fa; u16 fc; };
struct E { u8 pad[8]; u8 r, g, b, a; };
void fn_80121E1C(Col *);
int fn_80100504(Q4 *, void *, Q4 *, Q4 *);
void fn_80158B8C(Bat *, Dev *, int, int);
void fn_8014CA08(Fmt *);
void fn_8014C8C8(Fmt *, u32, u32, u32);
void fn_801218C4(Col *, void *, Q4 *, Q4 *);

#define Pos(x, y) do { ((f32 *)st->pos)[0] = x; ((f32 *)st->pos)[1] = y; st->pos += st->posStride; } while (0)
#define Clr(c) do { *(u32 *)st->col = c; st->col += st->colStride; } while (0)
#define Tex(u, v) do { ((f32 *)st->uv)[0] = u; ((f32 *)st->uv)[1] = v; st->uv += st->uvStride; } while (0)
void fn_80178510(A *a, B *b, C *c, D *d, Q4 *q, E *e, void *cs, void *m, u32 n) {
    Fmt fmt;
    Col col;
    Q4 t;
    Q4 out;
    Q4 uv;
    fn_80121E1C(&col);
    if (c->f4 == 0) return;
    uv.x0 = (f32)(s32)d->fa;
    uv.y0 = (f32)(s32)d->fc;
    uv.x1 = uv.x0 + (f32)d->f0;
    uv.y1 = uv.y0 + (f32)a->f10;
    if (fn_80100504(&out, m, &c->f8, &uv) == 0) return;
    if (b->fc & 0x100) {
        out.y0 = out.y0 - lbl_803647B4;
        out.y1 = out.y1 + lbl_803647B4;
    } else {
        out.y0 = out.y0 - lbl_803647B8;
        out.y1 = out.y1 + lbl_803647B8;
    }
    if (b->fc & 0x200) {
        out.x0 = out.x0 - lbl_803647B4;
        out.x1 = out.x1 + lbl_803647B4;
    } else {
        out.x0 = out.x0 - lbl_803647B8;
        out.x1 = out.x1 + lbl_803647B8;
    }
    if (lbl_8035AD5C + 6 > 0x200) {
        Dev *dv = b->f1934;
        Bat *bt = &dv->bat;
        bt->flush();
        if (lbl_8035AD5C != 0) fn_80158B8C(bt, dv, 0, 0);
        {
            fn_8014CA08(&fmt);
            n = n * 6;
            if (n > 0x200) n = 0x200;
            bt = &b->f1934->bat;
            fn_8014C8C8(&fmt, 0xA040, 0, 1);
            bt->begin(&fmt, n, &lbl_80330188);
        }
        lbl_8035AD5C = 0;
    }
    {
        u8 r0, g0, b0, a0, r2, g2, b2, a2, r1, g1, b1, a1, r3, g3, b3, a3;
        u32 c0, c1, c2;
        Strm *st = &lbl_80330188;
        if (cs != 0) {
            if (a->f8 & 2) { t.x0 = c->f8.x0; t.x1 = c->f8.x1; }
            else { t.x0 = q->x0; t.x1 = q->x1; }
            if (a->f8 & 4) { t.y0 = c->f8.y0; t.y1 = c->f8.y1; }
            else { t.y0 = q->y0; t.y1 = q->y1; }
            fn_801218C4(&col, cs, &t, &out);
            r0 = col.c[0][0]; g0 = col.c[0][1]; b0 = col.c[0][2]; a0 = col.c[0][3];
            r2 = col.c[2][0]; g2 = col.c[2][1]; b2 = col.c[2][2]; a2 = col.c[2][3];
            r1 = col.c[1][0]; g1 = col.c[1][1]; b1 = col.c[1][2]; a1 = col.c[1][3];
            r3 = col.c[3][0]; g3 = col.c[3][1]; b3 = col.c[3][2]; a3 = col.c[3][3];
        } else {
            r0 = e->r; g0 = e->g; b0 = e->b; a0 = e->a;
            r2 = r0; g2 = g0; b2 = b0; a2 = a0;
            r1 = r0; g1 = g0; b1 = b0; a1 = a0;
            r3 = r0; g3 = g0; b3 = b0; a3 = a0;
        }
        uv.x0 = uv.x0 * lbl_8035AD54;
        uv.x1 = uv.x1 * lbl_8035AD54;
        uv.y0 = uv.y0 * lbl_8035AD58;
        uv.y1 = uv.y1 * lbl_8035AD58;
        c0 = (r0 << 24) | (g0 << 16) | (b0 << 8) | a0;
        c1 = (r1 << 24) | (g1 << 16) | (b1 << 8) | a1;
        Pos(out.x0, out.y0); Clr(c0); Tex(uv.x0, uv.y0);
        Pos(out.x1, out.y0); Clr(c1); Tex(uv.x1, uv.y0);
        c2 = (r2 << 24) | (g2 << 16) | (b2 << 8) | a2;
        Pos(out.x0, out.y1); Clr(c2); Tex(uv.x0, uv.y1);
        Pos(out.x1, out.y0); Clr(c1); Tex(uv.x1, uv.y0);
        Pos(out.x1, out.y1); Clr((r3 << 24) | (g3 << 16) | (b3 << 8) | a3); Tex(uv.x1, uv.y1);
        Pos(out.x0, out.y1); Clr(c2); Tex(uv.x0, uv.y1);
    }
    lbl_8035AD5C += 6;
}
}
