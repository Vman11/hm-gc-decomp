#include "common.h"

extern "C" {

}
struct BR {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 more(); virtual void refill();
    u8 *ptr; u8 *end; s32 bits;
};
struct C { BR *br; };
struct HT { u8 b[0x19c]; };
struct Cmp { u8 pad[4]; u32 f4; u8 pad8[0xc]; s32 f14; u8 pad18[0x10]; u32 f28; u32 f2c; u8 pad30[0x14]; };
struct D {
    C *c; u8 pad4[0x34]; s32 err; HT tD[4]; HT tA[4]; u8 padd1c[0x1b40 - 0xd1c]; u16 restart; u8 pad1b42[2]; s32 prog;
    u8 pad1b48[0x1f50 - 0x1b48]; Cmp comps[255]; s32 ready; u32 ncomp; Cmp *sel[4];
    u8 pad6324[0x6710 - 0x6324]; s32 mcus; u8 pad6714[0x10]; s32 rst;
};
extern "C" {
extern char lbl_8029FA38[], lbl_8029FA58[];
void fn_80060568(const char *s, s32 a, s32 b, s32 c);
void fn_801F359C(BR *);
u8 fn_801F36D8(BR *);
void fn_801F4424(Cmp *, HT *, HT *);
void fn_801F4328(Cmp *);
void fn_801F439C(Cmp *);
void fn_801F43E0(Cmp *);
void fn_801F44A8(Cmp *, D *);
s32 fn_8013C334(D *);
void fn_801F3D50(Cmp *, C *, s32, s32);

static inline void Fill(C *c) {
    if (c->br->ptr >= c->br->end) {
        bool ok;
        c->br->refill();
        ok = false;
        if (c->br->ptr < c->br->end || c->br->more() == 0) ok = true;
        if (!ok) fn_80060568(lbl_8029FA38, 0, 0, 0);
    }
}
static inline void Align(C *c) {
    if (c->br->bits >= 0) {
        if (*c->br->ptr == 0xff) {
            c->br->ptr++;
            Fill(c);
            if (*c->br->ptr != 0) fn_80060568(lbl_8029FA58, 0, 0, 0);
            c->br->ptr++;
        } else {
            c->br->ptr++;
        }
        c->br->bits = -1;
    }
}
static inline int Restart(D *d) {
    u8 m;
    u32 i;
    Align(d->c);
    m = fn_801F36D8(d->c->br);
    if (m != 0xff) return 0;
    while (m == 0xff) m = fn_801F36D8(d->c->br);
    if (m < 0xd0 || m > 0xd7) return 0;
    if ((m & 15) != d->rst) return 0;
    d->rst++;
    d->rst = d->rst % 8;
    for (i = 0; i < d->ncomp; i++) d->sel[i]->f14 = 0;
    if (d->c->br->bits < 0) d->c->br->bits = 8;
    return 1;
}

s32 fn_8013C63C(D *d) {
    u32 i;
    u32 ss;
    s32 r;
    u32 cnt;
    u32 y;
    u32 x;
    if (d->ready == 0) { d->err = 1; return 0; }
    fn_801F359C(d->c->br);
    d->ncomp = fn_801F36D8(d->c->br);
    if (d->ncomp > 3 || d->ncomp < 1) { d->err = 1; return 0; }
    for (i = 0; i < d->ncomp; i++) {
        u8 b;
        d->sel[i] = &d->comps[fn_801F36D8(d->c->br)];
        if (d->sel[i]->f4 == 0) { d->err = 1; return 0; }
        b = fn_801F36D8(d->c->br);
        fn_801F4424(d->sel[i], &d->tA[b >> 4], &d->tD[b & 15]);
    }
    ss = fn_801F36D8(d->c->br);
    fn_801F36D8(d->c->br);
    fn_801F36D8(d->c->br);
    for (i = 0; i < d->ncomp; i++) {
        if (d->prog) {
            fn_801F4328(d->sel[i]);
            if (ss == 0) fn_801F439C(d->sel[i]);
            else fn_801F43E0(d->sel[i]);
        } else {
            fn_801F4328(d->sel[i]);
            fn_801F439C(d->sel[i]);
            fn_801F43E0(d->sel[i]);
        }
        fn_801F44A8(d->sel[i], d);
    }
    d->mcus++;
    if (d->c->br->bits < 0) d->c->br->bits = 8;
    if (d->prog) {
        Align(d->c);
        return 0;
    }
    {
        d->rst = cnt = 0;
        if (d->ncomp != 1) {
            r = fn_8013C334(d);
        } else {
            for (i = 0; i < d->ncomp; i++) d->sel[i]->f14 = cnt;
            for (y = 0; y < d->sel[0]->f28; y++) {
                for (x = 0; x < d->sel[0]->f2c; x++) {
                    if (d->restart != 0 && d->restart == cnt) {
                        if (!Restart(d)) { d->err = 1; r = 0; goto end; }
                        cnt = 0;
                    }
                    fn_801F3D50(d->sel[0], d->c, y, x);
                    cnt++;
                }
            }
            r = 1;
        }
    }
end:
    Align(d->c);
    return r;
}
}
