// fn_80199430: portal parser (token switch) + centroid/normal of its vertex ring.
// NonMatching: SDIFF 0, DIFF 112: unrolled sum loop v/count r3/r5 swap, final cross-product a/c ptr + wx/ux FP colouring.
#include "common.h"
extern "C" {
struct R194 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct K194 { u8 d[8]; };
struct P194 { u32 f0; u32 f4; u32 f8; f32 fc; f32 f10; f32 f14; f32 f18; f32 f1c; f32 f20; f32 f24; f32 *f28; u16 f2c; u16 f2e; u16 f30; u16 f32; };
void fn_800FAEF8(R194 *);
void fn_800FB064(R194 *, void *);
u32 fn_800FB33C(R194 *);
f32 fn_800FB2E0(R194 *);
f32 *fn_8017E110(void *, u16, u16);
extern f32 lbl_80364C68;
extern f32 lbl_80364C6C;
extern u32 lbl_80364C78;
extern u32 lbl_80330258[];
extern u32 lbl_8035ADA8;
extern K194 *lbl_8035ADAC;
extern K194 *lbl_8035ADB0;
extern K194 *lbl_8035ADB4;

void fn_80199430(P194 *p, void *q, R194 *r) {
    u32 k;
    u32 *tbl;
    if (p->f8 & 1) {
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->fc = lbl_80364C68;
        p->f10 = lbl_80364C68;
        p->f14 = lbl_80364C68;
        p->f18 = lbl_80364C68;
        p->f1c = lbl_80364C68;
        p->f20 = lbl_80364C68;
        p->f24 = lbl_80364C68;
        p->f28 = 0;
        p->f2c = 0;
        p->f2e = 0;
        p->f30 = 0;
        p->f32 = 0;
    }
    fn_800FAEF8(r);
    tbl = lbl_80330258;
    while ((k = r->next()) != 6) {
        switch (k) {
        case 0x3d:
            fn_800FB064(r, &lbl_8035ADB4[lbl_8035ADA8]);
            break;
        case 0x3e:
            fn_800FB064(r, &lbl_8035ADAC[lbl_8035ADA8]);
            fn_800FB064(r, &lbl_8035ADB0[lbl_8035ADA8]);
            fn_800FB064(r, &lbl_8035ADB4[lbl_8035ADA8]);
            break;
        case 0x3f:
            p->f32 = fn_800FB33C(r);
            p->f30 = fn_800FB33C(r);
            p->f28 = fn_8017E110(q, p->f32, p->f30);
            p->f2c = fn_800FB33C(r);
            if (p->f2c >= 0x20 || p->f2c < 3) r->err(0x23);
            p->f2e = tbl[1];
            break;
        case 0x40:
            p->f8 |= 0xa;
            break;
        case 0x41:
            p->f8 |= lbl_80364C78;
            p->f24 = fn_800FB2E0(r);
            p->f24 = p->f24 * p->f24;
            break;
        default:
            r->err(0x1e);
            break;
        }
    }
    {
        f32 x, y, z;
        u32 i;
        u8 *v;
        u32 n;
        f32 inv;
        f32 *c;
        f32 *b;
        f32 *a;
        n = p->f2c;
        v = (u8 *)p->f28;
        z = y = x = lbl_80364C68;
        for (i = 0; i < n; i++) {
            x += ((f32 *)v)[0];
            y += ((f32 *)v)[1];
            z += ((f32 *)v)[2];
            v += p->f2e;
        }
        inv = lbl_80364C6C / (f32)(s32)n;
        p->fc = x * inv;
        p->f10 = y * inv;
        p->f14 = z * inv;
        a = p->f28;
        b = (f32 *)((u8 *)a + p->f2e);
        c = (f32 *)((u8 *)b + p->f2e);
        {
            f32 wz;
            f32 wx;
            f32 uy;
            f32 uz;
            f32 wy;
            f32 ux;
            wx = c[0] - a[0];
            wy = c[1] - a[1];
            wz = c[2] - a[2];
            uy = b[1] - a[1];
            uz = b[2] - a[2];
            ux = b[0] - a[0];
            p->f18 = __fmsubs(wy, uz, wz * uy);
            p->f1c = __fmsubs(wz, ux, wx * uz);
            p->f20 = __fmsubs(wx, uy, wy * ux);
        }
    }
}
}
