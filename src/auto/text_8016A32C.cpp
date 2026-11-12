// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef f32 Mtx[4][4];
struct V3 { f32 x, y, z; };

struct Prim {
    u16 _0;
    u16 n;
    u8 *cmd;
};

struct Shape {
    u8 _0[0x10];
    u32 fl;
    u8 _14[4];
    u8 t18, t19, t1a, t1b;
    u8 _1c[0x4c - 0x1c];
    u8 *pos;
    u8 _50[4];
    u8 *clr;
    u8 *nrm;
};

struct Tbls {
    u32 _0[16];
    u32 idx[20];
    u32 a[33];
    u32 b[33];
};

struct FT {
    u8 _0[0x174];
    void (*f174)(Mtx *, u32);
    u8 _178[0x190 - 0x178];
    void (*f190)(u32, V3 *, V3 *);
};

struct Ctx {
    u8 _0[0x2c];
    u32 fl;
    u8 _30[0x1edc - 0x30];
    u32 cnt;
    u32 calls;
    u8 _1ee4[0x1f44 - 0x1ee4];
    u8 sub[0x1fb0 - 0x1f44];
    u32 mtx[128];
    u32 cur[128];
    u8 _23b0[0x275c - 0x23b0];
    u32 mi;
    u8 _2760[0x2a78 - 0x2760];
    u32 pm;
    u8 _2a7c[0x2aa0 - 0x2a7c];
    u32 *map;
    u8 _2aa4[0x3ebc - 0x2aa4];
    u32 lst[(0x279f4 - 0x3ebc) / 4];
    u32 f279f4;
    u8 _279f8[0x27a0c - 0x279f8];
    u8 gp[4];
};

extern const u32 lbl_802A0C20[16] = {0x1E,0x21,0x24,0x27,0x2A,0x2D,0x30,0x33,0x40,0x43,0x46,0x49,0x4C,0x4F,0x52,0x55};
extern const u32 lbl_802A0C60[20] = {0,6,9,12,15,18,21,24,27,0,6,9,12,15,18,21,24,27,0,6};
extern const u32 lbl_802A0CB0[33] = {0,4,6,6,6,6,6,6,4,6,4,4,5,7,7,7,7,7,7,7,7,7,7,7,7,7,7,5,7,5,0,0,0};
extern const u32 lbl_802A0D34[33] = {0,7,6,5,4,3,2,1,0,0,0,0,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,0,0,0,0,0};
void fn_801699D8(void);
/* last word (0x802E8190) of the previous unit's switch table, owned here so this unit's table lands 8-aligned */
__declspec(section ".data") void *lbl_802E8190 = (char *)fn_801699D8 + 0x68;
extern FT lbl_803286D0;
extern u32 lbl_803646D0;
extern u32 lbl_803646D4;
extern f32 lbl_803646D8;

void __ct__9C80152B64Fv(Mtx *);
void fn_800D9E48(Mtx *, u32);
void fn_800D9DF8(Mtx *, u32);
u32 fn_80101A7C(u8);
void *fn_8021820C(void *, u32, u32);
void fn_800D51E0(void *);
void fn_800D52E8(void);
void DCInvalidateRange(void *, u32);
u32 fn_802181F8(void *);
void fn_800D65A8(u32);
u32 fn_801581F0(void *, Shape *, u32, u32, u32, void *);
void fn_80217224(const Prim *, u32, u8);
void fn_8021764C(const Prim *, u32);
void fn_80218758(u32, u32, u32, u32, u32, u32);
void fn_80219410(V3 *, u8 *, u8 *, u32, u32, u32);
void fn_802188F8(u8 *, u8 *, u8 *, u32, u32 *, u32, u32);
void fn_80218814(u8 *, u8 *, u8 *, u32, u32 *, u32, u32);
void fn_80218798(u8 *, u8 *, u32, u32 *, u32);

static inline u32 cvt(u8 b) { return fn_80101A7C(b); }
inline void setFmt(Shape *s) {
    u32 t2, t1, t0;
    t0 = *(volatile u8 *)&s->t18;
    t1 = *(volatile u8 *)&s->t19;
    t2 = *(volatile u8 *)&s->t1b;
    fn_80218758(lbl_802A0CB0[t0], lbl_802A0D34[t0], lbl_802A0CB0[t1], lbl_802A0D34[t1], lbl_802A0CB0[t2], lbl_802A0D34[t2]);
}

inline void *beginDL(Ctx *c, u32 size, u32 stride) {
    void *buf = fn_8021820C(c->gp, size, stride);
    fn_800D51E0(buf);
    DCInvalidateRange(buf, size);
    return buf;
}

inline void endDL(Ctx *c, Shape *s, u32 fmt, u32 base, u32 arg, const Prim *p) {
    fn_800D52E8();
    u32 tok = fn_802181F8(c->gp);
    u32 r = fn_801581F0(c->sub, s, fmt, base, arg, c->gp);
    fn_80217224(p, c->f279f4, r);
    fn_800D65A8(tok);
}

inline u32 getM(Ctx *c, u32 k) { return c->mtx[k]; }
inline void nrmLoad(Ctx *c, Mtx *m, u32 k) {
    u32 mt = c->mtx[k];
    __ct__9C80152B64Fv(m);
    lbl_803286D0.f174(m, mt);
    fn_800D9E48(m, k);
    c->cur[k] = mt;
}
inline u32 primCount(const Prim *p) {
    u32 n = p->n;
    switch (p->cmd[0] & 0xF8) {
    case 0xB8:
        return n;
    case 0xA8:
        n = n / 2;
        return n;
    case 0xB0:
        n = n - 1;
        return n;
    case 0x90:
        n = n / 3;
        return n;
    case 0x98:
    case 0xA0:
        n = n - 2;
        return n;
    default:
        return 0;
    }
}

void fn_8016A32C(Ctx *c, Shape *s, u32 nm, u8 *mi, u32 base, u32 nv, const Prim *p, u32 arg) {
    Mtx mA0;
    Mtx m60;
    Mtx m20;
    V3 b;
    V3 a;
    c->cnt += primCount(p);
    c->calls++;


    u32 cm = c->mi;
    if (s->fl & 0x800) {
        if (cm == 0x1b) {
            for (u32 i = 0; i < nm; i++) {
                u32 k;
                u32 mt = c->mtx[k = lbl_802A0C60[i]];
                __ct__9C80152B64Fv(&mA0);
                lbl_803286D0.f174(&mA0, mt);
                fn_800D9E48(&mA0, k);
                c->cur[k] = mt;
            }
        } else {
            u32 mt = c->mtx[cm];
            __ct__9C80152B64Fv(&m60);
            lbl_803286D0.f174(&m60, mt);
            fn_800D9E48(&m60, cm);
            c->cur[cm] = mt;
        }
    }

    u32 np = cvt(s->t18);
    u32 nc = cvt(s->t1b);
    struct { u32 v; } fmt;
    fmt.v = 5;
    if (c->fl & 0x800) {
        fmt.v &= ~0xC; fmt.v |= lbl_803646D0;
        if (cm != 0x1b) {
            u32 sz = nc * (nv * 6 + 3);
            beginDL(c, sz, nc * 6);
            a.x = lbl_803646D8;
            a.y = lbl_803646D8;
            a.z = lbl_803646D8;
            lbl_803286D0.f190(c->mtx[c->mi], &a, &b);
            setFmt(s);
            fn_80219410(&b, s->pos + np * (base * 3), s->nrm + nc * (base * 3), nv, np, nc);
        } else {
            if (nm <= 9) {
                for (u32 i = 0; i < nm; i++) {
                    u32 k = lbl_802A0C60[i];
                    u32 mt = c->pm;
                    __ct__9C80152B64Fv(&m20);
                    lbl_803286D0.f174(&m20, mt);
                    fn_800D9DF8(&m20, k);
                    c->mtx[k] = mt;
                }
            }
            fmt.v &= ~3; fmt.v |= lbl_803646D4;
            u32 st = nc * 6 + 0xc;
            u32 sz = nc * 3 + nv * st;
            beginDL(c, sz, st);
            for (u32 i = 0; i < nm; i++) c->lst[i] = c->map[mi[i]];
            setFmt(s);
            fn_802188F8(s->pos + np * (base * 3), s->nrm + nc * (base * 3), s->clr + base, nv, c->lst, np, nc);
        }
        endDL(c, s, fmt.v, base, arg, p);
    } else if (nm > 9) {
        for (u32 i = 0; i < nm; i++) c->lst[i] = c->map[mi[i]];
        if (s->fl & 0x800) {
            fmt.v &= ~0xF; fmt.v |= 0xA;
            u32 nn = cvt(s->t1b);
            u32 st = nn * 3 + 0xc;
            beginDL(c, nv * st, st);
            setFmt(s);
            fn_80218814(s->pos + np * (base * 3), s->nrm + base * (nn * 3), s->clr + base, nv, c->lst, np, nn);
        } else {
            fmt.v &= ~3; fmt.v |= lbl_803646D4;
            beginDL(c, nv * 0xc, 0xc);
            setFmt(s);
            fn_80218798(s->pos + np * (base * 3), s->clr + base, nv, c->lst, np);
        }
        endDL(c, s, fmt.v, base, arg, p);
    } else {
        fn_801581F0(c->sub, s, 5, base, arg, c->gp);
        fn_8021764C(p, c->f279f4);
    }
}
}
