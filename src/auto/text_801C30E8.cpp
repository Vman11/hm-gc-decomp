// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N {
    u8 pad[0x6c]; u32 f6c; u8 pad70[0x80 - 0x70];
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    virtual void s21();
    virtual void s22();
    virtual void s23();
    virtual void s24();
    virtual void s25();
    virtual void s26();
    virtual u32 v74(f32,f32,int);
    virtual void s28();
    virtual u32 v7C(f32,f32,int);
    virtual void v80(f32,f32,int);
    virtual void s31();
    virtual void v88(f32,f32,int);
    virtual void v8C(f32,f32,int);
    virtual void v90(f32,f32,int);
    virtual void s35();
    virtual void s36();
    virtual void v9C(int);
    virtual void vA0(int);
    virtual u32 vA4(int,int);
    virtual u32 vA8(int,int);
    virtual void vAC(int,int);
    virtual void vB0(int,int);
    virtual void vB4(int);
    virtual void vB8(int);
    virtual void vBC(int);
    virtual void vC0(int);
    virtual void vC4(int);
    virtual void vC8(int);
    virtual void vCC(int);
    virtual void vD0(int);
    virtual void vD4(int);
    virtual void vD8(int);
    virtual void vDC(int);
    virtual void vE0(int);
    virtual void vE4(int);
    virtual void vE8(int);
    virtual void vEC(int,int);
    virtual void vF0(u32);
    u8 pad84[0x11c - 0x84]; N *f11c;
};
struct O;
struct H { virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
 virtual void h10(); virtual void h11(); virtual void h12(); virtual void h13(); virtual void h14(); virtual void h15(); virtual void h16(); virtual void h17(); virtual void h18(); virtual void h19();
 virtual void h20(); virtual void h21(); virtual void h22(); virtual void h23(); virtual void h24(); virtual void h25(); virtual void h26(); virtual void h27(); virtual void h28(); virtual void h29();
 virtual void h30(); virtual void h31(); virtual void h32(); virtual void h33(); virtual void h34(); virtual void h35(); virtual void h36(); virtual void h37(); virtual void h38(); virtual void h39();
 virtual void h40(); virtual void h41(); virtual void h42(); virtual void h43(); virtual void h44(); virtual void h45(); virtual void h46(); virtual void h47(); virtual void h48(); virtual void h49(); virtual void ev(O *, int); };
struct L { H *f0; u8 pad4[4]; L *f8; };
struct O { u8 pad[0x48]; f32 x48; f32 y4c; f32 x50; f32 y54; u8 pad58[0x88 - 0x58]; L *f88; u8 pad8c[0x144 - 0x8c]; u32 f144; u32 f148; u8 pad14c[0x164 - 0x14c]; u32 f164; };
struct C { u8 pad[0x1c]; u32 f1c; u32 f20; u8 pad24[0x110 - 0x24]; f32 f110; f32 f114; };
struct E { u8 pad[8]; int code; int kind; union { int i; f32 f; } v; };
struct W {
    C *f0; void *f4; u8 pad8[4]; N *fc; u8 pad10[4]; O *f14; N *f18; N *f1c; N *f20; void *f24; void *f28; N *f2c;
    f32 f30, f34, f38, f3c; u8 pad40[0x50 - 0x40]; u32 f50; u32 f54; f32 f58;
};
extern u8 lbl_802EBC90[];
extern u8 lbl_802EBC10[];
extern u8 lbl_802E05C8[];
extern f32 lbl_80364FD8;
extern f32 lbl_80364FE0;
void fn_801C2014(void *, f32, f32, int, void *);
void fn_801C1D78(void *, f32, f32, int, void *);
void fn_801DB130(void *, void *, f32, f32, int);
void fn_801C1284(W *, f32, f32);
int fn_801C1774(W *, f32, f32, int);

inline u8 fn_801C1760(N *n) { return (n->f6c >> 1) & 1; }
static inline u8 ok(N *n) { u8 r = n != 0; if (r) r = fn_801C1760(n); return r; }
static inline void call8C(N *n, f32 x, f32 y, int fl) { if (n) n->v8C(x, y, fl); }
static inline void call90(N *n, f32 x, f32 y, int fl) { if (n) n->v90(x, y, fl); }
static inline void notify(O *o, int e) {
    L *n;
    for (n = o->f88; n; n = n->f8) n->f0->ev(o, e);
    o->f148 = o->f144;
    o->f144 = (o->f144 & 0xFFFF0000) | e;
}
static inline void press(W *w, f32 x, f32 y, int fl) {
    if (w->f20) {
        w->f18 = w->f20;
        w->f30 = x;
        w->f34 = y;
        for (w->f18 = w->f20; w->f18; w->f18 = w->f18->f11c)
            if (w->f18->v74(x, y, fl) == 1) break;
    }
}
static inline void release(W *w, f32 x, f32 y, int fl) {
    if (w->f18) {
        if (w->f24 && w->f28) fn_801DB130(w->f28, w->f24, x, y, fl);
        w->f18->v80(x, y, fl);
        w->f18 = 0;
        w->f24 = 0;
        w->f28 = 0;
    }
}
static inline void press2(W *w, f32 x, f32 y, int fl) {
    if (w->f20) {
        w->f38 = x;
        w->f3c = y;
        for (w->f1c = w->f20; w->f1c; w->f1c = w->f1c->f11c)
            if (w->f1c->v7C(x, y, fl) == 1) break;
    }
}
static inline void release2(W *w, f32 x, f32 y, int fl) {
    w->f0->f1c = 0;
    w->f0->f20 = 0;
    if (w->f1c) {
        w->f1c->v88(x, y, fl);
        w->f1c = 0;
    }
}

void fn_801C30E8(W *w, E *e) {
    O *c1;
    O *c2;
    O *c3;
    N *n;
    L *l;
    int kind = e->kind;
    if (kind == 0) {
        w->f54 = 0;
        switch (e->code) {
        case 0x1000003A:
            if (e->v.i == 1) w->f50 ^= 0x40;
            break;
        case 0x1000002A:
            if (e->v.i == 1) w->f50 |= 1;
            else if (e->v.i == 0) w->f50 &= ~1;
            break;
        case 0x10000036:
            if (e->v.i == 1) w->f50 |= 2;
            else if (e->v.i == 0) w->f50 &= ~2;
            break;
        case 0x1000001D:
            if (e->v.i == 1) w->f50 |= 0x10;
            else if (e->v.i == 0) w->f50 &= ~0x10;
            break;
        case 0x1000009D:
            if (e->v.i == 1) w->f50 |= 0x20;
            else if (e->v.i == 0) w->f50 &= ~0x20;
            break;
        case 0x10000038:
            if (e->v.i == 1) w->f50 |= 4;
            else if (e->v.i == 0) w->f50 &= ~4;
            break;
        case 0x100000B8:
            if (e->v.i == 1) w->f50 |= 8;
            else if (e->v.i == 0) w->f50 &= ~8;
            break;
        default:
            if (e->v.i == 1) {
                u8 k = e->code;
                if (k <= 0x7f) {
                    u8 ch;
                    u32 fl = w->f50;
                    if (fl & 3) ch = lbl_802EBC90[k];
                    else ch = lbl_802EBC10[k];
                    if ((lbl_802E05C8[ch] & 0xC0) && (fl & 0x40)) ch ^= 0x20;
                    if ((int)ch >= 0x20 && (int)ch <= 0x7e) {
                        if (ok(w->fc)) w->fc->vF0(ch);
                        w->f54 = ch;
                        w->f58 = lbl_80364FD8;
                    }
                }
            }
            break;
        }
    } else {
        switch (kind) {
        case 0x3a:
            if (w->f14) {
                O *c1 = w->f14;
                if (e->v.i == 1) {
                    if (w->f2c && w->f2c == w->f20) call8C(w->f20, c1->x48, c1->y4c, w->f50);
                    fn_801C2014(w, c1->x48, c1->y4c, w->f50, w->f4);
                    press(w, c1->x48, c1->y4c, w->f50);
                    w->f2c = w->f20;
                } else {
                    fn_801C1D78(w, c1->x48, c1->y4c, w->f50, w->f4);
                    release(w, c1->x48, c1->y4c, w->f50);
                }
                break;
            }
        case 0x3b:
            if ((c1 = w->f14) != 0) {
                if (e->v.i == 1) press2(w, c1->x48, c1->y4c, w->f50);
                else release2(w, c1->x48, c1->y4c, w->f50);
                break;
            }
        case 0x3e:
            if ((c2 = w->f14) != 0) {
                c2->x48 = e->v.f;
                c2->x50 = lbl_80364FE0 + e->v.f;
                c2->x48 = c2->x48 / w->f0->f110;
                c2->x50 = c2->x50 / w->f0->f114;
                fn_801C1284(w, c2->x48, c2->y4c);
                { c1 = w->f14; for (l = c1->f88; l; l = l->f8) l->f0->ev(c1, 1); c1->f148 = c1->f144; c1->f144 = (c1->f144 & 0xFFFF0000) | 1; }
                w->f14->f164 = 0;
                fn_801C1774(w, c2->x48, c2->y4c, w->f50);
            }
            break;
        case 0x3f:
            if ((c2 = w->f14) != 0) {
                c2->y4c = e->v.f;
                c2->y54 = lbl_80364FE0 + e->v.f;
                c2->y4c = c2->y4c / w->f0->f110;
                c2->y54 = c2->y54 / w->f0->f114;
                fn_801C1284(w, c2->x48, c2->y4c);
                notify(w->f14, 1);
                w->f14->f164 = 0;
                fn_801C1774(w, c2->x48, c2->y4c, w->f50);
            }
            break;
        case 0x3c:
            if ((c3 = w->f14) != 0) {
                call8C(w->f20, c3->x48, c3->y4c, w->f50);
                break;
            }
        case 0x3d:
            if ((c3 = w->f14) != 0) {
                call90(w->f20, c3->x48, c3->y4c, w->f50);
                break;
            }
        default: {
            int v = e->v.i;
            if (v == 1 && ok(w->fc)) {
                n = 0;
                switch (kind) {
                case 0x39: w->fc->vEC(w->f50, 1); break;
                case 0x40: w->fc->v9C(w->f50); break;
                case 0x41: w->fc->vA0(w->f50); break;
                case 0x42: { u32 r = w->fc->vA4(w->f50, 1); w->f54 = 0x42; w->f58 = lbl_80364FD8;
                    if (r != 1) n = w->fc->f11c;
                    for (; n; n = n->f11c) if (n->vA4(w->f50, 1) == 1) break; } break;
                case 0x43: { u32 r = w->fc->vA8(w->f50, 1); w->f54 = 0x43; w->f58 = lbl_80364FD8;
                    if (r != 1) n = w->fc->f11c;
                    for (; n; n = n->f11c) if (n->vA8(w->f50, 1) == 1) break; } break;
                case 0x45: w->fc->vAC(w->f50, 1); w->f54 = 0x45; w->f58 = lbl_80364FD8; break;
                case 0x46: w->fc->vB0(w->f50, 1); w->f54 = 0x46; w->f58 = lbl_80364FD8; break;
                case 0x48: w->fc->vB4(w->f50); w->f54 = 0x48; w->f58 = lbl_80364FD8; break;
                case 0x49: w->fc->vB8(w->f50); w->f54 = 0x49; w->f58 = lbl_80364FD8; break;
                case 0x4a: w->fc->vBC(w->f50); break;
                case 0x4b: w->fc->vC0(w->f50); break;
                case 0x4c: w->fc->vC4(w->f50); break;
                case 0x4d: w->fc->vC8(w->f50); w->f54 = 0x4d; w->f58 = lbl_80364FD8; break;
                case 0x4e: w->fc->vCC(w->f50); w->f54 = 0x4e; w->f58 = lbl_80364FD8; break;
                case 0x4f: w->fc->vD0(w->f50); break;
                case 0x50: w->fc->vD4(w->f50); break;
                case 0x51: w->fc->vDC(w->f50); w->f54 = 0x51; w->f58 = lbl_80364FD8; break;
                case 0x52: w->fc->vD8(w->f50); break;
                case 0x53: w->fc->vE0(w->f50); break;
                case 0x54: w->fc->vE4(w->f50); break;
                case 0x55: w->fc->vE8(w->f50); break;
                }
            } else if (v != 0 && ok(w->fc)) {
                n = 0;
                switch (kind) {
                case 0x47:
                    if (v == 2) { w->fc->vAC(w->f50, 1); w->f54 = 0x45; w->f58 = lbl_80364FD8; }
                    else if (v == 3) { w->fc->vB0(w->f50, 1); w->f54 = 0x46; w->f58 = lbl_80364FD8; }
                    break;
                case 0x44:
                    if (v == 3) { u32 r = w->fc->vA4(w->f50, 1); w->f54 = 0x42; w->f58 = lbl_80364FD8;
                    if (r != 1) n = w->fc->f11c;
                    for (; n; n = n->f11c) if (n->vA4(w->f50, 1) == 1) break; } else if (v == 2) { u32 r = w->fc->vA8(w->f50, 1); w->f54 = 0x43; w->f58 = lbl_80364FD8;
                    if (r != 1) n = w->fc->f11c;
                    for (; n; n = n->f11c) if (n->vA8(w->f50, 1) == 1) break; }
                    break;
                }
            } else {
                w->f54 = 0;
            }
        }
        }
    }
}

} /* extern "C" */
