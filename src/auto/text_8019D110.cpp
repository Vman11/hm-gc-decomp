#include "common.h"
extern "C" {
struct V { f32 x, y, z; };
struct M3 { f32 m[9]; };
extern M3 lbl_80330228;
extern V lbl_8033024C;
extern f32 lbl_80364CE0, lbl_80364CE4;
struct E40 { u8 pad[40]; };
struct Mdl { u8 pad[36]; E40 *f36; };
struct A;
struct O;
struct S { u32 f0; u8 pad4[20]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual f32 hit(void *, A *, O *, V *, f32 *, f32 *); V f28; f32 f40; };
struct A { u8 pad[4]; u32 f4; u8 pad8[20]; V f28; f32 f40; };
struct O { u8 pad[104]; virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void *xf(); u8 pad108[60]; Mdl *f168; };
void fn_8017BCCC(A *, S *);
void fn_80103E84(void *, V *, V *);
void fn_80101820(V *);
f32 fn_8019D110(A *__restrict a, O *__restrict o, S *__restrict s, void *__restrict p4, V *__restrict dir, f32 *out1, f32 *out2) {
    V nd;
    V d;
    if (s->f0 == 1) {
        fn_8017BCCC(a, s);
        if (a->f4 == 0) {
            void *x = o->xf();
            if (x) fn_80103E84(x, dir, &d);
            else {
                d = *dir;
            }
        } else {
            fn_80103E84(&o->f168->f36[a->f4 - 1], dir, &d);
        }
        fn_80101820(&d);
        M3 *m = &lbl_80330228;
        V *t = &lbl_8033024C;
        f32 px = t->x - a->f28.x;
        f32 py = t->y - a->f28.y;
        f32 pz = t->z - a->f28.z;
        f32 wx = s->f28.x * m->m[0];
        f32 wy = s->f28.x * m->m[1];
        f32 wz = s->f28.x * m->m[2];
        wx = wx + s->f28.y * m->m[3];
        wy = wy + s->f28.y * m->m[4];
        wz = wz + s->f28.y * m->m[5];
        wx = wx + s->f28.z * m->m[6];
        wy = wy + s->f28.z * m->m[7];
        wz = wz + s->f28.z * m->m[8];
        px = px + wx;
        py = py + wy;
        pz = pz + wz;
        fn_80101820(&d);
        f32 dist = d.x * px + d.y * py + d.z * pz;
        f32 res = (dist - a->f40) - s->f40;
        *out1 = lbl_80364CE0 * a->f40;
        *out2 = lbl_80364CE0 * s->f40;
        return res;
    } else if (s->f0 == 0) {
        nd.x = -dir->x;
        nd.y = -dir->y;
        nd.z = -dir->z;
        return s->hit(p4, a, o, &nd, out2, out1);
    }
    return lbl_80364CE4;
}
}
