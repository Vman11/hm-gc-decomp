#include "common.h"
extern "C" {
struct V3 { f32 x, y, z; };
struct D {
    u8 pad0[12]; u32 fl; V3 p10; V3 p1c; V3 p28; V3 p34; V3 p40; f32 f4c; f32 f50; f32 f54; u8 pad58[4];
    u32 f5c; u32 f60; u32 f64; f32 f68; f32 f6c; u8 pad70[12]; V3 p7c; u8 pad88[0x130 - 0x88]; f32 f130;
    u8 pad134[0x1b0 - 0x134]; f32 f1b0; f32 f1b4; u32 f1b8; u32 f1bc; u32 f1c0; V3 a1c4; V3 b1d0; f32 f1dc; f32 f1e0; f32 m[9];
};
struct Pt { u8 pad[24]; u32 f24; u8 pad2[0x34 - 28]; };
struct CB { virtual void v0(); virtual void call(D *, V3 *, V3 *, V3 *, f32 *); };
struct TV { u8 pad[0x68]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *getMtx(); };
struct T {
    u8 pad0[0x90]; D *d; u32 seed; u8 pad98[8]; u32 n; Pt *parts; u8 pada8[8]; V3 pb0; u8 padbc[12]; V3 pc8; u8 padd4[4]; CB *cb;
};
extern u16 lbl_802E0F60[];
extern f32 lbl_80364C1C, lbl_80364C20, lbl_80364C38, lbl_80364C3C, lbl_80364C40, lbl_80364C44;
void fn_80103F78(void *, V3 *, V3 *, int);
void fn_80104004(void *, V3 *, V3 *);
void fn_80101624(V3 *, V3 *, V3 *, f32);
f64 fn_800F030C(f64);
f64 fn_800EFDA4(f64);
void fn_8019598C(Pt *, V3 *, V3 *, V3 *, f32, f32);

static inline u32 rnd(u32 &i) { u32 v = lbl_802E0F60[i]; i = (i + 1) & 0x7ff; return v; }
static inline f32 rvA(f32 base, f32 range, u32 &i) { if (0.0f != range) { s32 r = rnd(i); base += (2.0f * ((f32)r / 2047.0f) - 1.0f) * range; } return base; }
#pragma opt_propagation off
void fn_80196B9C(T *t, s32 j, f32 f) {
    u32 i;
    u32 cnt;
    u32 k;
    void *m;
    Pt *last;
    V3 dir;
    V3 p48;
    V3 pos;
    V3 org;
    V3 p24;
    V3 pa;
    V3 pb;
    f32 sz;
    f32 speed;
    i = (t->seed + j * t->d->f1bc) & 0x7ff;
    if (rnd(i) < t->d->f5c) return;
    i++;
    m = ((TV *)t)->getMtx();
    if (m) fn_80103F78(m, &t->d->p7c, &pos, 0);
    else pos = t->d->p7c;
    pos.x += t->pc8.x;
    pos.y += t->pc8.y;
    pos.z += t->pc8.z;
    last = &t->parts[t->n - 1];
    cnt = t->d->f60;
    for (k = 0; k < cnt; k++) {
        D *d = t->d;
        if (last->f24 >= d->f1b8) return;
        if (rnd(i) < d->f64) continue;
        speed = rvA(d->f68, d->f6c, i);
        if (d->f4c > 0.0f) {
            f32 a, b, sa, ca, sb, cb;
            s32 r = rnd(i);
            a = 0.0030694604f * (f32)r;
            a = a - 3.1415927f;
            sa = fn_800F030C(a);
            ca = fn_800EFDA4(a);
            r = rnd(i);
            b = (f32)r * t->d->f50 + t->d->f54;
            sb = fn_800F030C(b);
            cb = fn_800EFDA4(b);
            dir.x = ca * sb;
            dir.y = sa * sb;
            dir.z = cb;
            {
                D *e = t->d;
                f32 x = dir.x, y = dir.y, z = dir.z;
                f32 nx, ny, nz;
                nx = x * e->m[0]; nx += y * e->m[3]; nx += z * e->m[6];
                ny = x * e->m[1]; ny += y * e->m[4]; ny += z * e->m[7];
                nz = x * e->m[2]; nz += y * e->m[5]; nz += z * e->m[8];
                dir.x = nx;
                dir.y = ny;
                dir.z = nz;
                if (e->fl & 0x8000) {
                    f32 da = dir.x * e->a1c4.x + dir.y * e->a1c4.y + dir.z * e->a1c4.z;
                    f32 db = dir.x * e->b1d0.x + dir.y * e->b1d0.y + dir.z * e->b1d0.z;
                    f32 sa2 = (e->f1dc - 1.0f) * da;
                    f32 sb2 = (e->f1e0 - 1.0f) * db;
                    f32 tx, ty, tz;
                    tx = e->a1c4.x * sa2; dir.x = dir.x + tx;
                    ty = e->a1c4.y * sa2; dir.y = dir.y + ty;
                    tz = e->a1c4.z * sa2; dir.z = dir.z + tz;
                    tx = e->b1d0.x * sb2; dir.x = dir.x + tx;
                    ty = e->b1d0.y * sb2; dir.y = dir.y + ty;
                    tz = e->b1d0.z * sb2; dir.z = dir.z + tz;
                }
            }
        } else {
            dir = d->p40;
        }
        dir.x *= speed;
        dir.y *= speed;
        dir.z *= speed;
        d = t->d;
        if (d->fl & 2) {
            s32 r = rnd(i);
            fn_80101624(&org, &d->p10, &d->p1c, (f32)r / 2047.0f);
        } else if (d->fl & 4) {
            s32 r = rnd(i);
            fn_80101624(&pa, &d->p10, &d->p1c, (f32)r / 2047.0f);
            {
                f32 u = (f32)(s32)rnd(i) / 2047.0f;
                fn_80101624(&pb, &t->d->p28, &t->d->p34, u);
            }
            r = rnd(i);
            fn_80101624(&org, &pa, &pb, (f32)r / 2047.0f);
        } else {
            org = d->p10;
        }
        if (m) {
            fn_80104004(m, &org, &p24);
            fn_80103F78(m, &dir, &p48, 0);
        } else {
            p24 = org;
            p48 = dir;
        }
        *(volatile f32 *)&p48.x = p48.x + t->pb0.x;
        *(volatile f32 *)&p48.y = p48.y + t->pb0.y;
        *(volatile f32 *)&p48.z = p48.z + t->pb0.z;
        *(volatile f32 *)&sz = t->d->f1b0;
        D *e2 = *(D *volatile *)&t->d;
        if (*(volatile f32 *)&lbl_80364C1C != e2->f1b4) {
            s32 r = rnd(i);
            sz += (2.0f * ((f32)r / 2047.0f) - 1.0f) * e2->f1b4;
        }
        if (t->cb) t->cb->call(t->d, &p24, &p48, &pos, &sz);
        {
            f32 tt = f;
            u32 n;
            for (n = 0; n < t->n; n++) {
                fn_8019598C(&t->parts[n], &p24, &p48, &pos, tt, sz);
                tt -= t->d->f130;
            }
        }
    }
}
}
