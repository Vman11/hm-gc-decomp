// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
extern "C" {
typedef f32 Mtx[4][4];

struct Shape {
    u8 _0[0x10];
    u32 fl;
    u32 vs;
    u8 t18, t19, t1a, t1b;
    u8 _1c[0x4c - 0x1c];
    u8 *pos;
    u8 *clr;
    u8 *tex;
    u8 *nrm;
    u8 _5c[4];
    u32 f60;
};

struct FT {
    u8 _0[0x174];
    void (*f174)(Mtx *, u32);
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
    u8 _2760[0x2aa0 - 0x2760];
    u32 *map;
    u8 _2aa4[0x3ebc - 0x2aa4];
    u32 lst[(0x279f4 - 0x3ebc) / 4];
    u32 f279f4;
    u8 _279f8[0x27a0c - 0x279f8];
    u8 gp[4];
};

extern u32 lbl_802A0CB0[];
extern u32 lbl_802A0D34[];
extern FT lbl_803286D0;
extern u32 lbl_803646D0;

void fn_80152B64(Mtx *);
void fn_800D9E48(Mtx *, u32);
u32 fn_80101A7C(u8);
void *fn_8021820C(void *, u32, u32);
void fn_800D51E0(void *);
void fn_800D52E8(void);
void DCInvalidateRange(void *, u32);
u32 fn_802181F8(void *);
void fn_800D65A8(u32);
void fn_800D6B8C(u32, u32, u16);
#define WGP (*(volatile u16 *)0xCC008000)
u32 fn_801581F0(void *, Shape *, u32, u32, u32, void *);
void fn_80218758(u32, u32, u32, u32, u32, u32);
void fn_80218DFC(u8 *, u8 *, u8 *, u32, u32 *, void *, u32, u32, u32, u32, u32);
void fn_80218BB0(u8 *, u8 *, u8 *, u32, u32 *, void *, u32, u32, u32, u32, u32);
void fn_80218A48(u8 *, u8 *, u32, u32 *, void *, u32, u32, u32, u32);

inline void *beginDL(Ctx *c, u32 size, u32 stride) {
    void *buf = fn_8021820C(c->gp, size, stride);
    fn_800D51E0(buf);
    DCInvalidateRange(buf, size);
    return buf;
}
inline void nrmLoad(Ctx *c, Mtx *m, u32 k) {
    u32 mt = c->mtx[k];
    fn_80152B64(m);
    lbl_803286D0.f174(m, mt);
    fn_800D9E48(m, k);
    c->cur[k] = mt;
}
static inline u32 cvt(u8 b) { return fn_80101A7C(b); }
inline u32 primCount2(u32 t, u32 n) {
    switch (t) {
    case 0xB8: return n;
    case 0xA8: return n / 2;
    case 0xB0: return n - 1;
    case 0x90: return n / 3;
    case 0x98:
    case 0xA0: return n - 2;
    default: return 0;
    }
}

inline void setFmt(Shape *s) {
    u32 t0, t1, t2;
    t0 = *(volatile u8 *)&s->t18;
    t1 = *(volatile u8 *)&s->t19;
    t2 = *(volatile u8 *)&s->t1b;
    fn_80218758(lbl_802A0CB0[t0], lbl_802A0D34[t0], lbl_802A0CB0[t1], lbl_802A0D34[t1], lbl_802A0CB0[t2], lbl_802A0D34[t2]);
}
void fn_8016708C(Ctx *c, Shape *s, u32 nm, u8 *mi, u32 *types, u32 base, u32 nv) {
    u32 vs;
    u32 k;
    u32 h;
    u32 nt;
    u32 ret;
    u32 nc;
    u16 v;
    u32 np;
    u32 fmt;
    c->cnt += primCount2(types[c->f279f4], nv);
    c->calls++;
    k = c->mi;
    np = cvt(s->t18);
    nc = cvt(s->t1b);
    nt = cvt(s->t19);
    setFmt(s);
    fmt = 10;
    if (c->fl & 0x800) {
        Mtx m;
        nrmLoad(c, &m, k);
        fmt &= ~0xC; fmt |= lbl_803646D0;
        u32 st = nc * 6 + 0xc;
        u32 sz = nc * 3 + st * nv;
        void *buf = fn_8021820C(c->gp, sz, st);
        fn_800D51E0(buf);
        DCInvalidateRange(buf, sz);
        vs = s->vs;
        if (s->fl & 0x400) {
            for (u32 i = 0; i < nm; i++) c->lst[i] = c->map[mi[i]];
            fn_80218DFC(s->clr + nt * (base * vs), s->pos + np * (base * 3), s->nrm + nc * (base * 3), nv, c->lst,
                        s->tex + base * (vs + 1), 0, vs, np, nc, nt);
        } else {
            fn_80218DFC(s->clr + nt * (base * vs), s->pos + np * (base * 3), s->nrm + nc * (base * 3), nv, c->map,
                        mi, vs + 1, vs, np, nc, nt);
        }
        fn_800D52E8();
        h = fn_802181F8(c->gp);
        ret = fn_801581F0(c->sub, s, fmt, base, base, c->gp);
    } else if (s->fl & 0x800) {
        Mtx m;
        nrmLoad(c, &m, k);
        u32 sz = nv * (nc * 3 + 0xc);
        void *buf = fn_8021820C(c->gp, sz, sz / nv);
        fn_800D51E0(buf);
        DCInvalidateRange(buf, sz);
        vs = s->vs;
        if (s->fl & 0x400) {
            for (u32 i = 0; i < nm; i++) c->lst[i] = c->map[mi[i]];
            fn_80218BB0(s->clr + nt * (base * vs), s->pos + np * (base * 3), s->nrm + nc * (base * 3), nv, c->lst,
                        s->tex + base * (vs + 1), 0, vs, np, nc, nt);
        } else {
            fn_80218BB0(s->clr + nt * (base * vs), s->pos + np * (base * 3), s->nrm + nc * (base * 3), nv, c->map,
                        mi, vs + 1, vs, np, nc, nt);
        }
        fn_800D52E8();
        h = fn_802181F8(c->gp);
        ret = fn_801581F0(c->sub, s, fmt, base, base, c->gp);
    } else {
        u32 sz = nv * 0xc;
        void *buf = fn_8021820C(c->gp, sz, 0xc);
        fn_800D51E0(buf);
        DCInvalidateRange(buf, sz);
        vs = s->vs;
        if (s->fl & 0x400) {
            for (u32 i = 0; i < nm; i++) c->lst[i] = c->map[mi[i]];
            fn_80218A48(s->clr + nt * (base * vs), s->pos + np * (base * 3), nv, c->lst,
                        s->tex + base * (vs + 1), 0, vs, np, nt);
        } else {
            fn_80218A48(s->clr + nt * (base * vs), s->pos + np * (base * 3), nv, c->map,
                        mi, vs + 1, vs, np, nt);
        }
        fn_800D52E8();
        h = fn_802181F8(c->gp);
        ret = fn_801581F0(c->sub, s, fmt, base, base, c->gp);
    }
    v = 0;
    fn_800D6B8C(types[c->f279f4], ret, nv);
    switch (s->f60) {
    case 1: for (; v < nv; v++) { WGP = v; } break;
    case 2: for (; v < nv; v++) { WGP = v; WGP = v; } break;
    case 3: for (; v < nv; v++) { WGP = v; WGP = v; WGP = v; } break;
    case 4: for (; v < nv; v++) { WGP = v; WGP = v; WGP = v; WGP = v; } break;
    case 5: for (; v < nv; v++) { WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; } break;
    case 6: for (; v < nv; v++) { WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; } break;
    case 7: for (; v < nv; v++) { WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; } break;
    case 8: for (; v < nv; v++) { WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; WGP = v; } break;
    case 0:
    default:
        for (; v < nv; v++) {
            for (u32 j = 0; j < s->f60; j++) WGP = v;
        }
        break;
    }
    fn_800D65A8(h);
}
}
