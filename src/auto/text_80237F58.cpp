// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct Vec { f32 x, y, z; Vec() {} Vec(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
struct X;
struct P { u32 fl; u8 pad4[24 - 4]; f32 x24, x28, x32, x36; u8 pad40[60 - 40]; X *x60; u8 pad64[104 - 64];
    virtual void s0(); virtual void s1(); virtual void upd();
    f32 R() { if (fl & 4) upd(); return x36; }
    f32 GX() { if (fl & 4) upd(); return x24; }
    f32 GY() { if (fl & 4) upd(); return x28; }
    f32 GZ() { if (fl & 4) upd(); return x32; } };
struct Sh { u8 pad[24]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual f32 hit(void *, void *, void *, Vec *, void *, void *); };
struct X { u8 pad[156]; P *x156; u8 pad160[444 - 160]; f32 *x444; u8 pad448[552 - 448]; u32 x552; u8 pad556[564 - 556]; X *x564; };
extern "C" {
extern f32 lbl_80365EFC, lbl_80365F60;
void fn_80225EC0(void *, X *, Vec *);
f32 fn_80101590(Vec *, Vec *);
void fn_80101820(Vec *);
static inline f32 M(X *x) { return x->x444 ? *x->x444 : lbl_80365EFC; }
void fn_80237F58(X *a, P *b, void *out, Sh *sa, Sh *sb, int mode) {
    Vec n;
    Vec pa;
    Vec pb;
    u8 l12[4];
    u8 l8[4];
    X *bo = b->x60;
    f32 m1, m2;
    if (bo == a->x564) return;
    if ((a->x552 >> 8) & 1) return;
    if (a->x552 & 0x10) {
        if (!bo) return;
        if (!((bo->x552 >> 4) & 1)) return;
        if (!(a->x552 & 0x40) && (int)((bo->x552 >> 6) & 1) == 1) return;
    }
    if (bo) m1 = M(bo);
    else m1 = lbl_80365F60;
    if (!bo || (bo->x552 & 0x10) || bo->x564 == a) m2 = m1;
    else m2 = m1 + M(a);
    if (sa && sb) {
        f32 d;
        if (mode) d = sb->hit(b, sa, a->x156, &n, l8, l12);
        else d = sa->hit(a->x156, sb, b, &n, l12, l8);
        if (d < lbl_80365EFC) {
            n.x *= d; n.y *= d; n.z *= d;
            if (m2 > lbl_80365EFC) {
                if (mode) {
                    f32 k = -(m1 / m2);
                    n.x *= k; n.y *= k; n.z *= k;
                } else {
                    f32 k = m1 / m2;
                    n.x *= k; n.y *= k; n.z *= k;
                }
            }
            fn_80225EC0(out, a, &n);
        }
        return;
    }
    {
        f32 ra = a->x156->R();
        f32 rb = b->R();
        pa = Vec(a->x156->GX(), a->x156->GY(), a->x156->GZ());
        pb = Vec(b->GX(), b->GY(), b->GZ());
        f32 dist = fn_80101590(&pa, &pb);
        f32 sum = ra + rb;
        if (dist < sum) {
            n.x = pa.x - pb.x;
            n.y = pa.y - pb.y;
            n.z = pa.z - pb.z;
            fn_80101820(&n);
            {
                f32 k = sum - dist;
                f32 x = n.x * k, y = n.y * k, z = n.z * k;
                n.x = x; n.y = y; ((f32 *)&pa)[5] = z;
                if (m2 > lbl_80365EFC) {
                    f32 k2 = m1 / m2;
                    n.x = x * k2; n.y = y * k2; n.z = z * k2;
                }
            }
            fn_80225EC0(out, a, &n);
        }
    }
}

} /* extern "C" */
