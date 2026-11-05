// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Sph { f32 x, y, z, r; };

class Node { public:
    u32 f0; u8 pad4[0x14]; f32 x, y, z, r; u8 pad28[0x10]; struct Lk *f38; u8 pad3c[0x68 - 0x3c];
    virtual void n0(); virtual void n1(); virtual void upd(); virtual void n3(); virtual void n4(); virtual void n5();
    virtual void n6(); virtual void n7(); virtual void n8(); virtual void n9(); virtual void n10();
    virtual void tick(f32 dt); };
struct Scl { u8 pad[0x28]; f32 x, y, z; };
class Node2 : public Node { public: u8 pad6c[0x78 - 0x6c]; Scl *f78; };
struct Lk { u32 f0; u8 pad4[0x10]; Lk *next; u8 pad18[4]; f32 x, y, z; };

class Hit { public:
    virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5();
    virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9(); virtual void h10(); virtual void h11();
    virtual void h12(); virtual void h13(); virtual void h14(); virtual void h15(); virtual void h16(); virtual void h17();
    virtual void h18(); virtual void h19(); virtual void h20(); virtual void h21(); virtual void h22(); virtual void h23();
    virtual void h24(); virtual void h25(); virtual void h26(); virtual void h27(); virtual void h28(); virtual void h29();
    virtual void h30(); virtual void h31(); virtual void h32();
    virtual void msg(void *id, void *from, s32 a, s32 b, s32 c);
};

struct Col { u8 pad[0x3c]; Hit *h; };
struct M30 { u8 pad[0x10]; void *f10; u8 pad14[0xc]; u32 f20; };
struct Grp { u8 pad[0x30]; M30 *f30; };
struct Tint { u8 pad[8]; u8 r, g, b, a; };
struct TL { u8 pad[0x1c]; u32 n; Tint **e; };
struct TH { u8 pad[0x90]; TL *l; };
struct FT { void *f0, *f4, *f8; void (*fc)(void *, V3 *); };

class Obj;
struct Tgt { u8 pad[0x9c]; Node2 *n; };

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
    u8 pad20[0x24];
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
    V3 f284;
    f32 *range;
    u8 pad294[0x2c0 - 0x294];
    TH *f2c0;
    s32 f2c4;
    u8 pad2c8[0x2d8 - 0x2c8];
    V3 f2d8;
    Node2 *f2e4;
    Node2 *f2e8;
    Grp *f2ec;
    Node2 *f2f0[2];
    u8 pad2f8[0x348 - 0x2f8];
    f32 f348;
    u8 pad34c[8];
    f32 f354;
    u8 pad358[4];
    f32 f35c;
    f32 *f360;
    u8 pad364[0x38c - 0x364];
    s32 f38c;
    f32 *f390;
};

extern u32 lbl_8035FE70;
extern f32 lbl_8035FE74;
extern f32 lbl_8035FE78;
extern f32 lbl_8035FE7C;
extern f64 lbl_8035FE80;
extern f64 lbl_8035FE88;
extern f32 lbl_8035FE50;
extern f32 lbl_8035FE90;
extern f32 lbl_8035FE94;
extern Obj *lbl_8035A1A8;
extern FT lbl_803286D0;
extern u8 lbl_80298E80[];

void fn_8005E354(Obj *o, f32 dt);
void fn_8005E6BC(Obj *o, f32 dt);
void fn_8005E00C(Obj *o, f32 dt);
void fn_80230928(Obj *o, f32 dt);
void fn_80238618(Obj *o, f32 dt);
void fn_80107F3C(void *o, V3 *s);
void fn_80190C98(void *o);
void *fn_8017BC48(Lk *l, Node2 *n);
void fn_80104004(void *m, V3 *a, V3 *b);
f32 fn_80101590(V3 *a, V3 *b);
void fn_80101820(V3 *v);
void fn_80100F24(V3 *a, V3 *b);
void fn_80100CF4(Sph *s);
f64 fn_800F049C(f64);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, s32 *e, s32 *f, Col **g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);

inline void GetPos(Node *n, V3 *v) {
    if (n->f0 & 4) n->upd();
    v->x = n->x; v->y = n->y; v->z = n->z;
}
inline f32 Ratio(f32 a, f32 b) { if (a < b) return a / b; return lbl_8035FE74; }
inline f32 Sq(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035FE80 * g * (lbl_8035FE88 - g * g * x);
    g = lbl_8035FE80 * g * (lbl_8035FE88 - g * g * x);
    g = lbl_8035FE80 * g * (lbl_8035FE88 - g * g * x);
    y = x * g;
    return y;
}

void fn_80086F30(Obj *o, f32 dt) {
    Node *n;
    Node2 *tn;
    M30 *m;
    Grp *g;
    if (o->on != 0) {
        fn_8005E354(o, dt);
        if (o->f2e4) o->f2e4->tick(dt);
        if (o->f2e8) o->f2e8->tick(dt);
        for (u32 i = 0; i < 2; i++) {
            if (o->f2f0[i]) o->f2f0[i]->tick(dt);
        }
        fn_8005E6BC(o, dt);
        f32 r;
        if (o->f348 < o->f35c) r = o->f348 / o->f35c;
        else r = lbl_8035FE74;
        if (r < lbl_8035FE78) r = lbl_8035FE78;
        o->f2d8.x = o->f354 * r;
        o->f2d8.y = o->f354 * r;
        o->f2d8.z = o->f354 * r;
        if (o->f2e4 && o->f2e4->f78) fn_80107F3C(o->f2e4->f78, &o->f2d8);
        if (o->f2e8 && o->f2e8->f78) fn_80107F3C(o->f2e8->f78, &o->f2d8);
        o->f348 += dt;
        g = o->f2ec;
        if (g && lbl_8035A1A8 == o) {
            m = g->f30;
            if (m) {
                lbl_803286D0.fc(m->f10, &o->f44);
                m->f20 |= lbl_8035FE70;
                fn_80190C98(g);
            }
        }
        V3 pos, fwd, up, right;
        V3 b, t, d, q, hn, hp;
        Sph sp;
        Col *c;
        o->getXf(&pos, &fwd, &up, &right, 0);
        if (o->f2c4 == 0 && o->tgt && (o->tgt->n->f0 & 2)) {
            fn_80238618(o, dt);
            o->life -= dt;
            if (o->life <= lbl_8035FE7C) {
                o->kill(1, &o->f14, 0);
                return;
            }
            n = o->n9c;
            if (n->f0 & 4) n->upd();
            f32 sx = n->x, sy = n->y, sz = n->z;
            tn = o->tgt->n;
            Lk *l = tn->f38;
            while (l && l->f0 != 0) l = l->next;
            if (l && l->f0 == 0) {
                f32 kx, ky, kz;
                f32 lx = l->x, ly = l->y, lz = l->z;
                if (tn->f78) {
                    kx = tn->f78->x; ky = tn->f78->y; kz = tn->f78->z;
                } else {
                    kx = lbl_8035FE74; ky = kx; kz = kx;
                }
                lx *= kx; ly *= ky; lz *= kz;
                t.x = lx; t.y = ly; t.z = lz;
                fn_80104004(fn_8017BC48(l, o->tgt->n), &t, &b);
            } else {
                GetPos(tn, &b);
            }
            d.x = b.x - sx; d.y = b.y - sy; d.z = b.z - sz;
            fn_80101820(&d);
            f32 ex = d.x - fwd.x, ey = d.y - fwd.y, ez = d.z - fwd.z;
            f32 k = lbl_8035FE74 - (f32)fn_800F049C(-*o->f390 * dt);
            fwd.x = k * ex + fwd.x; fwd.y = k * ey + fwd.y; fwd.z = k * ez + fwd.z;
            fn_80101820(&fwd);
            fn_80100F24(&up, &fwd);
            fn_80101820(&up);
            right.x = fwd.y * up.z - fwd.z * up.y;
            right.y = fwd.z * up.x - fwd.x * up.z;
            right.z = fwd.x * up.y - fwd.y * up.x;
            f32 s = o->spd ? *o->spd : lbl_8035FE50;
            f32 vx = fwd.x * s, vy = fwd.y * s, vz = fwd.z * s;
            pos.x = dt * vx + pos.x; pos.y = dt * vy + pos.y; pos.z = dt * vz + pos.z;
            o->setXf(&pos, &fwd, &up, &right, 0);
            f32 len = vx * vx + vy * vy + vz * vz;
            if (len > lbl_8035FE7C) len = Sq(len);
            o->vel.x = vx; o->vel.y = vy; o->vel.z = vz;
            o->speed = len;
            fn_80100CF4(&sp);
            n = o->n9c;
            if (n->f0 & 4) n->upd();
            sp.x = n->x; sp.y = n->y; sp.z = n->z; sp.r = n->r;
            pos.x = sp.r * o->f14.x + sp.x;
            pos.y = sp.r * o->f14.y + sp.y;
            pos.z = sp.r * o->f14.z + sp.z;
            if (fn_80264E0C(&o->f284, &pos, &hp, &hn, 0, 0, &c, 0, 0, 0, 0, 0, 0, 0, 1)) {
                q = hp;
                o->setXf(&q, 0, 0, 0, 0);
                if (c->h) c->h->msg(lbl_80298E80, o, 0, 0, 0);
                o->kill(0, &hn, 0);
                q.x -= sp.r * o->f14.x;
                q.y -= sp.r * o->f14.y;
                q.z -= sp.r * o->f14.z;
                o->setXf(&q, 0, 0, 0, 0);
                return;
            }
            o->f284 = o->f44;
            f32 lim = o->range ? *o->range : lbl_8035FE90;
            if (fn_80101590(&o->f44, &o->f278) > lim) o->kill(1, &o->f14, 0);
        } else {
            fn_80230928(o, dt);
        }
    }
    TH *h = o->f2c0;
    if (h && o->f2c4 != 0 && o->f360) {
        for (u32 i = 0; i < h->l->n; i++) {
            Tint *e = h->l->e[i];
            s32 c = o->f38c;
            e->r = c; e->g = c; e->b = c; e->a = 1;
        }
        o->f38c -= (s32)(lbl_8035FE94 * (dt * *o->f360));
        if (o->f38c < 0) o->f38c = 0;
    }
    fn_8005E6BC(o, dt);
    fn_8005E00C(o, dt);
}

}
