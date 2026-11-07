// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
// NonMatching: instructions identical, 40 diff lines = FPR colouring only (tx f27 vs f31, Sqrt f7/f8).
#include "common.h"

extern "C" {
struct Vec3 { f32 x, y, z; };
}

#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
struct Obj {
    V4(a) V4(b) V4(c) V4(d) V4(e) V4(f) V4(g) V4(h) virtual void h4();
    virtual void play(char *s, int a, int b, int c, int d);
};

extern "C" {

struct Fr { Vec3 pos, a, b, c, e; };
struct Cam {
    u8 pad[20];
    Fr src;      /* 0x14 */
    Fr cur;      /* 0x50 */
    u8 pad8c[0x10];
    Obj *obj;    /* 0x9c */
    u8 padA0[0x14];
    f32 *rate;   /* 0xb4 */
    u8 padB8[4];
    f32 dist;    /* 0xbc */
    u8 padC0[0x14];
    Vec3 look;   /* 0xd4 */
    s32 fixed;   /* 0xe0 */
    u8 padE4[0x14];
    f32 *rate2;  /* 0xf8 */
    f32 *amp;    /* 0xfc */
    f32 *jit;    /* 0x100 */
    f32 ang;     /* 0x104 */
    f32 prev;    /* 0x108 */
};

extern f32 lbl_80366C00, lbl_80366C04, lbl_80366C08, lbl_80366C0C, lbl_80366C10;
extern f32 lbl_80366C14, lbl_80366C18, lbl_80366C24, lbl_80366C28, lbl_80366C40;
extern f32 lbl_80366C44, lbl_80366C48, lbl_80366C4C, lbl_80366C50;
extern f64 lbl_80366C30, lbl_80366C38;
extern char lbl_80366C1C[8];
s32 rand(void);
void fn_802610A0(Cam *);
void fn_8026102C(Cam *);
void fn_80266AD0(Cam *, f32);
void fn_80101820(Vec3 *);
double fn_800F030C(double);
double fn_800EFDA4(double);
double fn_800F049C(double);

static inline f32 Sqrt(f32 x) {
    if (x > lbl_80366C00) {
        const f64 _half = lbl_80366C30;
        const f64 _three = lbl_80366C38;
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

static inline void Approach(Vec3 *v, f32 x, f32 y, f32 z, f32 t) {
    f32 dz, dy, dx;
    dx = x - v->x;
    dy = y - v->y;
    dz = z - v->z;
    f32 k = lbl_80366C28 - (f32)fn_800F049C(t);
    v->x = k * dx + v->x;
    v->y = k * dy + v->y;
    v->z = k * dz + v->z;
}

static inline bool Small(Vec3 *v) {
    return v->x >= lbl_80366C40 && v->x <= lbl_80366C44 &&
           v->y >= lbl_80366C40 && v->y <= lbl_80366C44 &&
           v->z >= lbl_80366C40 && v->z <= lbl_80366C44;
}

static inline u32 RandU(u32 n) {
    u32 r = 0;
    if (n) r = (u32)rand() % n;
    return r;
}

static inline f32 RandF(f32 r) {
    s32 n = (s32)(lbl_80366C04 * r);
    if (n < 0) {
        return lbl_80366C0C * (f32)-(s32)RandU(-n);
    }
    return lbl_80366C0C * (f32)(s32)RandU(n);
}

static inline void Follow(Cam *p, f32 dt) {
    f32 dd = p->dist;
    f32 tz, ty, tx;
    tx = p->cur.a.x * dd;
    ty = p->cur.a.y * dd;
    tz = p->cur.a.z * dd;
    f32 len = Sqrt(p->src.e.x * p->src.e.x + p->src.e.y * p->src.e.y + p->src.e.z * p->src.e.z);
    p->cur.e.x = p->cur.a.x * len;
    p->cur.e.y = p->cur.a.y * len;
    p->cur.e.z = p->cur.a.z * len;
    if (Small(&p->cur.e)) {
        p->cur.e.x = p->cur.a.x * lbl_80366C48;
        p->cur.e.y = p->cur.a.y * lbl_80366C48;
        p->cur.e.z = p->cur.a.z * lbl_80366C48;
    }
    Approach(&p->cur.e, tx, ty, tz, lbl_80366C4C * dt);
}

static inline void Dir(Cam *p, f32 a) {
    if (a > lbl_80366C00 && p->prev < lbl_80366C00) goto play;
    {
    f32 z = *(volatile f32 *)&lbl_80366C00;
    if (a < z && p->prev > z) {
    play:
        p->obj->play(lbl_80366C1C, 0, 0, 0, 0);
    }
    }
}

#pragma inline_max_size(4000)
static inline void Tail(Cam *p, f32 dt) {
    fn_80101820(&p->cur.a);
    fn_80101820(&p->cur.b);
    p->cur.c.x = p->cur.a.y * p->cur.b.z - p->cur.a.z * p->cur.b.y;
    p->cur.c.y = p->cur.a.z * p->cur.b.x - p->cur.a.x * p->cur.b.z;
    p->cur.c.z = p->cur.a.x * p->cur.b.y - p->cur.a.y * p->cur.b.x;
    {
        f32 z = p->cur.e.z;
        Follow(p, dt);
        p->cur.e.z = z;
    }
    p->cur.pos.x = dt * p->cur.e.x + p->cur.pos.x;
    p->cur.pos.y = dt * p->cur.e.y + p->cur.pos.y;
    p->cur.pos.z = dt * p->cur.e.z + p->cur.pos.z;
    p->look.x = lbl_80366C50 * p->cur.e.x + p->cur.pos.x;
    p->look.y = lbl_80366C50 * p->cur.e.y + p->cur.pos.y;
    p->look.z = lbl_80366C50 * p->cur.e.z + p->cur.pos.z;
}

void fn_80266230(Cam *p, f32 dt) {
    f32 tx, tz, ty;
    fn_802610A0(p);
    p->cur.pos = p->src.pos;
    p->cur.a = p->src.a;
    p->cur.b = p->src.b;
    p->cur.c = p->src.c;
    p->cur.e = p->src.e;
    p->ang += RandF(lbl_80366C08 * *p->jit) - *p->jit;
    while (p->ang > lbl_80366C14) p->ang -= lbl_80366C10;
    while (p->ang < lbl_80366C18) p->ang += lbl_80366C10;
    Dir(p, p->ang);
    p->prev = p->ang;
    if (p->fixed) {
        tx = p->src.a.x;
        ty = p->src.a.y;
        tz = p->src.a.z;
    } else {
        f32 k = *p->amp * (f32)fn_800F030C(p->ang) + lbl_80366C24;
        tx = p->src.a.x * k;
        ty = p->src.a.y * k;
        tz = p->src.a.z * k;
        f32 m = *p->amp * (f32)fn_800EFDA4(p->ang);
        tx = m * p->src.c.x + tx;
        ty = m * p->src.c.y + ty;
        tz = m * p->src.c.z + tz;
    }
    {
        f32 rate = p->rate2 ? *p->rate2 : *p->rate;
        Approach(&p->cur.a, tx, ty, tz, -rate * dt);
    }
    Tail(p, dt);
    fn_80266AD0(p, dt);
    fn_8026102C(p);
}

}
