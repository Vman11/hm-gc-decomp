#include "common.h"

struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };

inline V3 operator-(const V3 &a, const V3 &b) { return V3(a.x - b.x, a.y - b.y, a.z - b.z); }
struct VObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void get(V3 *, V3 *, V3 *, V3 *, void *);
    virtual void set(V3 *, V3 *, V3 *, V3 *, void *);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void play(const char *, void *, void *, void *, void *);
};

struct PlData { u8 pad[0x560]; s32 f560; };

struct Node { Node *next; s32 f4; s32 f8; };

struct Obj {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0xe0 - 0x64];
    VObj *fe0;
    u8 pade4[0x118 - 0xe4];
    V3 f118;
    V3 f124;
    V3 f130;
    V3 f13c;
    u8 pad148[4];
    VObj *f14c;
    u8 pad150[0x168 - 0x150];
    s32 f168;
    s32 f16c;
    u8 pad170[4];
    f32 *f174;
    f32 *f178;
    s32 *f17c;
    s32 *f180;
    Node *f184;
    u8 pad188[4];
    s32 f18c;
    s32 f190;
};

extern "C" {
s32 fn_8022C558(void *);
void fn_8009FBC8(Obj *, s32);
f32 fn_80101590(V3 *, V3 *);
f32 fn_80101664(V3 *);
f64 fn_800EFDA4(f64);
f64 fn_800F04FC(f64, f64);
void fn_80241DD0(Obj *, const char *, s32, s32, s32, s32);
void *fn_80242144(Obj *, s32);
void fn_80242BC0(void *, const char *, s32, s32, s32, s32);
void fn_8023FE08(Obj *, f32);
extern f32 lbl_80361B20;
extern f32 lbl_80361B24;
extern volatile f32 lbl_80361B28;
extern f32 lbl_80361B2C;
extern f32 lbl_80361B30;
extern f32 lbl_80361B34;
extern f64 lbl_80361B38;
extern f64 lbl_80361B40;
extern f64 lbl_80361B48;
extern f32 lbl_80361B50;
extern f32 lbl_80361B54;
extern f64 lbl_80361B58;
extern f64 lbl_80361B60;
extern f32 lbl_80361B68;
extern char lbl_80361AE4[7];
extern char lbl_80361AEC[5];
extern char lbl_80361ADC[8];
extern char lbl_8029A80C[];
extern char lbl_8029A848[];
}

static inline void sub(V3 &o, const V3 &a, const V3 &b) { o.x = a.x - b.x; o.y = a.y - b.y; o.z = a.z - b.z; }
static inline void sub2(V3 &o, const V3 &a, const V3 &b) { f32 z = a.z - b.z; f32 x = a.x - b.x; f32 y = a.y - b.y; o.x = x; o.y = y; o.z = z; }
static inline V3 sub3(const V3 &a, const V3 &b) { V3 t; t.x = a.x - b.x; t.y = a.y - b.y; t.z = a.z - b.z; return t; }
static inline s32 getv(s32 *p) { return p ? *p : 0; }

static inline f32 cosf_(f32 x) { return fn_800EFDA4(x); }
static inline f32 powf_(f32 x, f64 y) { return fn_800F04FC(x, y); }

static inline void pushOut(Obj *o) {
    if (((PlData *)o->f14c)->f560 == 0) {
        V3 a, b, c, e, d;
        o->f14c->get(&a, 0, 0, 0, 0);
        o->fe0->get(&b, &c, &d, &e, 0);
        if (a.z < b.z - lbl_80361B20 && a.z > b.z - lbl_80361B24) {
            V3 dir;
            f32 dx = a.x - b.x; f32 dy = a.y - b.y; f32 dz = a.z - b.z;
            *(volatile f32 *)&dir.z = dz; *(volatile f32 *)&dir.x = dx; *(volatile f32 *)&dir.y = dy;
            *(volatile f32 *)&dir.z = lbl_80361B28;
            f32 l = fn_80101664(&dir);
            if (l < lbl_80361B2C) {
                f32 s = lbl_80361B2C - l;
                a.x = s * dir.x + a.x;
                a.y = s * dir.y + a.y;
                a.z = s * dir.z + a.z;
                o->f14c->set(&a, 0, 0, 0, 0);
            }
        }
    }
}

extern "C" void fn_8009FE98(Obj *o, f32 dt) {
    V3 a, b, c, e, d;
    if (fn_8022C558(o->fe0) == 0) return;
    if (o->f16c < 0) fn_8009FBC8(o, -1);
    if (o->f18c != 0) o->f190 -= (s32)(lbl_80361B30 * dt);
    o->f14c->get(&a, 0, 0, 0, 0);
    o->fe0->get(&b, &c, &d, &e, 0);
    if (((PlData *)o->f14c)->f560 != 0 && getv(o->f180) != 0) {
        V3 f;
        f.x = b.x;
        f.y = b.y;
        f.z = b.z;
        o->fe0->get(&f, 0, 0, 0, 0);
        if (f.z < a.z && f.z > a.z - lbl_80361B34) {
            f32 k = lbl_80361B2C;
            if (f.z < a.z - lbl_80361B50) {
                k = lbl_80361B38 * (lbl_80361B40 - ((a.z - lbl_80361B48) - f.z));
            }
            f.z = a.z;
            f32 dist = fn_80101590(&f, &a);
            if (dist < lbl_80361B54) {
                f32 cv = cosf_(lbl_80361B58 * (lbl_80361B60 * (dist / lbl_80361B54)));
                f32 p = powf_(cv, lbl_80361B58);
                f32 m = lbl_80361B24 * dt; a.z = p * (m * k) + a.z;
                o->f14c->set(&a, 0, 0, 0, 0);
            }
        }
    }
    if (o->f60 == 2) {
        if (o->f16c > -1) {
            V3 g;
            g.x = o->f118.x - b.x;
            g.y = o->f118.y - b.y;
            g.z = o->f118.z - b.z;
            f32 len = fn_80101664(&g);
            f32 s = lbl_80361B68 * dt;
            if (len < s) {
                b.x = o->f118.x;
                b.y = o->f118.y;
                b.z = o->f118.z;
                fn_80241DD0(o, lbl_80361AE4, 0, 0, 0, 0);
                c.x = o->f124.x;
                c.y = o->f124.y;
                c.z = o->f124.z;
                d.x = o->f13c.x;
                d.y = o->f13c.y;
                d.z = o->f13c.z;
                e.x = o->f130.x;
                e.y = o->f130.y;
                e.z = o->f130.z;
                Node *head = o->f184;
                Node *n = head;
                s32 i = 0;
                while (n) {
                    if (i == o->f16c) {
                        if (n->f8 > 0) {
                            o->f18c = 1;
                            o->f190 = n->f8;
                        }
                        break;
                    }
                    n = n ? n->next : head;
                    i++;
                }
            } else {
                b.x = s * g.x + b.x;
                b.y = s * g.y + b.y;
                b.z = s * g.z + b.z;
            }
            o->fe0->set(&b, &c, &d, &e, 0);
        }
    } else if (o->f60 == 3) {
        pushOut(o);
        V3 t;
        t = a;
        t.z = b.z;
        if ((fn_80101590(&t, &b) < *o->f174 && o->f18c == 0) || (o->f18c != 0 && o->f190 <= 0)) {
            if (o->f18c != 0) {
                o->f18c = 0;
                o->f190 = 0;
            }
            fn_80241DD0(o, lbl_8029A80C, 0, 0, 0, 0);
            fn_80242BC0(fn_80242144(o, 1), lbl_80361AEC, 0, 0, o->f16c + *o->f17c, 0);
            if (o->f16c == o->f168 - 1 && getv(o->f180) != 0) {
                o->f14c->play(lbl_8029A848, 0, 0, 0, 0);
            }
        }
    } else if (o->f60 == 4) {
        pushOut(o);
        V3 t;
        t = a;
        t.z = b.z;
        if (fn_80101590(&t, &b) > *o->f178) {
            fn_80241DD0(o, lbl_80361ADC, 0, 0, 0, 0);
        }
    }
    fn_8023FE08(o, dt);
}
