// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 {
    f32 x, y, z;
    V3() {}
    V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};

#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
struct Act {
    V4(a) V4(b) V4(c) virtual void c4();
    virtual void getPos(V3 *o, V3 *a, V3 *b, V3 *c, s32 d);
};

struct Obj { u8 pad[0x18c]; Act *act; };

struct Prm { f32 *f[16]; };

struct Cam {
    u8 pad0[0x50];
    V3 eye;      /* 0x50 */
    V3 fwd;      /* 0x5c */
    V3 up;       /* 0x68 */
    V3 side;     /* 0x74 */
    u8 pad80[0x1c];
    Obj *obj;    /* 0x9c */
    u8 padA0[0x14];
    f32 *b4;     /* 0xb4 */
    f32 *b8;     /* 0xb8 */
    f32 *bc;     /* 0xbc */
    void *hnd;   /* 0xc0 */
    u8 padC4[4];
    f32 roll;    /* 0xc8 */
    f32 *rate;   /* 0xcc */
    f32 yaw;     /* 0xd0 */
    f32 pitch;   /* 0xd4 */
    f32 d8;      /* 0xd8 */
    u8 padDC[0x18];
    V3 tf;       /* 0xf4 */
    V3 tu;       /* 0x100 */
    V3 ts;       /* 0x10c */
    f32 f118;    /* 0x118 */
    u8 pad11C[0x1c];
    s32 *mode;   /* 0x138 */
    u8 pad13C[8];
    Prm *prm;    /* 0x144 */
    u8 pad148[0x10];
    s32 idx;     /* 0x158 */
    u8 pad15C[4];
    f32 f160;    /* 0x160 */
    f32 f164;    /* 0x164 */
    V3 o168;     /* 0x168 */
    V3 o174;     /* 0x174 */
    f32 f180;    /* 0x180 */
    f32 f184;    /* 0x184 */
    u8 pad188[0xc];
    V3 pos;      /* 0x194 */
    V3 prev;     /* 0x1a0 */
};

u8 lbl_80357AB0[0xC];
u8 lbl_80357ABC[0x24];
V3 lbl_80357AE0;
V3 lbl_80357AEC;
V3 lbl_80357AF8;
V3 lbl_80357B04;
V3 lbl_80357B10;
V3 lbl_80357B1C;
extern V3 lbl_80357E90;
extern f32 lbl_802F2924[];
extern s32 lbl_80359748;
extern s32 lbl_8035A238;
extern s32 lbl_8035A240;
extern Act *lbl_8035A244;
extern Act *lbl_8035A248;
extern s32 lbl_8035A24C;
extern s32 lbl_8035A260;
extern f32 lbl_8035A268;
extern f32 lbl_8035A26C;
extern f32 lbl_8035A270;
extern void *lbl_8035B5E4;
extern volatile s32 lbl_8035B6E0;
extern volatile s32 lbl_8035B6E4;
extern volatile s32 lbl_8035B6E8;
extern volatile s32 lbl_8035B6EC;
extern volatile f32 lbl_8035B6F0;
extern volatile s8 lbl_8035B6F4;
extern s32 lbl_8035B6F8;
extern s8 lbl_8035B6FC;
extern char lbl_8036696C[7];
extern f32 lbl_80366950, lbl_80366954, lbl_80366958, lbl_8036695C, lbl_80366960, lbl_80366964, lbl_80366968;
extern f32 lbl_80366974, lbl_80366978, lbl_8036697C, lbl_80366980, lbl_80366984, lbl_80366988, lbl_8036698C;
extern f32 lbl_80366990, lbl_80366994, lbl_80366998, lbl_8036699C, lbl_803669A0, lbl_803669A4, lbl_803669A8;
extern f32 lbl_803669AC, lbl_803669B0, lbl_803669B4, lbl_803669B8, lbl_803669BC;

void fn_802610A0(Cam *);
void fn_8026102C(Cam *);
void fn_8025DEF0(Cam *);
void fn_80256F8C(Cam *, f32);
void fn_8025DE7C(f32 *p, f32 x, f32 b, f32 c, f32 lim);
void fn_80100F24(V3 *a, V3 *b);
void fn_80037060(V3 *p, V3 *q, f32 a, f32 b);
void fn_8023BE44(V3 *o, f32 k, f32 z, V3 a, V3 b, f32 t);
void fn_80101414(V3 *a, V3 *b, f32 s);
void fn_80101820(V3 *v);
f32 fn_80101664(V3 *v);
void fn_8003723C(V3 *d, V3 *a, V3 *b);
void *fn_800F8274(void *, char *);
s32 fn_80253664(void *, s32);
f32 fn_80253610(void *, s32);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, f32 *e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);

static inline void Set(V3 &d, const V3 &s) { d.x = s.x; d.y = s.y; d.z = s.z; }

static inline bool MovedI(Cam *c, s32 id) {
    bool r = false;
    if (!((f32)fn_80253664(c->hnd, id) >= lbl_80366964 && (f32)fn_80253664(c->hnd, id) <= lbl_80366968)) r = true;
    return r;
}

static inline bool MovedF(Cam *c, s32 id) {
    bool r = false;
    if (!(fn_80253610(c->hnd, id) >= lbl_80366964 && fn_80253610(c->hnd, id) <= lbl_80366968)) r = true;
    return r;
}

void fn_8025C610(Cam *c, f32 dt) {
    V3 cur;
    V3 a;
    V3 b;
    V3 back;
    V3 u;
    V3 v;
    V3 d;
    V3 p1;
    V3 p2;
    V3 pivot;
    V3 end;
    V3 t;
    V3 f;
    V3 s;
    V3 r;
    V3 r2;
    V3 r3;
    V3 r4;
    V3 dir;
    V3 o1;
    V3 o2;
    f32 hitf;
    Act *act;
    Prm *P;
    f32 upx, upy, upz;
    s32 b1, b2, b3;
    f32 roll;
    s32 hit;
    f32 len;

    act = c->obj->act;
    fn_802610A0(c);
    Set(c->prev, c->pos);
    act->getPos(&cur, &c->fwd, &c->up, &c->side, 0);
    c->pos.x = cur.x;
    c->pos.y = cur.y;
    if (lbl_8035A24C != 0) {
        fn_8025DE7C(&c->pos.z, cur.z, lbl_80366958, dt, lbl_80366950);
    } else {
        fn_8025DE7C(&c->pos.z, cur.z, lbl_8036695C, dt, lbl_80366950);
    }
    Set(c->up, lbl_80357E90);
    fn_80100F24(&c->fwd, &c->up);
    upx = c->up.x;
    upy = c->up.y;
    upz = c->up.z;
    fn_8025DEF0(c);
    P = c->prm;
    a = V3(*P->f[0], *P->f[1], *P->f[2]);
    *c->b4 = *P->f[10];
    *c->b8 = *P->f[11];
    *c->bc = *P->f[14];
    fn_80037060(&c->o174, &a, *c->b8, dt);
    b = V3(*P->f[5], *P->f[6], *P->f[7]);
    {
        f32 ang;
        if (P->f[15] != 0) ang = *P->f[15];
        else ang = lbl_80366950;
        fn_8025DE7C(&c->f118, lbl_80366960 * ang, *c->b8, dt, lbl_80366950);
    }
    fn_80037060(&c->o168, &b, *P->f[11], dt);
    Set(back, c->side);
    back.x = -back.x;
    back.y = -back.y;
    back.z = -back.z;
    if (c->hnd != 0) {
        b1 = MovedI(c, 0x47);
        b2 = MovedI(c, 0x48);
        b3 = MovedF(c, 0x3e);
    } else {
        c->hnd = fn_800F8274(lbl_8035B5E4, lbl_8036696C);
        b1 = false;
        b2 = false;
        b3 = false;
    }
    if (b1 || b2) {
        lbl_8035B6EC = 0;
        lbl_8035B6E8 = 0;
    }
    if (lbl_80359748 == 1) {
        if (c->fwd.x * c->tf.x + c->fwd.y * c->tf.y + c->fwd.z * c->tf.z > lbl_80366950) {
            fn_8023BE44(&c->tf, lbl_80366974, lbl_80366950, c->fwd, back, dt);
        }
        if (lbl_8035B6EC != 0) {
            fn_8023BE44(&c->tf, lbl_80366978, lbl_80366950, c->fwd, c->up, dt);
            fn_8023BE44(&c->tf, lbl_80366978, lbl_80366950, c->fwd, back, dt);
        } else if (lbl_8035B6E8 != 0) {
            fn_8023BE44(&c->tf, lbl_80366978, lbl_80366950, lbl_80357AE0, c->up, dt);
            fn_8023BE44(&c->tf, lbl_80366978, lbl_80366950, lbl_80357AE0, back, dt);
        }
    } else if (lbl_80359748 == 4) {
        fn_80101414(&c->tf, &lbl_80357E90, lbl_8036697C * (-lbl_8035A268 * dt));
    } else if (lbl_80359748 == 5) {
        lbl_8035B6EC = 0;
        lbl_8035B6E8 = 0;
    }
    if (lbl_80359748 == 3) {
        if (lbl_8035B6EC != 0) {
            fn_8023BE44(&c->tf, lbl_80366974, lbl_80366950, c->fwd, lbl_80357E90, dt);
        } else if (lbl_8035B6E8 != 0) {
            fn_8023BE44(&c->tf, lbl_80366954, lbl_80366950, lbl_80357AE0, c->up, dt);
            Set(u, c->tf);
            Set(v, lbl_80357AE0);
            u.z = v.z = lbl_80366950;
            fn_80101820(&u);
            fn_80101820(&v);
            if (u.x * v.x + u.y * v.y + u.z * v.z > lbl_80366980) lbl_8035B6E8 = 0;
        } else {
            fn_8025DE7C(&c->tf.z, lbl_80366950, lbl_80366954, dt, lbl_80366950);
        }
        if (!lbl_8035B6F4) {
            lbl_8035B6F0 = lbl_80366950;
            lbl_8035B6F4 = 1;
        }
        roll = lbl_80366950;
        if (lbl_8035A238 == 0) {
            if ((f32)__fabs(lbl_8035A268) > (*(volatile f32 *)&lbl_80366954)) {
                lbl_8035B6EC = 0;
                lbl_8035B6E8 = 0;
                if (lbl_8035A268 < lbl_80366950) {
                    fn_80101414(&c->tf, &lbl_80357E90, lbl_80366958 * (-(lbl_80366954 + lbl_8035A268) * dt));
                } else {
                    fn_80101414(&c->tf, &lbl_80357E90, lbl_80366958 * (-(lbl_8035A268 - lbl_80366954) * dt));
                }
            }
        } else if ((f32)__fabs(lbl_8035A26C) > lbl_80366954) {
            if (lbl_8035A26C < lbl_80366950) {
                fn_80101414(&c->tf, &lbl_80357E90, lbl_80366958 * (-(lbl_80366954 + lbl_8035A26C) * dt));
            } else {
                fn_80101414(&c->tf, &lbl_80357E90, lbl_80366958 * (-(lbl_8035A26C - lbl_80366954) * dt));
            }
        }
        if (c->hnd == 0) roll = lbl_80366950;
        if (!(roll >= lbl_80366964 && roll <= lbl_80366968)) {
            fn_8025DE7C((f32 *)&lbl_8035B6F0, roll, lbl_80366984, dt, lbl_80366950);
        } else if (b1 && b2) {
            fn_8025DE7C((f32 *)&lbl_8035B6F0, lbl_80366950, lbl_80366984, dt, lbl_80366950);
        } else if (b1) {
            fn_8025DE7C((f32 *)&lbl_8035B6F0, lbl_80366954, lbl_80366984, dt, lbl_80366950);
        } else if (b2) {
            fn_8025DE7C((f32 *)&lbl_8035B6F0, lbl_80366988, lbl_80366984, dt, lbl_80366950);
        } else {
            fn_8025DE7C((f32 *)&lbl_8035B6F0, lbl_80366950, lbl_80366984, dt, lbl_80366950);
        }
        fn_80101414(&c->tf, &lbl_80357E90, lbl_8035B6F0 * dt);
    }
    if (lbl_8035B6E4 != 0 || lbl_8035B6E0 != 0) {
        Set(c->tf, c->fwd);
        c->yaw = lbl_8035A268;
        c->pitch = lbl_8035A270;
        lbl_8035B6E4 = 0;
    }
    if (lbl_8035A260 != 0 && lbl_8035B6E8 == 0) {
        c->roll = lbl_8036695C * dt + c->roll;
        if (c->roll > *P->f[13]) c->roll = *P->f[13];
        Set(d, c->fwd);
        if (lbl_8035A244 != 0 && !b1 && !b2 && !b3) {
            lbl_8035A244->getPos(&p1, 0, 0, 0, 0);
            d.y = p1.y - c->pos.y;
            d.z = p1.z - c->pos.z;
            d.x = p1.x - c->pos.x;
            fn_80101820(&d);
            fn_8023BE44(&c->tf, lbl_80366954, lbl_80366960 * *P->f[12], d, c->up, dt);
        }
        if (lbl_8035A248 != 0) {
            lbl_8035A248->getPos(&p2, 0, 0, 0, 0);
            d.y = c->pos.y - p2.y;
            d.z = c->pos.z - p2.z;
            d.x = c->pos.x - p2.x;
            fn_80101820(&d);
            fn_8023BE44(&c->tf, lbl_80366974, lbl_80366960 * *P->f[12], d, c->up, dt);
        }
        if (lbl_8035A240 != 0) {
            d.x = -d.x;
            d.y = -d.y;
            d.z = -d.z;
        }
        fn_8023BE44(&c->tf, c->roll, lbl_80366960 * *P->f[12], d, c->up, dt);
    } else {
        c->roll = lbl_80366950;
    }
    fn_8023BE44(&c->tu, lbl_80366974, lbl_80366950, c->up, c->fwd, dt);
    fn_8003723C(&c->ts, &c->tf, &c->tu);
    fn_8003723C(&c->tu, &c->ts, &c->tf);
    fn_80101820(&c->tu);
    fn_80101820(&c->ts);
    fn_80101820(&c->tf);
    Set(c->eye, c->pos);
    {
        f32 k = c->o174.x;
        c->eye.x = k * c->tf.x + c->eye.x;
        c->eye.y = k * c->tf.y + c->eye.y;
        c->eye.z = k * c->tf.z + c->eye.z;
    }
    {
        f32 k = c->o174.y;
        c->eye.x = k * c->ts.x + c->eye.x;
        c->eye.y = k * c->ts.y + c->eye.y;
        c->eye.z = k * c->ts.z + c->eye.z;
    }
    {
        f32 k = c->o174.z;
        c->eye.x = k * upx + c->eye.x;
        c->eye.y = k * upy + c->eye.y;
        c->eye.z = k * upz + c->eye.z;
    }
    Set(pivot, c->pos);
    {
        f32 k = c->o168.x;
        pivot.x = k * c->tf.x + pivot.x;
        pivot.y = k * c->tf.y + pivot.y;
        pivot.z = k * c->tf.z + pivot.z;
    }
    {
        f32 k = c->o168.y;
        pivot.x = k * c->ts.x + pivot.x;
        pivot.y = k * c->ts.y + pivot.y;
        pivot.z = k * c->ts.z + pivot.z;
    }
    {
        f32 k = c->o168.z;
        pivot.x = k * upx + pivot.x;
        pivot.y = k * upy + pivot.y;
        pivot.z = k * upz + pivot.z;
    }
    fn_8025DE7C(&c->f160, lbl_802F2924[c->idx], lbl_8036695C, dt, lbl_8036698C);
    c->eye.x = c->eye.x - pivot.x;
    c->eye.y = c->eye.y - pivot.y;
    c->eye.z = c->eye.z - pivot.z;
    {
        f32 k = c->f160;
        c->eye.x = c->eye.x * k;
        c->eye.y = c->eye.y * k;
        c->eye.z = c->eye.z * k;
    }
    c->eye.x = c->eye.x + pivot.x;
    c->eye.y = c->eye.y + pivot.y;
    c->eye.z = c->eye.z + pivot.z;
    c->fwd.x = pivot.x - c->eye.x;
    c->fwd.y = pivot.y - c->eye.y;
    c->fwd.z = pivot.z - c->eye.z;
    fn_80101820(&c->fwd);
    fn_8003723C(&c->side, &c->fwd, &c->up);
    fn_80101820(&c->side);
    fn_8003723C(&c->up, &c->side, &c->fwd);
    fn_80101820(&c->up);
    if (lbl_80359748 == 3 && (f32)__fabs(lbl_8035A268) < lbl_80366958 && (f32)__fabs(lbl_8035A270) < lbl_80366958 &&
        lbl_8035A244 == 0 && lbl_8035A248 == 0 && lbl_8035A238 == 0 && lbl_8035B6EC == 0 && lbl_8035B6E8 == 0) {
        Set(t, c->prev);
        {
            f32 k = -*c->bc;
            t.x = k * c->tf.x + t.x;
            t.y = k * c->tf.y + t.y;
            t.z = k * c->tf.z + t.z;
        }
        t.x = c->pos.x - t.x;
        t.y = c->pos.y - t.y;
        t.z = c->pos.z - t.z;
        t.z = lbl_80366950;
        fn_80101820(&t);
        c->tf.x = t.x;
        c->tf.y = t.y;
    }
    Set(lbl_80357AF8, c->fwd);
    Set(lbl_80357B10, c->side);
    Set(lbl_80357AEC, c->up);
    c->f184 = lbl_80366950;
    c->f180 = lbl_80366950;
    fn_8025DE7C(&c->yaw, lbl_8035A268, *c->rate, dt, lbl_8036698C);
    if (*c->mode != 2) {
        fn_8025DE7C(&c->pitch, -lbl_8035A270, *c->rate, dt, lbl_8036698C);
    } else {
        fn_8025DE7C(&c->pitch, lbl_8035A270, *c->rate, dt, lbl_8036698C);
    }
    if (lbl_80359748 == 3) {
        fn_80101414(&c->fwd, &c->side, -c->f118);
        fn_80101414(&c->up, &c->side, -c->f118);
        if (lbl_8035A238 != 0) {
            Set(s, c->side);
            Set(f, c->fwd);
            f.z = lbl_80366950;
            fn_80101820(&f);
            r.x = c->eye.x - cur.x;
            r.y = c->eye.y - cur.y;
            r.z = c->eye.z - cur.z;
            fn_80101414(&c->up, &f, lbl_80366990 * -c->yaw);
            fn_80101414(&c->side, &f, lbl_80366990 * -c->yaw);
            fn_80101414(&c->up, &s, lbl_8036697C * -c->pitch);
            fn_80101414(&c->fwd, &s, lbl_8036697C * -c->pitch);
            fn_80101414(&r, &s, lbl_8036697C * -c->pitch);
            fn_80101414(&r, &c->fwd, lbl_80366990 * -c->yaw);
            c->eye.x = r.x + cur.x;
            c->eye.y = r.y + cur.y;
            c->eye.z = r.z + cur.z;
        } else {
            f32 k = -(lbl_80366994 * c->pitch);
            if (c->d8 > lbl_80366994) c->d8 = lbl_80366994;
            else if (c->d8 < lbl_80366998) c->d8 = lbl_80366998;
            k = k + c->d8;
            if (k > lbl_80366994) k = lbl_80366994;
            else if (k < lbl_80366998) k = lbl_80366998;
            k = k - c->f118;
            fn_80101414(&c->fwd, &c->side, k);
            fn_80101414(&c->up, &c->side, k);
            r2.x = c->eye.x - pivot.x;
            r2.y = c->eye.y - pivot.y;
            r2.z = c->eye.z - pivot.z;
            fn_80101414(&r2, &c->side, k);
            c->eye.x = r2.x + pivot.x;
            c->eye.y = r2.y + pivot.y;
            c->eye.z = r2.z + pivot.z;
        }
    } else if (lbl_80359748 == 1 || lbl_80359748 == 5) {
        if (lbl_80359748 == 1) {
            fn_80101414(&c->up, &lbl_80357E90, -c->yaw);
            fn_80101414(&c->fwd, &lbl_80357E90, -c->yaw);
            fn_80101414(&c->side, &lbl_80357E90, -c->yaw);
            r3.x = c->eye.x - pivot.x;
            r3.y = c->eye.y - pivot.y;
            r3.z = c->eye.z - pivot.z;
            if (lbl_8035B6E0 == 0) fn_80101414(&r3, &lbl_80357E90, -c->yaw);
            fn_80101414(&r3, &c->side, lbl_8036699C * (lbl_803669A0 * c->f180 + (c->pitch + c->f184)));
            c->eye.x = r3.x + pivot.x;
            c->eye.y = r3.y + pivot.y;
            c->eye.z = r3.z + pivot.z;
        }
        if (lbl_80359748 == 5) {
            f32 k = lbl_803669A4 * (lbl_803669A0 * c->f180 + (c->pitch + c->f184));
            f32 cx, cy, cz;
            if (k < lbl_80366950) k = k * lbl_803669A8;
            cx = lbl_803669AC * c->tf.x + c->eye.x;
            cy = lbl_803669AC * c->tf.y + c->eye.y;
            cz = lbl_803669AC * c->tf.z + c->eye.z;
            r4.x = c->eye.x - cx;
            r4.y = c->eye.y - cy;
            r4.z = c->eye.z - cz;
            fn_80101414(&r4, &c->side, k);
            c->eye.x = r4.x + cx;
            c->eye.y = r4.y + cy;
            c->eye.z = r4.z + cz;
        }
        fn_80101414(&c->fwd, &c->side, -(c->f118 + (c->f180 + (c->pitch + c->f184))));
        fn_80101414(&c->up, &c->side, -(c->f118 + (c->f180 + (c->pitch + c->f184))));
        fn_80101414(&c->fwd, &lbl_80357E90, lbl_803669B0);
        fn_80101414(&c->side, &lbl_80357E90, lbl_803669B0);
        fn_80101414(&c->up, &lbl_80357E90, lbl_803669B0);
    }
    if (lbl_8035B6E0 != 0 && (f32)__fabs(c->yaw) < lbl_803669A0) lbl_8035B6E0 = 0;
    dir.x = c->eye.x - pivot.x;
    dir.y = c->eye.y - pivot.y;
    dir.z = c->eye.z - pivot.z;
    len = fn_80101664(&dir);
    Set(end, dir);
    {
        f32 k = len + lbl_80366958;
        end.x = end.x * k;
        end.y = end.y * k;
        end.z = end.z * k;
    }
    end.x = end.x + pivot.x;
    end.y = end.y + pivot.y;
    end.z = end.z + pivot.z;
    hit = fn_80264E0C(&pivot, &end, &o1, &o2, &hitf, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2);
    if (hit != 0) {
        fn_8025DE7C(&c->f164, hitf, lbl_803669B4, dt, lbl_8036698C);
    } else {
        fn_8025DE7C(&c->f164, lbl_80366954, lbl_803669B8, dt, lbl_8036698C);
    }
    {
        f32 k = c->f164 * (len + lbl_80366958) - lbl_80366958;
        if (k < lbl_803669BC) k = lbl_803669BC;
        c->eye.x = k * dir.x + pivot.x;
        c->eye.y = k * dir.y + pivot.y;
        c->eye.z = k * dir.z + pivot.z;
    }
    if (lbl_80359748 == 3 && hit != 0 && hitf < lbl_803669BC && lbl_8035A238 == 0) {
        f32 k = lbl_803669AC * (lbl_803669BC - hitf);
        c->eye.x = k * c->up.x + c->eye.x;
        c->eye.y = k * c->up.y + c->eye.y;
        c->eye.z = k * c->up.z + c->eye.z;
    }
    fn_8026102C(c);
    fn_80256F8C(c, dt);
    if (!lbl_8035B6FC) {
        lbl_8035B6F8 = 0;
        lbl_8035B6FC = 1;
    }
    if (*(s32 *)((u8 *)act + 0x254) != 0) {
        lbl_8035B6F8 = 1;
    } else if (lbl_8035B6F8 == 1) {
        lbl_8035B6F8 = 0;
    }
    Set(lbl_80357B04, c->fwd);
    Set(lbl_80357B1C, c->eye);
}


} /* extern "C" */
