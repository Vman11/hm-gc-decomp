#include "common.h"
extern "C" {
struct GXColor { u8 r, g, b, a; };
struct CE { u32 type; u32 idx; u32 cnt; u32 sel; };
struct TS { s32 a, b, c, d; };
struct Stg { u8 pad[0x30]; };
struct TE {
    u32 fl; u32 f4; u32 f8; u32 fc; u32 f10; u32 f14; u32 f18; u32 f1c; u8 b20; u8 pad21[3]; u32 f24;
    u32 f28; u32 f2c; u32 f30; u32 f34; u32 f38; u32 f3c; u32 f40; u8 b44; u8 pad45[3]; u32 f48;
    u32 f4c; u32 f50; u32 f54; u32 f58;
};
struct GS { u8 pad[0x4d4]; u32 f4d4; Stg st[16]; TS ts[16]; };
struct PM {
    u16 n; u16 pad2; CE *e; u8 pad8[8]; TS ts[3]; u8 b40; u8 pad41[3]; TE *te; u8 b48;
};
struct Ctx { u8 pad[0x1128]; f32 col[64][4]; u8 pad1528[0x1938 - 0x1528]; GS *gs; u8 pad193c[0x1ab8 - 0x193c]; GXColor *kc; };
extern GXColor lbl_8035AD18;
extern GXColor lbl_8035AD1C;
extern volatile f32 lbl_80364650;
extern char lbl_802A0B78[];
extern char lbl_802A0BA4[];
void fn_800D9188(u32, GXColor);
void fn_800D910C(u32, GXColor);
void fn_80060568(const char *, s32, s32, s32);
void fn_801643F0(Ctx *, GXColor *);
void fn_800D95E8(u8);
void fn_800D92FC(u32, s32, s32, s32, s32);
void fn_80174FB4(Stg *, u32, u32, u32, u8, u32);
void fn_8017502C(Stg *, u32, u32, u32, u32);
void fn_80174ED8(Stg *, u32, u32, u32, u8, u32);
void fn_80174F50(Stg *, u32, u32, u32, u32);
void fn_80174EA4(Stg *, u32);
void fn_80174E70(Stg *, u32);
void fn_80174E2C(Stg *, u32, u32);

inline void SetPP(u32 sel, u8 r, u8 g, u8 b, u8 a) {
    GXColor c;
    c.r = r; c.g = g; c.b = b; c.a = a;
    switch (sel) {
    case 0: fn_800D9188(0, c); break;
    case 1: fn_800D9188(1, c); break;
    case 2: fn_800D9188(2, c); break;
    case 3: fn_800D9188(3, c); break;
    case 4: fn_800D910C(1, c); break;
    case 5: fn_800D910C(2, c); break;
    case 6: fn_800D910C(3, c); break;
    case 7: fn_800D910C(0, c); break;
    default: fn_80060568(lbl_802A0B78, 0, 0, 0); break;
    }
}

inline void SetTS(GS *g, u32 id, s32 a, s32 b, s32 c, s32 d) {
    if (g->ts[(u8)id].a != a || g->ts[(u8)id].b != b || g->ts[(u8)id].c != c || g->ts[(u8)id].d != d) {
        g->ts[(u8)id].a = a;
        g->ts[(u8)id].b = b;
        g->ts[(u8)id].c = c;
        g->ts[(u8)id].d = d;
        fn_800D92FC(id, a, b, c, d);
    }
}

static inline GS *GetGS(Ctx *c) { return c->gs; }

void fn_80161244(PM *p, Ctx *c) {
    CE *e;
    GXColor col;
    u32 off;
    GS *g;
    CE *end;
    u32 i;
    u32 j;
    for (e = p->e, end = e + p->n; e < end; e++) {
        switch (e->type) {
        case 0:
            SetPP(e->sel, lbl_8035AD18.r, lbl_8035AD18.g, lbl_8035AD18.b, lbl_8035AD18.a);
            break;
        case 2:
            SetPP(e->sel, lbl_8035AD1C.r, lbl_8035AD1C.g, lbl_8035AD1C.b, lbl_8035AD1C.a);
            break;
        case 4:
            for (i = 0; i < e->cnt; i++) {
                f32 *f = c->col[e->idx + i];
                u32 ca = (u32)(lbl_80364650 * f[3]);
                u32 cb = (u32)(lbl_80364650 * f[2]);
                u32 cg = (u32)(lbl_80364650 * f[1]);
                u32 cr = (u32)(lbl_80364650 * f[0]);
                col.r = cr;
                col.g = cg;
                col.b = cb;
                col.a = ca;
                SetPP(e->sel, col.r, col.g, col.b, col.a);
            }
            break;
        case 5:
            col = c->kc[0];
            SetPP(e->sel, col.r, col.g, col.b, col.a);
            break;
        case 6:
            col = c->kc[1];
            SetPP(e->sel, col.r, col.g, col.b, col.a);
            break;
        case 7:
            col = c->kc[3];
            SetPP(e->sel, col.r, col.g, col.b, col.a);
            break;
        case 8:
            col = c->kc[2];
            SetPP(e->sel, col.r, col.g, col.b, col.a);
            break;
        case 12:
            fn_801643F0(c, &col);
            SetPP(e->sel, col.r, col.g, col.b, col.a);
            break;
        case 1:
        case 3:
        case 9:
        case 10:
        case 11:
        case 13:
            fn_80060568(lbl_802A0BA4, 0, 0, 0);
            break;
        }
    }
    g = GetGS(c);
    if (p->b48 != g->f4d4) {
        g->f4d4 = p->b48;
        fn_800D95E8(g->f4d4);
    }
    {
    TS *t = (TS *)p;
    for (i = 0; i < p->b40; t++, i++) {
        u32 id = i + 1;
        SetTS(g, id, t[1].a, t[1].b, t[1].c, t[1].d);
    }
    }
    for (j = 0; j < p->b48; j++) {
        fn_80174FB4(&g->st[j], p->te[j].f14, p->te[j].f18, p->te[j].f1c, p->te[j].b20, p->te[j].f24);
        fn_8017502C(&g->st[j], p->te[j].f4, p->te[j].f8, p->te[j].fc, p->te[j].f10);
        fn_80174ED8(&g->st[j], p->te[j].f38, p->te[j].f3c, p->te[j].f40, p->te[j].b44, p->te[j].f48);
        fn_80174F50(&g->st[j], p->te[j].f28, p->te[j].f2c, p->te[j].f30, p->te[j].f34);
        if (p->te[j].fl & 4) fn_80174EA4(&g->st[j], p->te[j].f4c);
        if (p->te[j].fl & 8) fn_80174E70(&g->st[j], p->te[j].f50);
        if ((p->te[j].fl & 1) || (p->te[j].fl & 2)) fn_80174E2C(&g->st[j], p->te[j].f54, p->te[j].f58);
    }
}
}
