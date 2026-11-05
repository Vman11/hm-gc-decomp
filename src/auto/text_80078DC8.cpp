// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Sph { f32 x, y, z, r; };

class Node { public:
    u32 f0; u8 pad4[0x14]; f32 x, y, z, r; u8 pad28[0x68 - 0x28];
    virtual void n0(); virtual void n1(); virtual void upd(); };

class Hit { public:
    virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5();
    virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9(); virtual void h10(); virtual void h11();
    virtual void h12(); virtual void h13(); virtual void h14(); virtual void h15(); virtual void h16(); virtual void h17();
    virtual void h18(); virtual void h19(); virtual void h20(); virtual void h21(); virtual void h22(); virtual void h23();
    virtual void h24(); virtual void h25(); virtual void h26(); virtual void h27(); virtual void h28(); virtual void h29();
    virtual void h30(); virtual void h31(); virtual void h32();
    virtual void msg(void *id, void *from, s32 a, s32 b, s32 c);
};

struct Col { u8 pad[0x3c]; Hit *h; u8 pad40[0x10]; Col *next; };

class Obj;
struct Tgt { u8 pad[0x9c]; Node *n; };

class Obj { public:
    virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void o4(); virtual void o5();
    virtual void o6(); virtual void o7(); virtual void o8(); virtual void o9(); virtual void o10(); virtual void o11();
    virtual void o12();
    virtual void getXf(V3 *pos, V3 *fwd, V3 *up, V3 *right, s32 a);
    virtual void setXf(V3 *pos, V3 *fwd, V3 *up, V3 *right, s32 a);
    virtual void o15(); virtual void o16(); virtual void o17(); virtual void o18(); virtual void o19(); virtual void o20();
    virtual void o21(); virtual void o22(); virtual void o23(); virtual void o24(); virtual void o25(); virtual void o26();
    virtual void o27(); virtual void o28(); virtual void o29(); virtual void o30(); virtual void o31(); virtual void o32();
    virtual void o33(); virtual void o34(); virtual void o35(); virtual void o36();
    virtual void kill(s32 a, V3 *v, Hit *h);
    u8 pad4[0x10];
    V3 f14;
    u8 pad20[0xc];
    V3 f2c;
    u8 pad38[0xc];
    V3 f44;
    u8 pad50[0x9c - 0x50];
    Node *n9c;
    u8 padA0[0x118 - 0xa0];
    V3 vel;
    u8 pad124[0x154 - 0x124];
    f32 speed;
    u8 pad158[0x18c - 0x158];
    Tgt *tgt;
    u8 pad190[0x268 - 0x190];
    f32 life;
    s32 on;
    u8 pad270[4];
    f32 *spd;
    V3 f278;
    u8 pad284[0x290 - 0x284];
    f32 *range;
    u8 pad294[0x344 - 0x294];
    s32 lock;
    f32 *steer;
    f32 *dist;
    V3 f350;
};

extern f32 lbl_8035F6B8;
extern f64 lbl_8035F6C0;
extern f32 lbl_8035F6C8;
extern f32 lbl_8035F6CC;
extern f32 lbl_8035F6D0;
extern f32 lbl_8035F6D4;
extern f32 lbl_8035F6D8;
extern f32 lbl_8035F6DC;
extern f32 lbl_8035F6E0;
extern f64 lbl_8035F6E8;
extern f64 lbl_8035F6F0;
extern f32 lbl_8035F6F8;
extern V3 lbl_80357E90;
extern u8 lbl_80298480[];

void fn_8005CC4C(Obj *o, f32 dt);
void fn_80238618(Obj *o, f32 dt);
f32 fn_80101590(V3 *a, V3 *b);
void fn_80101820(V3 *v);
void fn_80100F24(V3 *a, V3 *b);
void fn_801012C0(V3 *o, V3 *a, V3 *b, f32 ang);
void fn_80100CF4(Sph *s);
f64 fn_800F045C(f64);
f64 fn_800F049C(f64);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, s32 *e, s32 *f, Col **g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);

inline void GetPos(Node *n, V3 *v) {
    if (n->f0 & 4) n->upd();
    v->x = n->x; v->y = n->y; v->z = n->z;
}
inline f32 Fabsf(f32 x) { return (f32)__fabs(x); }
inline f32 SAcos(f32 x) {
    if (Fabsf(x) <= lbl_8035F6C0) return fn_800F045C(x);
    if (x > lbl_8035F6B8) return lbl_8035F6B8;
    return lbl_8035F6C8;
}
inline f32 Sq(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035F6E8 * g * (lbl_8035F6F0 - g * g * x);
    g = lbl_8035F6E8 * g * (lbl_8035F6F0 - g * g * x);
    g = lbl_8035F6E8 * g * (lbl_8035F6F0 - g * g * x);
    y = x * g;
    return y;
}

void fn_80078DC8(Obj *o, f32 dt) {
    fn_8005CC4C(o, dt);
    if (o->on == 0) return;
    fn_80238618(o, dt);
    o->life -= dt;
    if (o->life <= lbl_8035F6B8) {
        o->kill(1, &o->f14, 0);
        return;
    }
    V3 pos, fwd, up, right;
    V3 a, b, d, t, q, p, hn, hp;
    Sph sp;
    Col *c;
    o->getXf(&pos, &fwd, &up, &right, 0);
    f32 vx = o->vel.x, vy = o->vel.y, vz = o->vel.z;
    if (o->tgt) {
        GetPos(o->n9c, &a);
        GetPos(o->tgt->n, &b);
        if (fn_80101590(&a, &b) < *o->dist) o->lock = 1;
        if (o->lock == 0) {
            d.x = b.x - a.x; d.y = b.y - a.y; d.z = b.z - a.z;
            fn_80101820(&d);
            fwd = d;
            fn_80100F24(&up, &fwd);
            fn_80101820(&up);
            right.x = fwd.y * up.z - fwd.z * up.y;
            right.y = fwd.z * up.x - fwd.x * up.z;
            right.z = fwd.x * up.y - fwd.y * up.x;
            t.x = fwd.x; t.y = fwd.y; t.z = fwd.z;
            fn_80100F24(&t, &o->f2c);
            fn_80101820(&t);
            f32 dp = o->f14.x * t.x + o->f14.y * t.y + o->f14.z * t.z;
            f32 ang = SAcos(dp);
            if (ang > lbl_8035F6CC * dt) {
                f32 cx = o->f14.y * t.z - o->f14.z * t.y;
                f32 cy = o->f14.z * t.x - o->f14.x * t.z;
                f32 cz = o->f14.x * t.y - o->f14.y * t.x;
                f32 r;
                if (cx * o->f2c.x + cy * o->f2c.y + cz * o->f2c.z > lbl_8035F6B8) r = lbl_8035F6D0 * ang;
                else r = -(lbl_8035F6D0 * ang);
                fn_801012C0(&q, &fwd, &up, r);
                fn_80101820(&q);
                f32 ex = q.x - up.x, ey = q.y - up.y, ez = q.z - up.z;
                f32 k = lbl_8035F6D8 - (f32)fn_800F049C(lbl_8035F6D4 * dt);
                up.x = k * ex + up.x; up.y = k * ey + up.y; up.z = k * ez + up.z;
                fn_80101820(&up);
                right.x = fwd.y * up.z - fwd.z * up.y;
                right.y = fwd.z * up.x - fwd.x * up.z;
                right.z = fwd.x * up.y - fwd.y * up.x;
            } else {
                V3 *w = &lbl_80357E90;
                if (Fabsf(fwd.x * w->x + fwd.y * w->y + fwd.z * w->z) < lbl_8035F6DC) {
                    q.x = w->x; q.y = w->y; q.z = w->z;
                    fn_80100F24(&q, &fwd);
                    fn_80101820(&q);
                    f32 ex = q.x - up.x, ey = q.y - up.y, ez = q.z - up.z;
                    f32 k = lbl_8035F6D8 - (f32)fn_800F049C(lbl_8035F6D4 * dt);
                    up.x = k * ex + up.x; up.y = k * ey + up.y; up.z = k * ez + up.z;
                    fn_80101820(&up);
                    right.x = fwd.y * up.z - fwd.z * up.y;
                    right.y = fwd.z * up.x - fwd.x * up.z;
                    right.z = fwd.x * up.y - fwd.y * up.x;
                }
            }
            f32 s = o->spd ? *o->spd : lbl_8035F6E0;
            d.x *= s; d.y *= s; d.z *= s;
            f32 ex = d.x - vx, ey = d.y - vy, ez = d.z - vz;
            f32 k = lbl_8035F6D8 - (f32)fn_800F049C(-*o->steer * dt);
            vx = k * ex + vx; vy = k * ey + vy; vz = k * ez + vz;
            pos.x = dt * vx + pos.x; pos.y = dt * vy + pos.y; pos.z = dt * vz + pos.z;
        } else {
            f32 s = o->spd ? *o->spd : lbl_8035F6E0;
            f32 m = dt * s;
            pos.x = m * o->f14.x + o->f44.x;
            pos.y = m * o->f14.y + o->f44.y;
            pos.z = m * o->f14.z + o->f44.z;
        }
    }
    o->setXf(&pos, &fwd, &up, &right, 0);
    f32 len = vx * vx + vy * vy + vz * vz;
    if (len > lbl_8035F6B8) len = Sq(len);
    o->vel.x = vx; o->vel.y = vy; o->vel.z = vz;
    o->speed = len;
    fn_80100CF4(&sp);
    Node *n = o->n9c;
    if (n->f0 & 4) n->upd();
    sp.x = n->x; sp.y = n->y; sp.z = n->z; sp.r = n->r;
    pos.x = sp.r * o->f14.x + sp.x;
    pos.y = sp.r * o->f14.y + sp.y;
    pos.z = sp.r * o->f14.z + sp.z;
    if (fn_80264E0C(&o->f350, &pos, &hp, &hn, 0, 0, &c, 0, 0, 0, 0, 0, 0, 0, 1)) {
        p = hp;
        o->setXf(&p, 0, 0, 0, 0);
        Hit *h = 0;
        Hit *g;
        while ((g = c->h) == 0 && c->next) c = c->next;
        if (g) {
            h = g;
            g->msg(lbl_80298480, o, 0, 0, 0);
        }
        o->kill(0, &hn, h);
        p.x -= sp.r * o->f14.x;
        p.y -= sp.r * o->f14.y;
        p.z -= sp.r * o->f14.z;
        o->setXf(&p, 0, 0, 0, 0);
    } else {
        o->f350 = pos;
        f32 lim = o->range ? *o->range : lbl_8035F6F8;
        if (fn_80101590(&o->f44, &o->f278) > lim) o->kill(1, &o->f14, 0);
    }
}

} /* extern "C" */
