// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct Vec { f32 x, y, z; };
struct V3 : Vec { V3(); };
struct E { u8 nm[8]; u32 f8; u32 f12; u8 f16[8]; f32 f24; };
struct T {
    u32 f0;
    u16 flags;
    f32 f8;
    u32 n;
    u32 f16;
    u32 f20;
    V3 *f24;
    V3 *f28;
    V3 *g32;
    f32 *f36;
    f32 *f40;
    f32 *f44;
    u32 *f48;
    u32 *f52;
    u32 *f56;
    u32 *f60;
    u32 n2;
    E *f68;
    u32 f72;
    u8 f76, f77, f78;
    u32 f80;
    u32 f84;
    f32 f88, f92, f96, f100;
    u32 f104;
};
extern f32 lbl_80366250;
extern u16 lbl_80366290, lbl_80366292, lbl_8036625C, lbl_80366256, lbl_80366254, lbl_8036624E;
extern void *lbl_8035B4F8;
s32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
u32 fn_800FADA8(R *);
void fn_800FAEF8(R *);
void fn_800FAEA0(R *);
void fn_800FB064(R *, void *);
void fn_800F6E88(E *, void *);
void fn_802455E0(T *, u32, int);
void fn_80246A30(T *, int);
void fn_80264840(u32 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
static inline void rd(R *r, void *p, int ty) { if (ty == 0) *(s32 *)p = fn_800FB33C(r); else *(f32 *)p = fn_800FB2E0(r); }
static inline void rdI(R *r, s32 &v) { rd(r, &v, 0); }
static inline void rdF(R *r, f32 &v) { rd(r, &v, 1); }
static inline void setb(void *p, int ty, u32 v) { if (ty == 0) { *(u32 *)p = 1; if (!v) *(u32 *)p = 0; } else *(f32 *)p = 0; }
static inline void rdB(R *r, s32 &v, u32 &b) { rd(r, &v, 0); setb(&b, 0, v); }
void fn_80246C68(T *t, R *r) {
    u32 n = 0;
    u32 ia = -1;
    u32 ib = -1;
    u32 ic = -1;
    u32 id = -1;
    u32 ie = -1;
    u32 iff = -1;
    u32 ig = -1;
    s32 sel = -1;
    s32 n2 = 0;
    s32 h0 = -1;
    s32 h1 = -1;
    s32 h2 = -1;
    s32 h3 = -1;
    u32 tok;
    s32 v;
    u32 b;
    f32 f;
    if (t->flags & 1) {
        if (t->n) {
            delete[] t->f24;
            delete[] t->f56;
            delete[] t->f60;
            if (t->f28) delete[] t->f28;
            if (t->g32) delete[] t->g32;
            if (t->f36) delete[] t->f36;
            if (t->f44) delete[] t->f44;
            if (t->f48) delete[] t->f48;
            if (t->f52) delete[] t->f52;
            if (t->f40) delete[] t->f40;
        }
        if (t->f68) delete[] t->f68;
        t->f0 = 1;
        t->f8 = lbl_80366250;
        t->n = 0;
        t->f16 = 0;
        t->f20 = 0;
        t->f24 = 0;
        t->f28 = 0;
        t->g32 = 0;
        t->f36 = 0;
        t->f44 = 0;
        t->f48 = 0;
        t->f40 = 0;
        t->f52 = 0;
        t->n2 = 0;
        t->f68 = 0;
        t->f56 = 0;
        t->f60 = 0;
        fn_80264840(&t->f72);
        t->f72 = 0;
        t->flags = 0;
        t->f104 = 0;
    }
    if (!t->f68) {
        if (!lbl_8035B4F8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B4F8);
        t->f68 = new E[120];
        fn_800F7E98();
        if (!t->f68) fn_800604C4(-4, 0, 0, 0);
    }
    fn_800FAEF8(r);
    while ((tok = r->next()) != 6) {
        switch (tok) {
        case 59:
            fn_800FAEF8(r);
            while ((tok = r->next()) != 6) {
                switch (tok) {
                case 60: { rdI(r, v); t->f72 |= 1; t->f76 = v; break; }
                case 61: { rdI(r, v); t->f72 |= 2; t->f77 = v; break; }
                case 62: { rdI(r, v); t->f72 |= 4; t->f78 = v; break; }
                case 63: { rdB(r, v, b); t->f72 |= 8; t->f80 = b; break; }
                case 64: { rdB(r, v, b); t->f72 |= 16; t->f84 = b; break; }
                case 65: { rdF(r, f); t->f72 |= 32; t->f88 = f; break; }
                case 66: { rdF(r, f); t->f72 |= 64; t->f92 = f; break; }
                case 67: { rdF(r, f); t->f72 |= 128; t->f96 = f; break; }
                case 68: { rdF(r, f); t->f72 |= 256; t->f100 = f; break; }
                default: r->err(30); break;
                }
            }
            break;
        case 69: t->f0 = fn_800FB33C(r); break;
        case 70: t->f16 = 1; break;
        case 71: t->f8 = fn_800FB2E0(r); break;
        case 73:
            fn_800FAEF8(r);
            n = 0;
            while ((tok = r->next()) != 6) {
                switch (tok) {
                case 74: t->flags |= lbl_80366292; ia = n++; break;
                case 75: t->flags |= lbl_8036625C; ib = n++; break;
                case 76: t->flags |= lbl_80366256; ic = n++; break;
                case 77: t->flags |= lbl_80366254; id = n++; break;
                case 78: t->flags |= lbl_8036624E; ie = n++; break;
                case 79: iff = n++; break;
                case 80: ig = n++; break;
                default: r->err(30); break;
                }
            }
            break;
        case 72: {
            u32 i, j;
            Vec w;
            f32 g;
            u32 cnt = fn_800FADA8(r);
            fn_802455E0(t, cnt, 1);
            t->n = cnt;
            for (i = 0; i < t->n; i++) {
                for (j = 0; j < n; j++) {
                    if (ia == j) sel = 0;
                    if (ib == j) sel = 1;
                    if (ic == j) sel = 2;
                    if (id == j) sel = 3;
                    if (ie == j) sel = 4;
                    if (iff == j) sel = 5;
                    if (ig == j) sel = 6;
                    switch (sel) {
                    case 0: { rdF(r, w.x); rdF(r, w.y); rdF(r, w.z); (Vec &)t->f24[i] = w; fn_80246A30(t, 0); break; }
                    case 1: { rdF(r, w.x); rdF(r, w.y); rdF(r, w.z); if (t->flags & 4) (Vec &)t->f28[i] = w; break; }
                    case 2: { rdF(r, w.x); rdF(r, w.y); rdF(r, w.z); if (t->flags & 8) (Vec &)t->g32[i] = w; break; }
                    case 3: { rdF(r, g); if (t->flags & 16) t->f36[i] = g; break; }
                    case 4: { rdF(r, g); if (t->flags & 32) t->f40[i] = g; break; }
                    case 5: { rdF(r, g); if (t->f44 && (s32)i >= 0 && (s32)i < (s32)t->n) t->f44[(s32)i] = g; break; }
                    case 6: { u32 v = fn_800FB33C(r); if (t->f48 && (s32)i >= 0 && (s32)i < (s32)t->n) t->f48[(s32)i] = v; break; }
                    }
                }
            }
            fn_800FAEA0(r);
            break;
        }
        case 81:
            fn_800FAEF8(r);
            while ((tok = r->next()) != 6) {
                switch (tok) {
                case 83: h0 = n2++; break;
                case 84: h1 = n2++; break;
                case 85: h2 = n2++; break;
                case 86: h3 = n2++; break;
                default: r->err(30); break;
                }
            }
            break;
        case 82: {
            u32 i;
            s32 j;
            char buf[8];
            t->n2 = fn_800FADA8(r);
            for (i = 0; i < t->n2; i++) {
                fn_800FB064(r, buf);
                fn_800F6E88(&t->f68[i], buf);
                if (n2 == 0) {
                    t->f68[i].f8 = fn_800FB33C(r);
                    t->f68[i].f12 = fn_800FB33C(r);
                    t->f68[i].f24 = lbl_80366250;
                    t->f68[i].f16[0] = 0;
                } else {
                    for (j = 0; j < n2; j++) {
                        if (h0 == j) sel = 0;
                        if (h1 == j) sel = 1;
                        if (h2 == j) sel = 2;
                        if (h3 == j) sel = 3;
                        switch (sel) {
                        case 0: t->f68[i].f8 = fn_800FB33C(r); break;
                        case 1: t->f68[i].f12 = fn_800FB33C(r); break;
                        case 2: t->f68[i].f24 = fn_800FB2E0(r); break;
                        case 3: fn_800FB064(r, t->f68[i].f16); break;
                        default: r->err(30); break;
                        }
                    }
                }
            }
            fn_800FAEA0(r);
            break;
        }
        default: r->err(30); break;
        }
    }
    t->flags |= lbl_80366290;
}

} /* extern "C" */
