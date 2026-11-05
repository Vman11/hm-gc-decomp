// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct Vec3 { f32 x, y, z; };
}

#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
struct Src {
    V4(a) V4(b) V4(c) virtual void c4();
    virtual void getPos(Vec3 *o, int a, int b, int c, int d);
};
struct Obj {
    V4(a) V4(b) V4(c) V4(d) V4(e) V4(f) V4(g) V4(h) virtual void h4();
    virtual void play(char *s, int a, int b, int c, int d);
    u8 pad4[0x188];
    Src *src;
};

extern "C" {

struct Pad { s32 on; };
struct Fr { Vec3 pos, a, b, c, e; };
struct Cam {
    u8 pad[20];
    Fr src;      /* 0x14 */
    Fr cur;      /* 0x50 */
    u8 pad8c[0x10];
    Obj *obj;    /* 0x9c */
    u8 padA0[4];
    Pad *ctl;    /* 0xa4 */
    u8 padA8[0xc];
    f32 *rate;   /* 0xb4 */
    u8 padB8[4];
    f32 dist;    /* 0xbc */
    u8 padC0[0x14];
    Vec3 look;   /* 0xd4 */
    u8 padE0[0x18];
    f32 *rate2;  /* 0xf8 */
    f32 ang;     /* 0xfc */
};

extern Vec3 lbl_80357E90;
extern f32 lbl_80366860, lbl_80366870, lbl_80366874, lbl_80366878, lbl_80366884;
extern f32 lbl_80366898, lbl_8036689C, lbl_803668A0, lbl_803668A4, lbl_803668A8;
extern f64 lbl_80366868, lbl_80366888, lbl_80366890;
extern char lbl_8036687C[8];
void fn_802610A0(Cam *);
void fn_8026102C(Cam *);
void fn_80266AD0(Cam *, f32);
void fn_80100E24(Vec3 *, const Vec3 *, const Vec3 *);
void fn_80101820(Vec3 *);
void fn_801012C0(Vec3 *, Vec3 *, Vec3 *, f32);
double fn_800F045C(double);
double fn_800F049C(double);

static inline f32 Sqrt(f32 d) {
    if (d > lbl_80366860) {
        volatile f32 y;
        f64 g = __frsqrte((f64)d);
        g = lbl_80366888 * g * (lbl_80366890 - g * g * d);
        g = lbl_80366888 * g * (lbl_80366890 - g * g * d);
        g = lbl_80366888 * g * (lbl_80366890 - g * g * d);
        y = (f32)(d * g);
        d = y;
    }
    return d;
}

static inline void Approach(Vec3 *v, f32 x, f32 y, f32 z, f32 t) {
    f32 dz, dy, dx;
    dx = x - v->x;
    dy = y - v->y;
    dz = z - v->z;
    f32 k = lbl_80366884 - (f32)fn_800F049C(t);
    v->x = k * dx + v->x;
    v->y = k * dy + v->y;
    v->z = k * dz + v->z;
}

static inline f32 Acos(f32 x) {
    if ((f32)__fabs(x) <= lbl_80366868) return fn_800F045C(x);
    return x > lbl_80366860 ? lbl_80366860 : lbl_80366870;
}

static inline bool Small(Vec3 *v) {
    return v->x >= lbl_80366898 && v->x <= lbl_8036689C &&
           v->y >= lbl_80366898 && v->y <= lbl_8036689C &&
           v->z >= lbl_80366898 && v->z <= lbl_8036689C;
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
        p->cur.e.x = p->cur.a.x * lbl_803668A0;
        p->cur.e.y = p->cur.a.y * lbl_803668A0;
        p->cur.e.z = p->cur.a.z * lbl_803668A0;
    }
    Approach(&p->cur.e, tx, ty, tz, lbl_803668A4 * dt);
}

void fn_8025B168(Cam *p, f32 dt) {
    Vec3 tgt;
    Vec3 r;
    Vec3 d;
    Vec3 n;
    f32 dot, ang, a;
    fn_802610A0(p);
    p->cur.pos = p->src.pos;
    p->cur.a = p->src.a;
    p->cur.b = p->src.b;
    p->cur.c = p->src.c;
    p->cur.e = p->src.e;
    p->obj->src->getPos(&tgt, 0, 0, 0, 0);
    d.x = p->src.pos.x - tgt.x;
    d.y = p->src.pos.y - tgt.y;
    d.z = p->src.pos.z - tgt.z;
    fn_80100E24(&n, &d, &p->src.b);
    fn_80101820(&n);
    dot = n.x * p->src.a.x + n.y * p->src.a.y + n.z * p->src.a.z;
    ang = Acos(dot);
    a = ang;
    {
        f32 cx = p->src.a.y * d.z - p->src.a.z * d.y;
        f32 cy = p->src.a.z * d.x - p->src.a.x * d.z;
        f32 cz = p->src.a.x * d.y - p->src.a.y * d.x;
        if (cx * lbl_80357E90.x + cy * lbl_80357E90.y + cz * lbl_80357E90.z > lbl_80366860)
            a = -ang;
    }
    while (a > *(volatile f32 *)&lbl_80366874) a -= *(volatile f32 *)&lbl_80366874;
    while (a < *(volatile f32 *)&lbl_80366878) a += *(volatile f32 *)&lbl_80366874;
    fn_801012C0(&r, &p->src.b, &p->src.a, a);
    {
        f32 z;
        if (p->ang < lbl_80366860 && a > lbl_80366860) goto play;
        z = *(volatile f32 *)&lbl_80366860;
        if (p->ang > z && a < z) {
        play:
            p->obj->play(lbl_8036687C, 0, 0, 0, 0);
        }
    }
    p->ang = a;
    {
        f32 rate = p->rate2 ? *p->rate2 : *p->rate;
        Approach(&p->cur.a, r.x, r.y, r.z, -rate * dt);
    }
    fn_80101820(&p->cur.a);
    fn_80101820(&p->cur.b);
    p->cur.c.x = p->cur.a.y * p->cur.b.z - p->cur.a.z * p->cur.b.y;
    p->cur.c.y = p->cur.a.z * p->cur.b.x - p->cur.a.x * p->cur.b.z;
    p->cur.c.z = p->cur.a.x * p->cur.b.y - p->cur.a.y * p->cur.b.x;
    if (!p->ctl || !p->ctl->on) {
        f32 z = p->cur.e.z;
        Follow(p, dt);
        p->cur.e.z = z;
    } else {
        Follow(p, dt);
    }
    p->cur.pos.x = dt * p->cur.e.x + p->cur.pos.x;
    p->cur.pos.y = dt * p->cur.e.y + p->cur.pos.y;
    p->cur.pos.z = dt * p->cur.e.z + p->cur.pos.z;
    p->look.x = lbl_803668A8 * d.x + p->cur.pos.x;
    p->look.y = lbl_803668A8 * d.y + p->cur.pos.y;
    p->look.z = lbl_803668A8 * d.z + p->cur.pos.z;
    if (!p->ctl || !p->ctl->on) {
        fn_80266AD0(p, dt);
    }
    fn_8026102C(p);
}

}
