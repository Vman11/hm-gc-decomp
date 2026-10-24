// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct GXColor { u8 r, g, b, a; } GXColor;
typedef struct State {
    u8 pad0[1160]; int mode; u8 op; u8 pad1165[3]; int cull; int fogon; u8 pad1176[4];
    f32 f1180, f1184, f1188, f1192; GXColor fogc; u8 pad1200[4]; bool zen; u8 pad1205[3]; int zfn; bool zup; bool b1213;
} State;
typedef struct Fog { int x0; int type; f32 a, b, c, d; } Fog;
typedef struct Mat { u8 pad0[8]; u8 x8[36]; u32 fl; u8 pad48; u8 b49; u8 pad50[4]; u8 b54; u8 b55; } Mat;
typedef struct G {
    u8 pad0[44]; u32 fl; u8 pad48[812 - 48]; int cull; u8 pad816[8004 - 816]; State st;
    u8 pad[131072 + 31196 - 8004 - sizeof(State)]; Fog fog; int x31220; int zsel;
} G;
extern int lbl_8035ACF8;
extern int lbl_802A0318[];
void fn_8015780C(State *, int, u8 *);
void fn_800D9A38(int);
void fn_800D937C(int, int, int, int, int);
void fn_800D9A04(bool, int, bool);
void fn_800D6DAC(int);
void fn_80157704(State *, int, Fog *, f32, f32, f32, f32);
void fn_800D9610(int, f32, f32, f32, f32, GXColor);
void fn_800D99AC(bool);
static inline void SetBlend(State *s, int m, u8 o) {
    if (s->mode == m && s->op == o) return;
    s->mode = m;
    s->op = o;
    if (s->mode == 7) fn_800D9A38(1);
    else fn_800D9A38(0);
    fn_800D937C(m, o, 0, m, o);
}
static inline void SetZFn(State *s, int v) {
    if (s->zfn != v) { s->zfn = v; fn_800D9A04(s->zen, s->zfn, s->zup); }
}
static inline void SetCull(State *s, int v) {
    if (s->cull != v) { s->cull = v; fn_800D6DAC(v); }
}
static inline void SetZEn(State *s, bool v) {
    if (v ? !s->zen : s->zen) { s->zen = v; fn_800D9A04(s->zen, s->zfn, s->zup); }
}
static inline void SetZUp(State *s, bool v) {
    if (v ? !s->zup : s->zup) { s->zup = v; fn_800D9A04(s->zen, s->zfn, s->zup); }
}
static inline void SetB13(State *s, bool v) {
    if (v ? !s->b1213 : s->b1213) { s->b1213 = v; fn_800D99AC(s->b1213); }
}
void fn_8015D11C(Mat *m, G *g) {
    State *s = &g->st;
    if (m->fl & 0x30) fn_8015780C(s, 0, m->x8);
    if (m->fl & 0x300) {
        if (lbl_8035ACF8) SetBlend(s, 3, 240);
        else SetBlend(s, 4, 240);
    } else if (m->fl & 0x40) {
        SetBlend(s, lbl_802A0318[m->b54], m->b55);
    } else {
        SetBlend(s, 7, 0);
    }
    if (m->fl & 0x200000) SetZFn(s, lbl_802A0318[m->b49]);
    else SetZFn(s, lbl_802A0318[g->zsel]);
    if (m->fl & 0x3000) {
        if (m->fl & 0x2000) SetCull(s, 0);
        else SetCull(s, 2);
    } else {
        SetCull(s, g->cull);
    }
    if (((g->fl >> 8) & 1) & !(m->fl & 0x20000)) {
        fn_80157704(s, g->fog.type, &g->fog, g->fog.a, g->fog.b, g->fog.c, g->fog.d);
    } else if (s->fogon != 0) {
        s->fogon = 0;
        fn_800D9610(0, s->f1180, s->f1184, s->f1188, s->f1192, s->fogc);
    }
    if ((bool)(g->fl & 0x200) | (bool)(m->fl & 0x40000)) SetZEn(s, false);
    else SetZEn(s, true);
    if ((bool)(g->fl & 0x400) | (bool)(m->fl & 0x80000)) SetZUp(s, false);
    else SetZUp(s, true);
    if ((bool)(g->fl & 0x2000) | (bool)(m->fl & 0x100000)) SetB13(s, false);
    else SetB13(s, true);
}

} /* extern "C" */
