// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// fn_801988DC: portal polygon vs view-frustum clipper (NonMatching, DIFF 796 / SDIFF 48: reg colouring, classify loop K hoisted with plane fields in mine).
extern "C" {
typedef struct V3 { f32 x, y, z; } V3;
typedef struct Pl { f32 x, y, z, d; } Pl;
typedef struct Fr { u8 d[12]; } Fr;
struct Portal { u8 p0[8]; u32 fl; V3 c; V3 n; f32 r; V3 *v; u16 nv; u16 stride; };
struct Frus { Pl *pl; s32 n; };
struct Out { u8 p[0x248]; u32 npl; u32 nfr; Fr *fr; Pl *pl; };
extern "C" {
extern V3 lbl_803302C8[2][32];
extern f32 lbl_803305C8[32];
extern V3 lbl_80330648;
extern Pl lbl_80330654;
extern f32 lbl_80364C68;
#define VK (*(volatile f32 *)&lbl_80364C68)
f32 fn_8010155C(V3 *, V3 *);
void fn_8019998C(Fr *, Pl *, u32);
void fn_80101820(V3 *);

static inline u32 classify(Pl *pl, V3 *&q, u32 n, u32 stride) {
    u32 out = 0;
    u32 i;
    for (i = 0; i < n; i++) {
        out |= (pl->d + (q->x * pl->x + q->y * pl->y + q->z * pl->z) >= lbl_80364C68) << i;
        q = (V3 *)((u8 *)q + stride);
    }
    return out;
}

static inline void mkpl(Pl *pp, V3 *prev, V3 *cur, V3 *eye) {
    V3 c;
    f32 ax = cur->x - prev->x;
    f32 bx = eye->x - prev->x;
    f32 ay = cur->y - prev->y;
    f32 by = eye->y - prev->y;
    f32 az = cur->z - prev->z;
    f32 bz = eye->z - prev->z;
    c.z = ax * by - ay * bx;
    c.x = ay * bz - az * by;
    c.y = az * bx - ax * bz;
    fn_80101820(&c);
    pp->x = c.x;
    pp->y = c.y;
    pp->z = c.z;
    pp->d = -(eye->x * c.x + eye->y * c.y + eye->z * c.z);
}

#pragma opt_loop_invariants off
Fr *fn_801988DC(Portal *p, Out *o, Frus *f) {
    V3 *v;
    V3 *eye;
    Pl *pl;
    u32 buf;
    u32 i;
    u32 stride;
    u32 mask;
    Pl *end;
    V3 *q;
    u32 n;
    u32 out;
    if (p->fl & 2) return 0;
    if ((p->fl & 4) && fn_8010155C(&p->c, &lbl_80330648) > p->r) return 0;
    eye = &lbl_80330648;
    {
    V3 *v0 = p->v;
    if ((v0->x - eye->x) * p->n.x + (v0->y - eye->y) * p->n.y + (v0->z - eye->z) * p->n.z > VK)
        return 0;
    v = v0;
    }
    n = p->nv;
    pl = f->pl;
    stride = p->stride;
    mask = 0xffffffff >> (32 - n);
    buf = 0;
    end = pl + f->n;
    while (pl < end) {
        out = 0;
        q = v;
        for (i = 0; i < n; i++) {
            volatile f32 *dd = lbl_803305C8;
            dd[i] = pl->d + (q->x * pl->x + q->y * pl->y + q->z * pl->z);
            out |= (dd[i] >= VK) << i;
            q = (V3 *)((u8 *)q + stride);
        }
        if (out == 0) return 0;
        if (out == mask) {
            pl++;
            continue;
        }
        {
            V3 *d0 = lbl_803302C8[buf];
            V3 *dst = d0;
            V3 *dend = d0 + 32;
            V3 *cur = v;
            u32 j = n - 1;
            q = (V3 *)((u8 *)q - stride);
            for (i = 0; i < n; i++) {
                if (out & (1 << i)) {
                    if (!(out & (1 << j))) {
                        f32 t = -lbl_803305C8[j] / (lbl_803305C8[i] - lbl_803305C8[j]);
                        if (dst >= dend) return 0;
                        dst->x = t * (cur->x - q->x) + q->x;
                        dst->y = t * (cur->y - q->y) + q->y;
                        dst->z = t * (cur->z - q->z) + q->z;
                        dst++;
                    }
                    if (dst >= dend) return 0;
                    dst->x = cur->x;
                    dst->y = cur->y;
                    dst->z = cur->z;
                    dst++;
                } else if (out & (1 << j)) {
                    f32 t = lbl_803305C8[j] / (lbl_803305C8[j] - lbl_803305C8[i]);
                    if (dst >= dend) return 0;
                    dst->x = t * (cur->x - q->x) + q->x;
                    dst->y = t * (cur->y - q->y) + q->y;
                    dst->z = t * (cur->z - q->z) + q->z;
                    dst++;
                }
                j = i;
                q = cur;
                cur = (V3 *)((u8 *)cur + stride);
            }
            buf = (u8)!buf;
            n = dst - d0;
            v = d0;
            stride = 12;
            pl++;
            mask = 0xffffffff >> (32 - n);
        }
    }
    q = v;
    out = classify(&lbl_80330654, q, n, stride);
    if (out == 0) return 0;
    {
        Pl *pp;
        Fr *fr;
        u32 k = o->npl;
        u32 nk = k + n;
        if (nk > 0x800) {
            pp = 0;
        } else {
            pp = &o->pl[k];
            o->npl = nk;
        }
        k = o->nfr;
        if (k >= 0x200) {
            fr = 0;
        } else {
            fr = &o->fr[k];
            o->nfr = k + 1;
        }
        if (!pp || !fr) return 0;
        fn_8019998C(fr, pp, n);
        {
            V3 *prev = (V3 *)((u8 *)q - stride);
            V3 *cur = v;
            for (i = 0; i < n; i++) {
                mkpl(pp, prev, cur, &lbl_80330648);
                pp++;
                prev = cur;
                cur = (V3 *)((u8 *)cur + stride);
            }
        }
        return fr;
    }
}
}
}
