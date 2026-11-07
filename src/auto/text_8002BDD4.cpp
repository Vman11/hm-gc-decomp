#include "common.h"
extern "C" {
/* QV=2.0p1; 0.0f etc are the .sdata2 pool literals (values of 1.0f..6.0f are placeholders for lbl_8035B9D8..EC) */
struct Rc { u8 pad[72]; f32 x0; u8 pad2[4]; f32 x1; };
struct El { u8 pad[8]; f32 v; u8 pad2[4]; };
struct Lst { u8 pad[16]; El *e; s32 *ok; };
struct Pl { u8 pad[424]; f32 w; f32 h; u8 pad2[904]; f32 *sc; u8 pad3[392]; s32 f6c4; };
struct Gx { u8 pad[644]; s32 busy; u8 pad2[8]; f32 t; };
struct Gm { u8 pad[140]; u32 flags; u8 pad2[2784]; Gx *gx; };
struct Tx { u8 pad[12]; f32 w; };
struct Obj {
    u8 pad[360];
    f32 t1;      /* 360 */
    s32 v1;      /* 364 */
    f32 t0;      /* 368 */
    s32 v0;      /* 372 */
    u8 pad2[4];
    Lst *lst;    /* 380 */
    u8 pad3[8];
    Rc *r0;      /* 392 */
    u8 pad4[4];
    Rc *r1;      /* 400 */
    u8 pad5[4];
    Rc *r2;      /* 408 */
    u8 pad6[4];
    Rc *r3;      /* 416 */
    Rc *r4;      /* 420 */
    s32 n;       /* 424 */
    Tx *ta;      /* 428 */
    Tx *tb;      /* 432 */
    u8 pad7[184];
    s32 *o1;     /* 620 */
    s32 *o0;     /* 624 */
    u8 pad8[116];
    Pl *pl;      /* 744 */
};
double fn_800F049C(double);
extern Gm *lbl_8035B65C;
extern volatile f32 lbl_80359F50;
extern volatile s8 lbl_80359F54;
extern f32 lbl_8035B99C;
#define lbl_8035B9D8 1.0f
#define lbl_8035B9DC 2.0f
#define lbl_8035B9E0 3.0f
#define lbl_8035B9E4 4.0f
#define lbl_8035B9E8 5.0f
#define lbl_8035B9EC 6.0f

static inline u8 IsBusy(Gx *gx) {
    u8 r = 0;
    if (gx->busy || gx->t != lbl_8035B99C) r = 1;
    return r;
}
static inline u8 Skip(Gm *g) { u8 s = 0; if (IsBusy(g->gx) && !(g->flags & 0x10)) s = 1; return s; }
/* wQG: sb reused for lbl_80359F50 scale (FP colouring), __fmadds operand order. DIFF 48 SDIFF 0, left: skip/busy r3/r5, e ptr r3/r4 */
void fn_8002BDD4(Obj *o, f32 dt)
{
    f32 sa = 0.0f;
    f32 ra = sa, sb = sa, sc = sa;
    f32 tgt;
    Pl *p;
    El *e;
    f32 q;
    if (!lbl_80359F54) { lbl_80359F50 = lbl_8035B9D8; lbl_80359F54 = 1; }
    tgt = lbl_8035B9D8;
    p = o->pl;
    if (p) {
        Gm *g;
        u8 busy, skip;
        if (p->f6c4) tgt = lbl_8035B9DC;
        g = lbl_8035B65C;
        skip = Skip(g);
        if (!skip) {
            f32 d = tgt - lbl_80359F50;
            if ((f32)__fabs(d) > 0.0f)
                lbl_80359F50 = __fmadds(lbl_8035B9D8 - (f32)fn_800F049C(lbl_8035B9E0 * dt), d, lbl_80359F50);
        }
        p = o->pl;
        sb = lbl_80359F50;
        sa = p->h * sb;
        ra = p->h / p->w;
        sb = p->w * sb;
        sc = sb / (p->sc ? *p->sc : 0.0f);
    }
    if (o->t0 > 0.0f) { *o->o0 = o->v0; o->t0 -= dt; }
    else *o->o0 = 0;
    if (o->t1 > 0.0f) { *o->o1 = o->v1; o->t1 -= dt; }
    else if (ra <= 0.0f) *o->o1 = 3;
    else if (ra <= lbl_8035B9E4) *o->o1 = 2;
    else if (ra <= lbl_8035B9E8) *o->o1 = 1;
    else *o->o1 = 0;
    e = o->lst->ok[0] ? o->lst->e : 0;
    q = sa / sb;
    e->v = sc * (o->r0->x1 - o->r0->x0);
    {
        f32 v = e->v;
        El *e2 = o->lst->ok[1] ? o->lst->e + 1 : 0;
        e2->v = q * v;
        v = v + o->r0->x0;
        o->r1->x0 = v;
        o->r1->x1 = lbl_8035B9EC + v;
    }
    {
        f32 k = lbl_8035B9D8;
        if (0.0f != o->ta->w) k = o->tb->w / o->ta->w;
        o->r2->x0 = o->r2->x1 - (f32)o->n * k;
        {
            f32 y = o->r2->x1 - (f32)o->n;
            o->r3->x0 = y - lbl_8035B9EC;
            o->r3->x1 = y;
        }
        o->r4->x0 = o->r4->x1 - (f32)o->n;
    }
}
}
