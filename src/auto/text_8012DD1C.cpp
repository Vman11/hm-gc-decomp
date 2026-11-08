#include "common.h"

struct K { u32 w[4]; };
struct C4 { u8 r, g, b, a; };
struct V2 { f32 x, y; };
struct Q4 { f32 x0, y0, x1, y1; };
struct Rc { s32 x0, y0, x1, y1; };
struct Ent24 { u8 p0[8]; Rc r; };
struct Clr { u8 p0[8]; C4 c; };
struct G { u8 p0[0xc]; u32 fc; u8 p10[0x20 - 0x10]; Rc r; u8 p30[0x124 - 0x30]; Clr *f124; };
struct T {
    u8 p0[8]; u32 f8; u8 pc[0x10 - 0xc]; u16 f10; u16 f12; u8 p14[0x1a - 0x14]; u16 f1a; K f1c; Ent24 *f2c; u8 p30[8];
    virtual void v0();
    virtual Clr *clr();
    virtual void v2();
    virtual void draw(G *, u32, Clr *, Q4 *, Q4 *, K *);
};
extern "C" {
extern f32 lbl_80363EEC;
extern f32 lbl_80363EF0;
extern f32 lbl_80363EF4;
extern f32 lbl_80363EF8;
void fn_80121E1C(K *);
void fn_80121DC8(K *, C4 *);
void fn_80121658(C4 *);
void fn_801218C4(K *, K *, Q4 *, Q4 *);
int fn_80100504(Q4 *, Q4 *, Q4 *, Q4 *);
static inline s32 W(const Rc *r) { return r->x1 - r->x0; }
static inline s32 H(const Rc *r) { return r->y1 - r->y0; }

void fn_8012DD1C(T *t, G *g, V2 *__restrict pos, V2 *scale, K *col, Q4 *clip) {
    Q4 out;
    Q4 a;
    Q4 uv;
    Q4 rc;
    Q4 bb;
    K k;
    V2 ds;
    C4 c4;
    Clr *cl;
    u32 i;
    s32 line;
    fn_80121E1C(&k);
    if (!(t->f8 & 0x10)) return;
    if (!scale) {
        { f32 v = lbl_80363EEC; ds.x = v; ds.y = v; }
        scale = &ds;
    }
    bb.x0 = pos->x;
    bb.y0 = pos->y;
    bb.x1 = scale->x * (f32)(s32)t->f10 + bb.x0;
    bb.y1 = scale->y * (f32)(s32)t->f12 + bb.y0;
    if (!clip) {
        clip = &rc;
        rc.x0 = (f32)g->r.x0;
        rc.y0 = (f32)g->r.y0;
        rc.x1 = (f32)g->r.x1;
        rc.y1 = (f32)g->r.y1;
    }
    if (!col && (t->f8 & 2)) col = &t->f1c;
    if (g->f124) cl = g->f124; else cl = t->clr();
    if (!col) {
        if (cl) c4 = cl->c; else fn_80121658(&c4);
        fn_80121DC8(&k, &c4);
    }
    line = t->f2c[0].r.x0;
    a.x0 = pos->x;
    a.y0 = a.y1 = pos->y;
    for (i = 0; i < t->f1a; i++) {
        if (line == t->f2c[i].r.x0) {
            a.x0 = pos->x;
            a.y0 = a.y1;
        }
        *(volatile f32 *)&a.x1 = scale->x * (f32)W(&t->f2c[i].r) + a.x0;
        *(volatile f32 *)&a.y1 = scale->y * (f32)H(&t->f2c[i].r) + a.y0;
        { f32 v = *(volatile f32 *)&lbl_80363EF0; uv.x0 = v; uv.y0 = v; }
        uv.x1 = (f32)W(&t->f2c[i].r);
        uv.y1 = (f32)H(&t->f2c[i].r);
        if (fn_80100504(&out, clip, &a, &uv)) {
            if (g->fc & 0x100) {
                out.y0 -= lbl_80363EF4;
                out.y1 -= lbl_80363EF4;
            } else {
                out.y0 -= lbl_80363EF8;
                out.y1 -= lbl_80363EF8;
            }
            if (g->fc & 0x200) {
                out.x0 -= lbl_80363EF4;
                out.x1 -= lbl_80363EF4;
            } else {
                out.x0 -= lbl_80363EF8;
                out.x1 -= lbl_80363EF8;
            }
            if (t->f8 & 0x80) {
                f32 tmp = out.y0;
                out.y0 = out.y1;
                out.y1 = tmp;
            }
            if (t->f8 & 0x40) {
                f32 tmp = out.x0;
                out.x0 = out.x1;
                out.x1 = tmp;
            }
            if (col) fn_801218C4(&k, col, &bb, &out);
            t->draw(g, i, cl, &out, &uv, &k);
            a.x0 = a.x1;
        }
    }
}
}
