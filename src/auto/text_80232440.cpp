// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
extern f32 lbl_80365DE8;
extern f32 lbl_80365DF0;
extern f32 lbl_80365DF4;
extern f32 lbl_80365DF8;
extern f64 lbl_80365E00;
extern f64 lbl_80365E08;
extern f32 lbl_80365E18;
extern f32 lbl_8035B360;
inline f32 Sq(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    y = x * g;
    return y;
}
struct N { u32 f0; u8 pad4[0x10]; N *f14; u8 pad18[4]; f32 f1c, f20, f24; };
struct Sc { u8 pad[0x28]; f32 f28, f2c, f30; };
struct X0 { u32 f0; u8 pad[20]; V3 f24; u8 pad24[0x14]; N *f38; u8 pad3c[0x2c]; };
class X : public X0 { public: virtual void x0(); virtual void x1(); virtual void x2(); u8 pad6c[0xc]; Sc *f78; };
class C { public: virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void c13(int, V3 *, V3 *, V3 *, int); u8 pad[0x12c]; V3 f130; };
struct M { u8 pad[0x9c]; X *f9c; u8 pada0[0x90]; f32 f130, f134, f138; };
struct O { u8 pad[0x9c]; X *f9c; u8 pada0[0x1d0]; C *f270; f32 *f274; };
struct G28 { u8 pad[0x34]; f32 f34; };
struct G { u8 pad[0x28]; G28 *f28; };
struct S308 { u8 pad[0x48]; C *f48; };
struct S374 { u8 pad[0x10]; f32 *f10; };
extern S308 * volatile lbl_8035B308;
extern G *lbl_8035B65C;
extern S374 *lbl_8035B374;
void fn_80101820(V3 *);
void *fn_8017BC48(N *, X *);
void fn_80104004(void *, V3 *, V3 *);
void fn_80100E24(V3 *, const V3 *, const V3 *);
double fn_800EFDA4(double);
int fn_80264E0C(V3 *, V3 *, int, int, int, int, int, int, int, int, int, int, int, int, int);

static inline f32 Cos(f32 a) { return (f32)fn_800EFDA4(a); }
static inline f32 GetC3() { return lbl_8035B374->f10 ? (f32)fn_800EFDA4(lbl_80365DE8 * *lbl_8035B374->f10) : lbl_8035B360; }
static inline f64 Fabs(f64 x) { return __fabs(x); }
void fn_80232440(O *o, M *m, V3 *f, V3 *r, V3 *s, V3 *q) {
    if (m != 0) {
        X *x = o->f9c;
        f32 c1, c3;
        f32 cx = o->f270->f130.x;
        f32 cy = o->f270->f130.y;
        f32 cz = o->f270->f130.z;
        f32 az;
        V3 b, c2, a, t, v, w, v3c, v30;
        f32 l1, l2, k, sc;
        int blocked;
        N *n;
        if (x->f0 & 4) x->x2();
        a = x->f24;
        x = m->f9c;
        for (n = x->f38; n != 0 && n->f0 != 0; n = n->f14) {
        }
        if (n != 0 && n->f0 == 0) {
            f32 sx, sy, sz;
            f32 tx = n->f1c, ty = n->f20, tz = n->f24;
            if (x->f78 != 0) {
                sx = x->f78->f28;
                sy = x->f78->f2c;
                sz = x->f78->f30;
            } else {
                sx = lbl_80365DF4;
                sy = sx;
                sz = sx;
            }
            tx *= sx; ty *= sy; tz *= sz;
            t.x = tx; t.y = ty; t.z = tz;
            fn_80104004(fn_8017BC48(n, x), &t, &b);
        } else {
            if (x->f0 & 4) x->x2();
            b = x->f24;
        }
        {
            f32 dx = b.x - a.x, dy = b.y - a.y, dz = b.z - a.z;
            l1 = dx * dx + dy * dy + dz * dz;
            if (l1 > lbl_80365DF8) l1 = Sq(l1);
        }
        {
            f32 ex = m->f130, ey = m->f134, ez = m->f138;
            ex -= cx; ey -= cy; ez -= cz;
            f32 gx = b.x + ex - a.x, gy = b.y + ey - a.y, gz = b.z + ez - a.z;
            l2 = gx * gx + gy * gy + gz * gz;
            if (l2 > lbl_80365DF8) l2 = Sq(l2);
            {
                f32 dd = l2 - l1;
                k = o->f274 ? *o->f274 : lbl_80365DF0;
                sc = l1 / (k - dd);
            }
            ex *= sc; ey *= sc; ez *= sc;
            *(volatile f32 *)&c2.x = b.x + ex;
            *(volatile f32 *)&c2.y = b.y + ey;
            *(volatile f32 *)&c2.z = b.z + ez;
        }
        blocked = 0;
        if (o->f270 == lbl_8035B308->f48) {
            f32 d1, d2;
            v.x = c2.x - a.x;
            v.y = c2.y - a.y;
            v.z = c2.z - a.z;
            az = Fabs(v.z);
            fn_80101820(&v);
            o->f270->c13(0, &v3c, &v30, 0, 0);
            c1 = Cos(lbl_8035B65C->f28->f34);
            c3 = lbl_8035B374->f10 ? Cos(lbl_80365DE8 * *lbl_8035B374->f10) : lbl_8035B360;
            fn_80100E24(&w, &v, &v30);
            d1 = w.x * v3c.x + w.y * v3c.y + w.z * v3c.z;
            d2 = v.x * v30.x + v.y * v30.y + v.z * v30.z;
            if (d1 < c3 || (d2 < c1 && az > lbl_80365E18)) blocked = 1;
        }
        if (blocked != 0 || fn_80264E0C(&a, &c2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1) != 0) {
            c2 = b;
            q->x = c2.x - a.x;
            q->y = c2.y - a.y;
            q->z = c2.z - a.z;
            fn_80101820(q);
            k = o->f274 ? *o->f274 : lbl_80365DF0;
            q->x = q->x * k;
            q->y = q->y * k;
            q->z = q->z * k;
        } else {
            q->x = c2.x - a.x;
            q->y = c2.y - a.y;
            q->z = c2.z - a.z;
            fn_80101820(q);
            k = o->f274 ? *o->f274 : lbl_80365DF0;
            q->x = q->x * k;
            q->y = q->y * k;
            q->z = q->z * k;
            q->x = q->x + cx;
            q->y = q->y + cy;
            q->z = q->z + cz;
        }
        *f = *q;
        fn_80101820(f);
        s->x = r->y * f->z - r->z * f->y;
        s->y = r->z * f->x - r->x * f->z;
        s->z = r->x * f->y - r->y * f->x;
        fn_80101820(s);
        r->x = s->y * f->z - s->z * f->y;
        r->y = s->z * f->x - s->x * f->z;
        r->z = s->x * f->y - s->y * f->x;
        fn_80101820(r);
    }
}

} /* extern "C" */
