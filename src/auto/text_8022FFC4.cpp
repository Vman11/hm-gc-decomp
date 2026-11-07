#include "common.h"

extern "C" {
struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
inline V3 Cross(const V3 &a, const V3 &b) {
    V3 t; t.x = a.y * b.z - a.z * b.y; t.y = a.z * b.x - a.x * b.z; t.z = a.x * b.y - a.y * b.x; return t;
}
extern f32 lbl_80365DD8;
extern f32 lbl_80365DDC;
extern f32 lbl_80365DE0;
extern f32 lbl_80365DE4;
extern f32 lbl_80365DE8;
extern f32 lbl_80365DEC;
extern f32 lbl_80365DF0;
extern f32 lbl_80365DF4;
extern f32 lbl_80365DF8;
extern f64 lbl_80365E00;
extern f64 lbl_80365E08;
extern V3 lbl_80357E78;
extern V3 lbl_80357E90;
extern char lbl_802A87B0[];
inline f32 Sq(f32 x) {
    const f64 _half = lbl_80365E00;
    const f64 _three = lbl_80365E08;
    volatile f32 y;
    f64 g = __frsqrte((f64)x);
    g = _half * g * (_three - g * g * x);
    g = _half * g * (_three - g * g * x);
    g = _half * g * (_three - g * g * x);
    y = x * g;
    return y;
}
inline void Norm(V3 &v) {
    f32 l = v.x * v.x + v.y * v.y + v.z * v.z;
    if (l > *(volatile f32 *)&lbl_80365DF8) l = Sq(l);
    if (lbl_80365DF8 == l) { v.x = lbl_80365DF4; v.y = lbl_80365DF8; v.z = lbl_80365DF8; }
    else { f32 i = lbl_80365DF4 / l; v.x *= i; v.y *= i; v.z *= i; }
}
f32 fn_80101664(V3 *);
void fn_80101820(V3 *);
f64 fn_800F03E4(f32);
int rand(void);
class T { public:
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9(); virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(int, V3 *, V3 *, V3 *, int);
    u32 f4; u8 pad8[0x1d0]; u32 *f1d8; u8 pad1dc[0x4c]; u32 f228; };
class O { public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void o13(V3 *, int, int, int, int); virtual void o14(V3 *, V3 *, V3 *, V3 *, int); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void msg(char *, int, int, int, int); virtual void v34(); virtual void v35(); virtual void v36(); virtual void o37(int, int, T *);
    u32 f4; u8 pad8[0x110]; V3 f118; u8 pad124[0x30]; f32 f154; u8 pad158[0x108]; u32 f260; u8 pad264[0xc]; T *f270; u8 pad274[0x34]; u32 *f2a8; u8 pad2ac[4]; u32 f2b0; };

inline void CrossV(V3 &o, const V3 &a, const V3 &b) { o.x = a.y * b.z - a.z * b.y; o.y = a.z * b.x - a.x * b.z; *(volatile f32 *)&o.z = a.x * b.y - a.y * b.x; }
static inline f32 Len(const V3 &v) { f32 l = v.x * v.x + v.y * v.y + v.z * v.z; if (l > *(volatile f32 *)&lbl_80365DF8) l = Sq(l); return l; }
static inline void Scale(V3 *v, f32 m) { v->x *= m; v->y *= m; v->z *= m; }
static inline void ScaleV(V3 *v, f32 m) { *(volatile f32 *)&v->x = v->x * m; *(volatile f32 *)&v->y = v->y * m; *(volatile f32 *)&v->z = v->z * m; }
#define VK(k) (*(volatile f32 *)&k)
static inline u8 Zero(V3 *v) {
    u8 r = 0;
    if (fn_80101664(v) >= lbl_80365DD8 && fn_80101664(v) <= lbl_80365DDC) r = 1;
    return r;
}
static inline u8 Near(const V3 &a, const V3 &b) {
    u8 r = 0;
    f32 e = *(volatile f32 *)&lbl_80365DDC;
    if (a.x >= b.x - e && a.x <= b.x + e &&
        a.y >= b.y - e && a.y <= b.y + e &&
        a.z >= b.z - e && a.z <= b.z + e) r = 1;
    return r;
}
static inline int Off(T *t, u32 m) {
    return (t->f1d8 ? (*t->f1d8 & m) : 0) == 0;
}

void fn_8022FFC4(O *o, T *t) {
    V3 a, b, c, p, f, r, s;
    f32 k;
    if (t != 0) {
        if (o->f270 == t) return;
        if (t->f4 == o->f4) return;
        if (t->f228 & 0x20) return;
    }
    if (o->f2a8 == 0) { o->o37(0, 0, t); return; }
    {
        int lt = (s32)o->f2b0 > (s32)*o->f2a8;
        int off = Off(t, o->f260);
        o->f2b0++;
        if (lt || off) { o->o37(0, 0, t); return; }
    }
    o->o13(&p, 0, 0, 0, 0);
    t->c13(0, &f, &r, &s, 0);
    a = o->f118;
    k = o->f154;
    b = r;
    if (Zero(&b)) return;
    c = Cross(f, r);
    if (!Zero(&c)) {
        f32 e2, e1;
        int n = (u32)rand() % 13000;
        f32 tmp = lbl_80365DE0 * (f32)n;
        e1 = tmp - lbl_80365DE4;
        int n2 = (u32)rand() % 20000;
        e2 = lbl_80365DE0 * (f32)n2;
        f32 m;
        fn_80101664(&a);
        m = (f32)fn_800F03E4(lbl_80365DE8 * (lbl_80365DF0 * e1 + lbl_80365DEC));
        ScaleV(&b, m);
        { f32 g = VK(lbl_80365DF0); f32 d = e2 - VK(lbl_80365DF4); f32 h = VK(lbl_80365DEC); f32 k = VK(lbl_80365DE8); m = (f32)fn_800F03E4(k * (g * d + h)); }
        Scale(&c, m);
        a.x += b.x; a.y += b.y; a.z += b.z;
        a.x += c.x; a.y += c.y; a.z += c.z;
        fn_80101820(&a);
    }
    *(volatile f32 *)&f.x = a.x; *(volatile f32 *)&f.y = a.y; *(volatile f32 *)&f.z = a.z;
    if (Near(f, lbl_80357E90)) {
        CrossV(s, lbl_80357E78, f);
        Norm(s);
        CrossV(r, f, s);
        Norm(r);
    } else {
        CrossV(s, lbl_80357E90, f);
        Norm(s);
        CrossV(r, f, s);
        Norm(r);
    }
    o->o14(&p, &f, &r, &s, 0);
    a.x *= k; a.y *= k; *(volatile f32 *)&a.z = a.z * k;
    {
        f32 l = Len(a);
        o->f118 = a;
        o->f154 = l;
    }
    o->msg(lbl_802A87B0, 0, 0, 0, 0);
}
}
