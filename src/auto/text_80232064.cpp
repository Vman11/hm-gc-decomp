// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
inline V3 Cross(const V3 &a, const V3 &b) {
    V3 t; t.x = a.y * b.z - a.z * b.y; t.y = a.z * b.x - a.x * b.z; t.z = a.x * b.y - a.y * b.x; return t;
}
extern "C" {
extern f32 lbl_80365DF0;
extern f32 lbl_80365DF8;
extern f64 lbl_80365E00;
extern f64 lbl_80365E08;
extern f32 lbl_80365E2C;
}
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
class C { public:
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5();
    virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9(); virtual void c10(); virtual void c11();
    virtual void c12(); virtual void c13(int, V3 *, V3 *, V3 *, int);
    u8 pad[152]; X *f156; Y *f160; u8 pad164[140]; V3 f304; };
class O { public:
    virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void o4(); virtual void o5();
    virtual void o6(); virtual void o7(); virtual void o8(); virtual void o9(); virtual void o10(); virtual void o11();
    virtual void o12(); virtual void o13(); virtual void o14(V3 *, V3 *, V3 *, V3 *, int); virtual void o15(); virtual void o16();
    virtual void o17(); virtual void o18(); virtual void o19();
    u8 pad[276]; f32 f280, f284, f288; u8 pad292[48]; f32 f340; u8 pad344[268]; f32 *f612; f32 f616; s32 f620; C *f624; f32 *f628;
    V3 f632; V3 f644; u8 pad656[32]; s32 f688; };
extern "C" {
void *fn_800F8274(void *, char *);
void fn_80107244(void *, V3 *);
void fn_80101820(V3 *);
void fn_80100F24(V3 *, V3 *);

void fn_80232064(O *o, C *c, V3 *pos, int u, char *name) {
    V3 p, f, r, s, d;
    f32 k, tx, ty, tz, l;
    o->o17();
    o->o19();
    o->f624 = c;
    o->f688 = 0;
    c->c13(0, &f, &r, &s, 0);
    if (*name) {
        fn_80107244(fn_800F8274(c->f160->f168, name), &p);
    } else {
        X *x = c->f156;
        if (x->f0 & 4) x->x2();
        p = x->f24;
    }
    o->o14(&p, 0, 0, 0, 0);
    d = *pos;
    d.x = d.x - p.x; d.y = d.y - p.y; d.z = d.z - p.z;
    fn_80101820(&d);
    s = Cross(r, d);
    fn_80101820(&s);
    r = Cross(d, s);
    fn_80101820(&r);
    f = d;
    o->o14(0, &f, &r, &s, 0);
    tx = c->f304.x; ty = c->f304.y; tz = c->f304.z;
    k = o->f628 ? *o->f628 : lbl_80365DF0;
    tx = k * f.x + tx; ty = k * f.y + ty; tz = k * f.z + tz;
    f.x = tx; f.y = ty; f.z = tz;
    fn_80101820(&f);
    fn_80100F24(&r, &f);
    fn_80101820(&r);
    s = Cross(r, f);
    fn_80101820(&s);
    l = tx * tx + ty * ty + tz * tz;
    if (l > lbl_80365DF8) l = Sq(l);
    o->f280 = tx; o->f284 = ty; o->f288 = tz;
    o->f340 = l;
    o->f620 = 1;
    o->f616 = o->f612 ? *o->f612 : lbl_80365E2C;
    o->f632 = p;
    o->f644 = p;
}
}

} /* extern "C" */
