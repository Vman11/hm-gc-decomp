#include "common.h"
extern "C" {
}
struct BR {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 more(); virtual void refill();
    u8 *ptr; u8 *end; s32 bits;
};
struct C { BR *br; };
struct H;
struct Ob { u8 pad[0x44]; };
struct Cp { u8 pad[0x14]; s32 pred; H *ac; H *dc; u32 f20; u8 pad24[0x10]; s32 stride; Ob *obj; };
extern void (Ob::*lbl_80330CC8)(s16 *, u32);
extern "C" {
extern char lbl_802A5578[], lbl_802A5598[], lbl_802A55C4[];
extern u32 lbl_8029DE58[];
extern u32 lbl_8029DE7C[];
extern u32 lbl_802A5A20[];
void fn_80060568(const char *s, s32 a, s32 b, s32 c);
u32 fn_801F5150(H *h, C *c);
void *memset(void *, int, u32);

static inline void Fill(C *c) {
    if (c->br->ptr >= c->br->end) {
        bool ok;
        c->br->refill();
        ok = false;
        if (c->br->ptr < c->br->end || c->br->more() == 0) ok = true;
        if (!ok) fn_80060568(lbl_802A5578, 0, 0, 0);
    }
}
static inline void Next(C *c) {
    if (*c->br->ptr == 0xff) {
        c->br->ptr++;
        Fill(c);
        if (*c->br->ptr != 0) fn_80060568(lbl_802A5598, 0, 0, 0);
    }
    c->br->ptr++;
    c->br->bits = 8;
    Fill(c);
}
static inline s32 GetBits(C *c, s32 n) {
    s32 v;
    if (n <= c->br->bits) {
        c->br->bits -= n;
        v = (*c->br->ptr >> c->br->bits) & lbl_8029DE58[n];
    } else {
        v = 0;
        if (c->br->bits > 0) {
            n -= c->br->bits;
            v = (*c->br->ptr & lbl_8029DE58[c->br->bits]) << n;
        }
        while (n > 0) {
            Next(c);
            if (n >= 8) {
                n -= 8;
                v |= *c->br->ptr << n;
                c->br->bits = 0;
            } else {
                BR *b = c->br;
                v |= (*b->ptr & lbl_8029DE7C[n]) >> (8 - n);
                b->bits -= n;
                break;
            }
        }
    }
    return v;
}
static inline s32 Recv(C *c, s32 s) {
    s32 v = GetBits(c, s);
    if (v < (1 << (s - 1))) v += (-1 << s) + 1;
    return v;
}

void fn_801F3D50(Cp *cp, C *c, s32 y, s32 x) {
    s16 blk[64];
    u32 k;
    s32 s;
    s32 v;
    u32 rs;
    u32 r;

    memset(blk, 0, sizeof(blk));
    s = fn_801F5150(cp->dc, c);
    v = Recv(c, s);
    blk[0] = cp->pred = v + cp->pred;
    for (k = 1; k < 64; k++) {
        rs = fn_801F5150(cp->ac, c);
        s = rs & 15;
        r = (rs >> 4) & 0xfff;
        if (s == 0) {
            if (r != 15) break;
            k += 15;
        } else {
            k += r;
            if (k >= 64) fn_80060568(lbl_802A55C4, 0, 0, 0);
            blk[lbl_802A5A20[k]] = Recv(c, s);
        }
    }
    (cp->obj[x + y * cp->stride].*lbl_80330CC8)(blk, cp->f20);
}
}
