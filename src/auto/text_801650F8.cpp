// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
// NonMatching: 66 asm diff lines left: saved-reg colouring of the zen/zfn/zup/b13 locals in the 3 branches,
// and xoris/stw order in the 3 inlined ortho setups. int->float magic lbl_80364690 is shared .sdata2.
#include "common.h"

extern "C" {

/* QV=2.0p1 */

typedef struct { s32 x0, y0, x1, y1; f32 n, f; } Rect;
typedef struct { u8 pad[28]; u16 w, h; } FB;
struct St {
    u8 pad0[0x4b4]; bool zen; u8 pad4b5[3]; s32 zfn; bool zup; bool b13; u8 pad4be[0x818 - 0x4be]; u32 x818;
};
struct Gx { u8 pad0[0x2c]; u32 x2c; u8 pad30[0x279f4 - 0x30]; s32 x279f4; };
static inline s32 W(FB *fb) { return fb->w; }
static inline s32 H(FB *fb) { return fb->h; }
} /* extern "C" */
struct C80152B64 { u8 data[64]; C80152B64(); };
struct B {
    void *f0; FB *fb; u8 pad8[4]; u32 xc; u8 pad10[16]; Rect rect; u8 pad56[0x192c - 56]; void *x192c;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(s32 a);
};
struct D : B { Gx *x1934; St *x1938; u8 pad193c[4]; u8 x1940[4]; };
extern "C" {

/* QV=2.0p1 */
typedef void (*FP)(void *);
extern FP lbl_803286D0[];
extern f32 lbl_80364680;
extern f32 lbl_80364684;
extern f32 lbl_80364688;
extern u32 lbl_803646B8;
extern u32 lbl_803646BC;
extern u8 lbl_802A04E8[];
extern u8 lbl_8032E4A8[];
void fn_800DA010(f32 x, f32 y, f32 w, f32 h, f32 n, f32 f);
void fn_800DA0C4(u32 x, u32 y, u32 w, u32 h);
void fn_8014CBA4(Rect *dst, const Rect *src);
void fn_800D9E98(u32);
void fn_800BC02C(void *p, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);
void fn_800D9CC8(void *p, s32 v);
void fn_800D9A04(bool, s32, bool);
void fn_800D99AC(bool);
void fn_8016C7BC(Gx *);
void fn_8016C640(Gx *);
void fn_8016B848(Gx *);
void fn_8016B984(Gx *);
void fn_8016B8E0(Gx *);
void fn_8016B794(Gx *, s32);
void fn_80165944(D *);
void fn_801699D8(Gx *, void *, s32, s32, void *, s32, s32);

static inline void SetZ(St *s, bool en, s32 fn, bool up) {
    if (s->zen != en || s->zfn != fn || s->zup != up) {
        s->zen = en; s->zfn = fn; s->zup = up;
        fn_800D9A04(s->zen, s->zfn, s->zup);
    }
}
static inline void SetZEn(St *s, bool v) {
    if (v ? !s->zen : s->zen) { s->zen = v; fn_800D9A04(s->zen, s->zfn, s->zup); }
}
static inline void SetB13(St *s, bool v) {
    if (v ? !s->b13 : s->b13) { s->b13 = v; fn_800D99AC(s->b13); }
}
static inline void SetMode(St *g, u32 v) {
    if (g->x818 != v) {
        g->x818 = v;
        fn_800D9E98(g->x818);
    }
}
static inline void Ortho(D *p) {
    C80152B64 m;
    SetMode(p->x1938, 3);
    fn_800BC02C(&m, lbl_80364684, (f32)(H(p->fb) - 1), lbl_80364684, (f32)(W(p->fb) - 1), lbl_80364684, lbl_80364688);
    lbl_803286D0[94](&m);
    fn_800D9CC8(&m, 1);
}
static inline void Draw(D *p) {
    Ortho(p);
    fn_801699D8(p->x1934, p->x1940, 0, 0, lbl_802A04E8, 0, 4);
    fn_8016C640(p->x1934);
}

void fn_801650F8(D *p, s32 a, u32 fl, const Rect *r) {
    fn_8016C7BC(p->x1934);
    if (fl & 8) p->xc |= lbl_803646B8;
    else if (fl & 0x10) p->xc |= lbl_803646B8;
    else p->xc &= ~4;
    if (r == 0) {
        p->rect.x0 = 0;
        p->rect.y0 = 0;
        p->rect.x1 = p->fb->w;
        p->rect.y1 = p->fb->h;
        p->rect.n = lbl_80364684;
        p->rect.f = lbl_80364680;
        fn_800DA010(lbl_80364684, lbl_80364684, W(p->fb), H(p->fb), lbl_80364684, lbl_80364680);
        fn_800DA0C4(0, 0, (u32)(f32)(s32)p->fb->w, (u32)(f32)(s32)p->fb->h);
    } else {
        fn_8014CBA4(&p->rect, r);
        fn_800DA010((f32)r->x0, (f32)r->y0, (f32)(r->x1 - r->x0), (f32)(r->y1 - r->y0), r->n, r->f);
        fn_800DA0C4((u32)(f32)r->x0, (u32)(f32)r->y0, (u32)(f32)(r->x1 - r->x0), (u32)(f32)(r->y1 - r->y0));
    }
    p->v38(a);
    p->x1934->x279f4 = 0;
    if (fl & 1) {
        fn_80165944(p);
        if (fl & 2) {
            St *s = p->x1938;
            bool zen = s->zen;
            u8 b13 = s->b13;
            s32 zfn = s->zfn;
            bool zup = s->zup;
            SetZ(s, true, 7, true);
            SetB13(p->x1938, true);
            Draw(p);
            SetZ(p->x1938, zen, zfn, zup);
            if (!b13) SetB13(p->x1938, false);
        } else {
            St *s = p->x1938;
            u8 zen = s->zen;
            u8 b13 = s->b13;
            SetZEn(s, false);
            SetB13(p->x1938, true);
            Draw(p);
            if (!b13) SetB13(p->x1938, false);
            if (zen) SetZEn(p->x1938, true);
        }
    } else if (fl & 2) {
        p->x1934->x2c &= ~0x800;
        St *s = p->x1938;
        bool zen = s->zen;
        u8 b13 = s->b13;
        s32 zfn = s->zfn;
        bool zup = s->zup;
        SetZ(s, true, 7, true);
        SetB13(p->x1938, false);
        Draw(p);
        SetZ(p->x1938, zen, zfn, zup);
        if (b13) SetB13(p->x1938, true);
    }
    p->xc &= ~0x4C0;
    fn_8016B848(p->x1934);
    fn_8016B984(p->x1934);
    fn_8016B8E0(p->x1934);
    fn_8016B794(p->x1934, 2);
    p->xc |= lbl_803646BC;
    p->v31();
    p->x192c = lbl_8032E4A8;
}

} /* extern "C" */
