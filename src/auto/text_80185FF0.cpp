#include "common.h"

extern "C" {
struct Fmt { u8 pad[0x1c]; };
struct VB {
    u8 *p0; s32 s0; u8 pad8[0x10];
    u8 *p1; s32 s1; u8 pad20[0x10];
    u8 *p2; u8 pad34[0x1c]; s32 s2; u8 pad54[0x70 - 0x54];
};
struct Dev {
    virtual void v0();
    virtual u32 maxV();
    virtual void v2();
    virtual u32 maxI();
    virtual void v4();
    virtual void lockV(Fmt *, u32, VB *);
    virtual void unlockV(u32);
    virtual void v7();
    virtual void v8();
    virtual void lockI(u32, u16 **);
    virtual void unlockI(u32);
    virtual void draw(void *, void *, s32, u8 *);
};
struct Ob {
    u8 pad[0x30];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual Dev *dev();
};
struct Bb {
    Ob *f0;
    u8 pad4[0x1930 - 4];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void begin();
    virtual void end();
};
struct G { f32 *f0; u32 f4; u32 f8; u32 fC; };
extern f32 lbl_8036498C, lbl_80364990, lbl_80364994, lbl_80364998, lbl_8036499C;
void fn_8014CA08(Fmt *);
void fn_8014C8C8(Fmt *, u32, u32, u32);

void fn_80185FF0(G *g, Bb *b, void *a5, f32 *uv, f32 *du, f32 *dv, s32 a9, u8 *a10, f32 scale) {
    VB vb;
    Fmt fmt;
    u16 *ip;
    Dev *dev;
    u32 s, s7;
    f32 *base, *hp;
    u32 maxV, maxI, totV, totI;
    u32 rows, cols, row, col, nv, ni, vtx, idx;
    f32 stepX, du7x, du7y, dv7x, dv7y, nz;
    f32 x0, y0, u0, v0, ru, rv;
    f32 dux, duy, dvx, dvy;
    fn_8014CA08(&fmt);
    ip = 0;
    dev = b->f0->dev();
    b->begin();
    s = g->fC + (g->f4 + g->fC);
    base = g->f0 + g->fC + g->fC * s;
    s7 = s * 7;
    hp = base;
    fn_8014C8C8(&fmt, 0x8880, 0, 1);
    maxV = dev->maxV();
    maxI = dev->maxI();
    u0 = ru = uv[0];
    v0 = rv = uv[1];
    y0 = x0 = lbl_8036498C;
    totV = (g->f4 + g->f4 / 7) * (g->f8 + g->f8 / 7);
    totI = (g->f4 - 1) * (g->f8 - 1) * 6;
    stepX = lbl_80364990 * scale;
    du7x = du[0] * lbl_80364990;
    du7y = du[1] * lbl_80364990;
    dv7x = dv[0] * lbl_80364990;
    dv7y = dv[1] * lbl_80364990;
    row = 0;
    col = 0;
    rows = 8;
    cols = 8;
    if (g->f8 < 8) rows = g->f8;
    if (totV < maxV) maxV = totV;
    if (totI < maxI) maxI = totI;
    idx = 0;
    vtx = 0;
    dev->lockV(&fmt, maxV, &vb);
    dev->lockI(maxI, &ip);
    nz = lbl_80364994 * scale;
    dux = du[0];
    duy = du[1];
    dvx = dv[0];
    dvy = dv[1];
    for (;;) {
        f32 *prev, *cur, *next;
        f32 x, y, u, v, ul, vl;
        s32 r;
        u16 *end;
        u32 j;
        if (col + cols > g->f4) cols = g->f4 - col;
        nv = cols * rows;
        ni = (nv - cols - rows + 1) * 2; ni = ni + ni + ni;
        if (vtx + nv > maxV || idx + ni > maxI) {
            dev->unlockV(vtx);
            dev->unlockI(idx);
            dev->draw(b, a5, a9, a10);
            totV -= vtx;
            if (totV < maxV) maxV = totV;
            totI -= idx;
            if (totI < maxI) maxI = totI;
            idx = 0;
            vtx = 0;
            dev->lockV(&fmt, maxV, &vb);
            dev->lockI(maxI, &ip);
        }
        cur = hp;
        prev = hp - s;
        next = hp + s;
        x = x0;
        y = y0;
        u = ul = u0;
        v = vl = v0;
        for (r = 0; r < (s32)rows; r++) {
            f32 *c = cur, *nn = next;
            s32 k;
            for (k = 0; k < (s32)cols; k++) {
                f32 *pv, *pn, *pt;
                f32 h, d;
                pv = (f32 *)vb.p0;
                vb.p0 += vb.s0;
                pv[0] = x;
                x += scale;
                pv[1] = y;
                pv[2] = *c;
                pn = (f32 *)vb.p1;
                *(u8 *volatile *)&vb.p1 = vb.p1 + vb.s1;
                {
                f32 a0, a1, a2, a3;
                h = *(volatile f32 *)c;
                a0 = ((volatile f32 *)prev)[-1];
                a1 = ((volatile f32 *)nn)[1];
                a2 = ((volatile f32 *)c)[-1];
                a3 = ((volatile f32 *)c)[1];
                d = *(volatile f32 *)&lbl_80364998 * ((a0 - h) + (h - a1));
                pn[0] = *(volatile f32 *)&lbl_8036499C * (d + ((a2 - h) + (h - a3)));
                }
                h = *c++;
                pn[1] = lbl_8036499C * (d + ((*prev++ - h) + (h - *nn++)));
                pn[2] = nz;
                pt = (f32 *)vb.p2;
                vb.p2 += vb.s2;
                pt[0] = u;
                u += dux;
                pt[1] = v;
                v += duy;
            }
            ul += dvx;
            vl += dvy;
            prev = cur;
            cur = next;
            next += s;
            x = x0;
            u = ul;
            v = vl;
            y += scale;
        }
        end = ip + ni;
        for (j = vtx; ip < end; j++) {
            u32 e = j + cols - 1;
            for (; j < e; j++) {
                ip[0] = j;
                ip[1] = j + cols;
                ip[3] = j + cols + 1;
                ip[2] = j + cols + 1;
                ip[4] = j + 1;
                ip[5] = j;
                ip += 6;
            }
        }
        col += cols;
        idx += ni;
        vtx += nv;
        if (col >= g->f4) {
            row += rows;
            if (row >= g->f8) break;
            ru += dv7x;
            row--;
            rv += dv7y;
            base += s7;
            y0 += stepX;
            u0 = ru;
            v0 = rv;
            x0 = lbl_8036498C;
            hp = base;
            col = 0;
            cols = 8;
            if (row + rows > g->f8) rows = g->f8 - row;
        } else {
            x0 += stepX;
            u0 += du7x;
            v0 += du7y;
            hp += cols - 1;
            col--;
        }
    }
    if (vtx && idx) {
        dev->unlockV(vtx);
        dev->unlockI(idx);
        dev->draw(b, a5, a9, a10);
    }
    b->end();
}
}
