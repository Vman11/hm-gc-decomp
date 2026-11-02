// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
inline V3 Cross(const V3 &a, const V3 &b) {
    V3 t; t.x = a.y * b.z - a.z * b.y; t.y = a.z * b.x - a.x * b.z; t.z = a.x * b.y - a.y * b.x; return t;
}
extern f32 lbl_80365DE0;
extern f32 lbl_80365DE8;
extern f32 lbl_80365DF0;
extern f32 lbl_80365DF4;
extern f32 lbl_80365DF8;
extern f64 lbl_80365E00;
extern f64 lbl_80365E08;
extern f32 lbl_80365E2C;
extern char lbl_80365E38[8];
extern char lbl_80365E40[8];
inline f32 Sq(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    y = x * g;
    return y;
}
class X { public: u32 f0; u8 pad[20]; V3 f24; u8 pad36[68];
    virtual void x0(); virtual void x1(); virtual void x2(); };
struct Y { u8 pad[168]; void *f168; };
class M { public: virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void msg(char *, int, int, int, int); u8 pad[0x98]; X *f9c; };
class C { public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void c13(int, V3 *, V3 *, V3 *, int);
    u8 pad[152]; X *f156; Y *f160; u8 pad164[0xe8]; M *f18c; };
class O { public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void o14(V3 *, V3 *, V3 *, V3 *, int); virtual void v15(); virtual void v16(); virtual void o17(); virtual void v18(); virtual void o19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void msg(char *, int, int, int, int);
    u8 pad[276]; f32 f280, f284, f288; u8 pad292[48]; f32 f340; u8 pad344[0x34]; M *f18c; u8 pad390[0xd4]; f32 *f612; f32 f616; s32 f620; C *f624; f32 *f628;
    V3 f632; V3 f644; u8 pad656[32]; s32 f688; };
void *fn_800F8274(void *, char *);
void fn_80107244(void *, V3 *);
void fn_80101820(V3 *);
void fn_80100F24(V3 *, V3 *);
void fn_80101414(V3 *, V3 *, f32);
void fn_80232440(O *, M *, V3 *, V3 *, V3 *, V3 *);
int rand(void);

static inline u8 IsZero(const V3 &v) {
    u8 r = 0;
    if (lbl_80365DF8 == v.x && lbl_80365DF8 == v.y && lbl_80365DF8 == v.z) r = 1;
    return r;
}

void fn_80231AD8(O *o, C *c, int u, V3 *pos, char *name, f32 ang) {
    V3 p, f, r, s, q, d, w;
    f32 l;
    o->o17();
    o->o19();
    c->c13(0, &f, &r, &s, 0);
    o->f688 = 0;
    if (*name) {
        fn_80107244(fn_800F8274(c->f160->f168, name), &p);
    } else {
        X *x = c->f156;
        if (x->f0 & 4) x->x2();
        p = x->f24;
    }
    o->o14(&p, 0, 0, 0, 0);
    o->f624 = c;
    o->f18c = c->f18c;
    q.x = lbl_80365DF8;
    q.y = lbl_80365DF8;
    q.z = lbl_80365DF8;
    if (o->f18c != 0) {
        if (u != 0) {
            fn_80232440(o, o->f18c, &f, &r, &s, &q);
        } else {
            X *x = o->f18c->f9c;
            if (x->f0 & 4) x->x2();
            d = x->f24;
            d.x = d.x - p.x; d.y = d.y - p.y; d.z = d.z - p.z;
            fn_80101820(&d);
            s = Cross(r, d);
            fn_80101820(&s);
            r = Cross(d, s);
            fn_80101820(&r);
            f = d;
        }
        o->f18c->msg(lbl_80365E38, 0, 0, 0, 0);
    }
    if (lbl_80365DF8 != ang) {
        w = r;
        fn_80101820(&w);
        {
            int n = (u32)rand() % 20000;
            f32 rr = lbl_80365DE0 * (f32)n;
            ang = ang * (rr - lbl_80365DF4);
            ang = lbl_80365DE8 * ang;
        }
        fn_80101414(&f, &w, ang);
        fn_80101414(&q, &w, ang);
        fn_80101414(&s, &w, ang);
    }
    o->o14(0, &f, &r, &s, 0);
    if (IsZero(q)) {
        f32 k, tx, ty, tz;
        {
            f32 z = *(volatile f32 *)&lbl_80365DF8;
            q.x = z;
            q.y = z;
            q.z = z;
        }
        k = o->f628 ? *o->f628 : lbl_80365DF0;
        q.x = k * f.x + q.x; q.y = k * f.y + q.y; q.z = k * f.z + q.z;
        fn_80100F24(&r, &f);
        fn_80101820(&r);
        s = Cross(r, f);
        fn_80101820(&s);
    }
    l = q.x * q.x + q.y * q.y + q.z * q.z;
    if (l > lbl_80365DF8) l = Sq(l);
    o->f280 = q.x; o->f284 = q.y; o->f288 = q.z;
    o->f340 = l;
    o->f620 = 1;
    o->f616 = o->f612 ? *o->f612 : lbl_80365E2C;
    o->f632 = p;
    o->f644 = p;
    o->msg(lbl_80365E40, 0, 0, 0, 0);
}

} /* extern "C" */
