#include "common.h"

extern "C" {
struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
inline V3 Cross(const V3 &a, const V3 &b) {
    V3 t; t.x = a.y * b.z - a.z * b.y; t.y = a.z * b.x - a.x * b.z; t.z = a.x * b.y - a.y * b.x; return t;
}
extern f32 lbl_80365DD8;
extern f32 lbl_80365DDC;
extern f32 lbl_80365DE0;
extern f32 lbl_80365DE8;
extern f32 lbl_80365DF0;
extern f32 lbl_80365DF4;
extern f32 lbl_80365DF8;
extern f64 lbl_80365E00;
extern f64 lbl_80365E08;
extern f32 lbl_80365E18;
extern f32 lbl_80365E1C;
extern char lbl_802A87B0[];
extern char lbl_802A87BC[];
inline f32 Sq(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * x);
    y = x * g;
    return y;
}
#define SQ(l) { volatile f32 y; f64 g = __frsqrte(l); \
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * l); \
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * l); \
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * l); \
    y = l * g; l = y; }
#define NORM(v) { f32 l = v.x * v.x + v.y * v.y + v.z * v.z; \
    if (l > *(volatile f32 *)&lbl_80365DF8) SQ(l) \
    if (lbl_80365DF8 == l) { v.x = lbl_80365DF4; v.y = lbl_80365DF8; v.z = lbl_80365DF8; } \
    else { f32 i = lbl_80365DF4 / l; v.x *= i; v.y *= i; v.z *= i; } }
inline void Norm(V3 &v) {
    f32 l = v.x * v.x + v.y * v.y + v.z * v.z;
    if (l > *(volatile f32 *)&lbl_80365DF8) SQ(l)
    if (lbl_80365DF8 == l) { v.x = lbl_80365DF4; v.y = lbl_80365DF8; v.z = lbl_80365DF8; }
    else { f32 i = lbl_80365DF4 / l; v.x *= i; v.y *= i; v.z *= i; }
}
static inline f32 Len(const V3 &v) { f32 l = v.x * v.x + v.y * v.y + v.z * v.z; if (l > *(volatile f32 *)&lbl_80365DF8) SQ(l) return l; }
struct Lk;
struct Fl;
inline void CrossV(V3 &o, const V3 &a, const V3 &b) { o.x = a.y * b.z - a.z * b.y; o.y = a.z * b.x - a.x * b.z; o.z = a.x * b.y - a.y * b.x; }
f32 fn_80101664(V3 *);
void fn_80101820(V3 *);
void fn_80101030(V3 *, V3 *);
f64 fn_800F03E4(f32);
void fn_80107244(void *, V3 *);
void fn_8019B6B8(void *, void *);
int rand(void);
struct Hd { u8 pad[0xc]; void *fc; };
extern Hd *lbl_8035B65C;

class Msg { public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void msg(char *, void *, int, int, int);
};
struct Hit { u32 f0; u8 pad4[0x38]; Msg *f3c; };
struct Hit2 { u8 pad[0x88]; s32 *f88; };
struct Fl { u32 f0; f32 f4; u8 pad8[0x28]; u32 f30; };
struct Lk { u8 pad[8]; Fl *f8; };
struct CB { u32 f0; u16 f4; u8 pad6[0x62];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void upd(f32); };
struct C2 : CB { u8 pad6c[0x18]; Lk *f84; u32 f88; u8 pad8c[0x24]; Fl *fb0; Fl *Get() { return f84 == 0 ? (Fl *)0 : f84->f8; } };
struct Q { u8 pad[0x30]; void *f30; };
class O { public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void o13(V3 *, V3 *, V3 *, V3 *, int); virtual void o14(V3 *, V3 *, V3 *, V3 *, int); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void msg(char *, int, int, int, int); virtual void v34(); virtual void v35(); virtual void v36(); virtual void o37(int, V3 *, int);
    u8 pad4[0x10]; V3 f14; V3 f20; V3 f2c; u8 pad38[0xc]; V3 f44; u8 pad50[0x4c]; Q *f9c; u8 padA0[0x78]; V3 f118; u8 pad124[0x30]; f32 f154; u8 pad158[0x110]; f32 f268; s32 f26c; u8 pad270[8]; V3 f278; V3 f284; f32 *f290; u8 pad294[0x14]; u32 *f2a8; u8 pad2ac[4]; u32 f2b0; u8 pad2b4[0xc]; C2 *f2c0; s32 f2c4; };

s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, s32 *e, s32 *f, Hit **g, Hit2 **h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);
void fn_80238618(O *o, f32 dt);

static inline u8 Zero(V3 *v) {
    u8 r = 0;
    if (fn_80101664(v) >= lbl_80365DD8 && fn_80101664(v) <= lbl_80365DDC) r = 1;
    return r;
}

void fn_80230928(O *o, f32 dt) {
    V3 ac, a0, p94, p88, c, n, a, b, d, e;
    Hit *h3c; Hit2 *h38; volatile f32 y34;
    if (o->f26c != 0 && o->f2c4 == 0) {
        fn_80238618(o, dt);
        o->f268 -= dt;
        if (o->f268 <= lbl_80365DF8) o->o37(1, 0, 0);
        o->o13(&ac, &a0, &p88, &p94, 0);
        if (o->f9c->f30) fn_80107244(o->f9c->f30, &ac);
        else { f32 z = lbl_80365DF8; ac.x = z; ac.y = z; ac.z = z; }
        ac.x = dt * o->f118.x + o->f44.x;
        ac.y = dt * o->f118.y + o->f44.y;
        ac.z = dt * o->f118.z + o->f44.z;
        o->o14(&ac, 0, 0, 0, 0);
        if (fn_80264E0C(&o->f284, &ac, &c, &n, 0, 0, &h3c, &h38, 0, 0, 0, 0, 0, 0, 1)) {
            if (h3c->f0 & 2) goto tail;
            o->o14(&c, 0, 0, 0, 0);
            if (h3c->f3c) h3c->f3c->msg(lbl_802A87BC, o, 0, 0, 0);
            if (o->f2a8 == 0 || (h38->f88 ? *h38->f88 : 0) == 0) {
                o->o37(0, &n, 0);
            } else {
                o->f2b0++;
                if ((s32)o->f2b0 > (s32)*o->f2a8) {
                    o->o37(0, &n, 0);
                } else {
                    f32 len;
                    a = o->f118;
                    b = a;
                    len = fn_80101664(&b);
                    fn_80101030(&b, &n);
                    {
                        f32 k = lbl_80365E18 * len;
                        a.x -= k * b.x; a.y -= k * b.y; a.z -= k * b.z;
                    }
                    d = Cross(a, n);
                    if (!Zero(&d)) {
                        e = Cross(a, d);
                        if (!Zero(&e)) {
                            f32 ang, m;
                            len = fn_80101664(&a);
                            {
                                int r = (u32)rand() % 20000;
                                f32 tmp = lbl_80365DE0 * (f32)r;
                                ang = tmp - lbl_80365DF4;
                            }
                            rand();
                            ang = lbl_80365DE8 * (lbl_80365DF0 * ang);
                            m = (f32)fn_800F03E4(ang);
                            d.x *= m; d.y *= m; d.z *= m;
                            m = (f32)fn_800F03E4(ang);
                            e.x *= m; e.y *= m; e.z *= m;
                            a.x += d.x; a.y += d.y; a.z += d.z;
                            a.x += e.x; a.y += e.y; a.z += e.z;
                            fn_80101820(&a);
                        }
                    }
                    o->f14 = a;
                    CrossV(o->f20, n, o->f14);
                    NORM(o->f20)
                    CrossV(o->f2c, o->f14, o->f20);
                    NORM(o->f2c)
                    o->o14(&c, &o->f14, &o->f2c, &o->f20, 0);
                    a.x *= len; *(volatile f32 *)&a.y = a.y * len; *(volatile f32 *)&a.z = a.z * len;
                    {
                        f32 l = a.x * a.x + a.y * a.y + a.z * a.z; if (l > *(volatile f32 *)&lbl_80365DF8) SQ(l)
                        o->f118 = a;
                        o->f154 = l;
                    }
                    o->msg(lbl_802A87B0, 0, 0, 0, 0);
                }
            }
            o->f284 = c;
        } else {
            o->f284 = ac;
        }
    tail:
        ac.x -= o->f278.x; ac.y -= o->f278.y; *(volatile f32 *)&ac.z = ac.z - o->f278.z;
        {
            f32 l = ac.x * ac.x + ac.y * ac.y + ac.z * ac.z;
            if (l > *(volatile f32 *)&lbl_80365DF8) { f64 g = __frsqrte(l);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * l);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * l);
    g = lbl_80365E00 * g * (lbl_80365E08 - g * g * l);
    y34 = l * g; l = y34; }
            if (l > (o->f290 ? *o->f290 : lbl_80365E1C)) o->o37(1, 0, 0);
        }
    }
    if (o->f2c4 != 0) {
        CB *b = o->f2c0;
        if (b) {
            if (b->f4 == 3) {
                C2 *q = (C2 *)b;
                q->upd(dt);
                if (q->fb0->f0 & 0x10) {
                    Fl *f;
                    q->f0 &= ~0x800;
                    if (q->f88 == 0) fn_8019B6B8(lbl_8035B65C->fc, q);
                    f = q->fb0;
                    if (f->f30 & 1) { f->f4 = lbl_80365DF8; f->f0 &= ~0x18; }
                    o->f26c = 0; o->f2c4 = 0;
                }
            } else if (b->f4 == 2) {
                C2 *q = (C2 *)b;
                q->upd(dt);
                if (q->Get() != 0 && q->Get()->f0 & 0x10) {
                    q->f0 &= ~0x800;
                    if (q->f88 == 0) fn_8019B6B8(lbl_8035B65C->fc, q);
                    o->f26c = 0; o->f2c4 = 0;
                }
            }
        }
    }
}
}
