// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
// Matched: len2 via depth-3 inline L2, S2 via depth-3 S3.
#include "common.h"

extern "C" {

}
struct Vec { f32 x, y, z; Vec() {} Vec(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
struct X;
struct P { u32 fl; u8 pad4[24 - 4]; f32 x24, x28, x32, x36; u8 pad40[0x3c - 40]; X *x3c; u8 pad40b[104 - 0x40];
    virtual void s0(); virtual void s1(); virtual void upd();
    f32 R() { if (fl & 4) upd(); return x36; }
    f32 GX() { if (fl & 4) upd(); return x24; }
    f32 GY() { if (fl & 4) upd(); return x28; }
    f32 GZ() { if (fl & 4) upd(); return x32; } };
struct Sh { u8 pad[24]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual f32 hit(void *, void *, void *, Vec *, void *, void *); };
struct W {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
    virtual void set(f32 v);
    u8 pad4[0x9c - 4];
    P *x9c;
};
struct X { u8 pad[156]; P *x156; u8 pad160[444 - 160]; f32 *x444; u8 pad448[552 - 448]; u32 x552; u8 pad556[0x258 - 556]; W *x258;
    u8 pad25c[0x564 - 0x25c]; f32 x564, x568, x56c, x570, x574, x578; u8 pad57c[0x5b0 - 0x57c]; void *x5b0; u8 pad5b4[0x5d0 - 0x5b4]; Vec x5d0; };
extern "C" {
extern f32 lbl_8035F3EC, lbl_8035F538, lbl_8035F4F8, lbl_8035F53C, lbl_8035F540, lbl_8035F544;
extern f64 lbl_8035F4D0, lbl_8035F4D8;
void fn_80225EC0(void *, X *, Vec *);
void fn_80237F58(X *a, P *b, void *out, Sh *sa, Sh *sb, int mode);
f32 fn_80101590(Vec *, Vec *);
void fn_80101820(Vec *);
void fn_80100F24(Vec *, Vec *);
void fn_80101030(Vec *, Vec *);
static inline f32 M(X *x) { return x->x444 ? *x->x444 : lbl_8035F3EC; }
static inline f32 Sq(f32 x) {
    if (x > lbl_8035F3EC) {
        const f64 _half = lbl_8035F4D0;
        const f64 _three = lbl_8035F4D8;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
static inline f32 S2(f32 a, f32 b) { return Sq(a * a - b * b); }
static inline f32 L(Vec *v) { return Sq(v->x * v->x + v->y * v->y + v->z * v->z); }

static inline f32 S3(f32 a, f32 b) { return S2(a, b); }
static inline f32 L2(Vec *v) { return L(v); }
void fn_80073FAC(X *a, P *b, void *out, Sh *sa, Sh *sb, int mode) {
    Vec n;
    Vec pa;
    Vec pb;
    Vec t;
    Vec u;
    u8 l12[4];
    u8 l8[4];
    X *bo;
    f32 m1, m2;
    if (b == a->x258->x9c) return;
    if (a->x5b0) {
        if (a->x552 & 0x10) return;
        bo = b->x3c;
        if (bo) m1 = M(bo);
        else m1 = lbl_8035F538;
        if (!bo || (bo->x552 & 0x10)) m2 = m1;
        else m2 = m1 + M(a);
        if (sa && sb) {
            f32 d;
            if (mode) d = sb->hit(b, sa, a->x156, &n, l8, l12);
            else d = sa->hit(a->x156, sb, b, &n, l12, l8);
            if (d < lbl_8035F3EC) {
                n.x *= d; n.y *= d; n.z *= d;
                if (m2 > lbl_8035F3EC) {
                    if (mode) {
                        f32 k = -(lbl_8035F4F8 * (m1 / m2));
                        n.x *= k; n.y *= k; n.z *= k;
                    } else {
                        f32 k = lbl_8035F4F8 * (m1 / m2);
                        n.x *= k; n.y *= k; n.z *= k;
                    }
                }
                fn_80225EC0(out, a, &n);
            }
        } else {
            f32 ra = a->x156->R();
            f32 rb = b->R();
            pa = Vec(a->x156->GX(), a->x156->GY(), a->x156->GZ());
            pb = Vec(b->GX(), b->GY(), b->GZ());
            f32 dist = fn_80101590(&pa, &pb);
            f32 sum = ra + rb;
            if (dist < sum) {
                f32 d2, len2, s;
                n.x = pa.x - pb.x;
                n.y = pa.y - pb.y;
                n.z = pa.z - pb.z;
                t = n;
                fn_80100F24(&t, &a->x5d0);
                if (L(&t) >= lbl_8035F53C && L(&t) <= lbl_8035F540) {
                    t.x = a->x570 - a->x564;
                    t.y = a->x574 - a->x568;
                    t.z = a->x578 - a->x56c;
                }
                fn_80101030(&n, &a->x5d0);
                u = pb;
                u.x += n.x; u.y += n.y; u.z += n.z;
                d2 = fn_80101590(&u, &pa);
                len2 = L2(&n);
                fn_80101820(&t);
                s = S3(sum, len2) - d2;
                t.x *= s; t.y *= s; t.z *= s;
                fn_80225EC0(out, a, &t);
            }
        }
    } else {
        fn_80237F58(a, b, out, sa, sb, mode);
    }
    a->x258->set(lbl_8035F544);
}

} /* extern "C" */
