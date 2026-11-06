#include "common.h"
extern "C" {
struct V { f32 x, y, z; };
struct M3 { f32 m[9]; };
extern M3 lbl_80330228;
extern V lbl_8033024C;
extern f32 lbl_80364888;
struct E40 { u8 pad[40]; };
struct Mdl { u8 pad[36]; E40 *f36; };
struct S { u32 f0; u8 pad4[24]; V f28; f32 f40; };
struct A { u8 pad[4]; u32 f4; u8 pad8[20]; V f28; };
struct O { u8 pad[104]; virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void *xf(); u8 pad108[60]; Mdl *f168; };
struct Q { V p; f32 r; };
void fn_8017BCCC(A *, S *);
void fn_80103E84(void *, V *, V *);
void fn_80101820(V *);
f32 fn_800FDAC0(V *, V *, M3 *, V *, V *, f32 *, f32 *);
f32 fn_800FD530(V *, Q *, V *, f32 *, f32 *);
void fn_80100CF4(Q *);
static inline void getDir(A *a, O *o, V *dir, V *d) {
    if (a->f4 == 0) {
        void *x = o->xf();
        if (x) fn_80103E84(x, dir, d);
        else { f32 x, y, z; x = dir->x; y = dir->y; z = dir->z; d->z = z; d->x = x; d->y = y; }
    } else {
        fn_80103E84(&o->f168->f36[a->f4 - 1], dir, d);
    }
    fn_80101820(d);
}
f32 fn_8017D340(A *a, O *o, S *s, void *p4, V *dir, f32 *o1, f32 *o2) {
    V d;
    if (s->f0 == 0) {
        fn_8017BCCC(a, s);
        getDir(a, o, dir, &d);
        return fn_800FDAC0(&a->f28, &s->f28, &lbl_80330228, &lbl_8033024C, &d, o1, o2);
    } else if (s->f0 == 1) {
        Q q;
        fn_80100CF4(&q);
        fn_8017BCCC(a, s);
        M3 *m = &lbl_80330228;
        V *t = &lbl_8033024C;
        f32 wx;
        f32 wz;
        f32 py;
        f32 px;
        f32 pz;
        f32 wy;
        py = t->y - a->f28.y;
        pz = t->z - a->f28.z;
        wx = s->f28.x * m->m[0];
        wz = s->f28.x * m->m[2];
        wx = s->f28.y * m->m[3] + wx;
        wx = s->f28.z * m->m[6] + wx;
        px = t->x - a->f28.x;
        q.p.x = px + wx;
        wy = s->f28.x * m->m[1];
        wy = wy + s->f28.y * m->m[4];
        wy = wy + s->f28.z * m->m[7];
        wz = wz + s->f28.y * m->m[5];
        q.p.y = py + wy;
        wz = wz + s->f28.z * m->m[8];
        q.p.z = pz + wz;
        q.r = s->f40;
        getDir(a, o, dir, &d);
        return fn_800FD530(&a->f28, &q, &d, o1, o2);
    }
    return lbl_80364888;
}
}
