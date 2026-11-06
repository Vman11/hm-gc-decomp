#include "common.h"

extern "C" {


struct V3 { f32 x, y, z; };
struct V4 { f32 x, y, z, w; };

struct Rad { u8 pad[0xc]; f32 h; };
struct Elem { u8 pad[0x34]; };
struct Sub { u8 pad[0x28]; Elem e; };
struct Skel { u8 pad[0x1c]; u32 n; u8 pad20[4]; Sub *sub; Elem *arr; };
struct Act { u8 pad[0xa8]; Skel *sk; };
struct Mdl { u32 flags; u8 pad4[0x2c]; void *f30; u8 pad34[0x44]; void *f78; };
struct Stt { u8 pad[0xd8]; s32 fd8; };
struct Q { u8 pad[0x284]; s32 f284; u8 pad288[8]; f32 f290; };
struct GP { u8 pad[0x14]; f32 f14; };

class Other { public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void getXf(V3 *pos, V3 *fwd, V3 *up, V3 *right, s32 a);
    u8 pad4[0x1a8 - 4];
    f32 f1a8;
    f32 f1ac;
    u8 pad1b0[0x258 - 0x1b0];
    Rad *rad;
};

struct Obj {
    u8 pad0[0x2c];
    V3 f2c;
    u8 pad38[0xc];
    V3 f44;
    u8 pad50[0xa0 - 0x50];
    Act *act;
    u8 padA4[0x18c - 0xa4];
    Other *other;
    u8 pad190[0x20c - 0x190];
    Stt *st;
    u8 pad210[0x258 - 0x210];
    Q *q;
    u8 pad25c[0x26c - 0x25c];
    u8 f26c[0x448 - 0x26c];
    void *f448;
    void *f44c;
    Mdl *mdl;
    u8 pad454[0x5e8 - 0x454];
    s32 f5e8;
    s32 f5ec;
    u8 pad5f0[0x610 - 0x5f0];
    V3 f610;
};

extern u32 lbl_8035F3E8;
extern f32 lbl_80359FC0;
extern void *lbl_8035B65C;
extern GP *lbl_8035B488;
extern V3 lbl_80357B10;
extern V3 lbl_80357E90;

f32 fn_80101590(V3 *a, V3 *b);
void fn_802540E4(void *g, void *o, V3 *pos, V3 *ax, V3 *c, V3 *s, s32 k);
void fn_80107244(void *p, V3 *out);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, s32 *e, s32 *f, s32 *g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);
s32 fn_800FF778(V4 *pl, V3 *b, V3 *c, V3 *out, f32 *t);
f64 fn_800F045C(f64);
f64 fn_800F049C(f64);
f64 fn_800F03E4(f64);
void fn_80107F3C(void *o, V3 *s);
void fn_80107370(void *o, V3 *s);
void fn_80107694(void *m, V3 *a, V3 *b, V3 *c, s32 k);
void fn_80107B04(void *o, void *m, s32 k);
void fn_80190C98(void *o);

inline bool Busy(Q *q) { return q->f284 != 0 || q->f290 != 0.0f; }
inline f32 RadH(Rad *r) { return r ? r->h : 2.5f; }
inline Elem *GetElem(Skel *s) {
    if (s->n > 1) return &s->sub->e;
    return &s->arr[1 - s->n];
}
inline f32 Fabsf(f32 x) { return (f32)__fabs(x); }
inline f32 SAcos(f32 x) {
    if (Fabsf(x) <= 1.0) return fn_800F045C(x);
    if (x > 0.0f) return 0.0f;
    return 3.1415927f;
}
inline f32 Sq(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = 0.5 * g * (3.0 - g * g * x);
    g = 0.5 * g * (3.0 - g * g * x);
    g = 0.5 * g * (3.0 - g * g * x);
    y = x * g;
    return y;
}

void fn_800730F4(Obj *o) {
    V3 pos, v, w, e0, d4, hit, nrm, ax, base;
    V3 sc, up;
    s32 col;
    s32 r;
    Other *p = o->other;
    if (p && !Busy(o->q)) {
        p->getXf(&pos, 0, 0, 0, 0);
        if (RadH(p->rad) > 0.0f) {
            pos.z += RadH(p->rad);
            f32 a = p->f1a8;
            f32 b = p->f1ac;
            f32 s = 0.00075f * -a;
            pos.x += s * lbl_80357B10.x;
            pos.y += s * lbl_80357B10.y;
            pos.z += s * lbl_80357B10.z;
            if (fn_80101590(&pos, &o->f44) < 1.0f) o->other = 0;
            v.x = 0.0015 * b;
            v.y = 1.0f;
            v.z = 0.25f;
            fn_802540E4(lbl_8035B65C, o->f448, &pos, &lbl_80357B10, &lbl_80357E90, &v, 0);
            w.x = 0.0015 * (a - b);
            w.y = 1.0f;
            w.z = 0.25f;
            s = 0.0015f * b;
            pos.x += s * lbl_80357B10.x;
            pos.y += s * lbl_80357B10.y;
            pos.z += s * lbl_80357B10.z;
            fn_802540E4(lbl_8035B65C, o->f44c, &pos, &lbl_80357B10, &lbl_80357E90, &w, 0);
        }
    }
    if (o->f5e8 == 0 || o->f5ec == 0) {
        o->mdl->flags &= ~0x800;
        return;
    }
    o->mdl->flags |= lbl_8035F3E8;
    fn_80107244(GetElem(o->act->sk), &base);
    base.z -= 0.2f;
    if (o->st->fd8 == 0) {
        V3 s0, s1;
        V4 pl;
        f32 t;
        hit = base;
        nrm = o->f2c;
        e0.x = base.x + 1.0f * o->f610.x;
        e0.y = base.y + 1.0f * o->f610.y;
        e0.z = base.z + 1.0f * o->f610.z;
        d4.x = base.x + -5.0f * o->f610.x;
        d4.y = base.y + -5.0f * o->f610.y;
        d4.z = base.z + -5.0f * o->f610.z;
        s0.x = base.x + 1.0f * nrm.x;
        s0.y = base.y + 1.0f * nrm.y;
        s0.z = base.z + 1.0f * nrm.z;
        s1.x = base.x + -5.0f * nrm.x;
        s1.y = base.y + -5.0f * nrm.y;
        s1.z = base.z + -5.0f * nrm.z;
        fn_80264E0C(&s0, &s1, &hit, &nrm, 0, 0, &col, 0, 0, 0, 0, 0, 0, 0, 1);
        pl.x = nrm.x;
        pl.y = nrm.y;
        pl.z = nrm.z;
        pl.w = -(hit.x * nrm.x + hit.y * nrm.y + hit.z * nrm.z);
        r = fn_800FF778(&pl, &e0, &d4, &hit, &t);
    } else {
        V3 s0, s1;
        V4 pl;
        f32 t;
        e0.x = base.x + 1.0f * o->f610.x;
        e0.y = base.y + 1.0f * o->f610.y;
        e0.z = base.z + 1.0f * o->f610.z;
        d4.x = o->f44.x + -100.0f * o->f610.x;
        d4.y = o->f44.y + -100.0f * o->f610.y;
        d4.z = o->f44.z + -100.0f * o->f610.z;
        s0.x = base.x + 1.0f * o->f2c.x;
        s0.y = base.y + 1.0f * o->f2c.y;
        s0.z = base.z + 1.0f * o->f2c.z;
        s1.x = base.x + -100.0f * o->f2c.x;
        s1.y = base.y + -100.0f * o->f2c.y;
        s1.z = base.z + -100.0f * o->f2c.z;
        fn_80264E0C(&s0, &s1, &hit, &nrm, 0, 0, &col, 0, 0, 0, 0, 0, 0, 0, 1);
        pl.x = nrm.x;
        pl.y = nrm.y;
        pl.z = nrm.z;
        pl.w = -(hit.x * nrm.x + hit.y * nrm.y + hit.z * nrm.z);
        r = fn_800FF778(&pl, &e0, &d4, &hit, &t);
        if (r && hit.z > lbl_80359FC0) {
            f32 dz = hit.z - lbl_80359FC0;
            if (Fabsf(dz) > 0.0f) {
                f32 k = fn_800F049C(-8.0f * lbl_8035B488->f14);
                lbl_80359FC0 += (1.0f - k) * dz;
            }
        }
    }
    if (r != 0) {
        up.x = 0.0f; up.y = 0.0f; up.z = 1.0f;
        f32 ang = SAcos(up.x * nrm.x + up.y * nrm.y + up.z * nrm.z);
        if (ang < 0.7853981634) {
            f32 cx = up.y * o->f610.z - up.z * o->f610.y;
            f32 cy = up.z * o->f610.x - up.x * o->f610.z;
            f32 cz = up.x * o->f610.y - up.y * o->f610.x;
            f32 l = cx * cx + cy * cy + cz * cz;
            if (l > 0.0f) l = Sq(l);
            if (0.0f == l) {
                cx = 1.0f; cy = 0.0f; cz = 0.0f;
            } else {
                f32 inv = 1.0f / l;
                cx *= inv; cy *= inv; cz *= inv;
            }
            ax.x = up.y * cz - up.z * cy;
            ax.y = up.z * cx - up.x * cz;
            ax.z = up.x * cy - up.y * cx;
            l = ax.x * ax.x + ax.y * ax.y + ax.z * ax.z;
            if (l > 0.0f) l = Sq(l);
            if (0.0f == l) {
                ax.x = 1.0f; ax.y = 0.0f; ax.z = 0.0f;
            } else {
                f32 inv = 1.0f / l;
                ax.x *= inv; ax.y *= inv; ax.z *= inv;
            }
        } else {
            ax.x = 0.0f; ax.y = 0.0f; ax.z = 1.0f;
        }
        f32 c = SAcos(nrm.x * o->f610.x + nrm.y * o->f610.y + nrm.z * o->f610.z);
        f32 f = (f32)fn_800F03E4(c > 1.0 ? 1.0f : c);
        sc.x = 1.0f;
        sc.y = 1.0f + 0.5f * f + f / 6.0;
        sc.z = 1.0f;
        if (o->mdl->f78) fn_80107F3C(o->mdl->f78, &sc);
        V3 dir;
        dir.x = 0.0f; dir.y = 1.0f; dir.z = 0.0f;
        if (o->mdl->f30) fn_80107370(o->mdl->f30, &dir);
        f32 m = f / 3.0;
        hit.x += m * dir.x;
        hit.y += m * dir.y;
        hit.z += m * dir.z;
        fn_80107694(o->f26c, &nrm, &ax, &hit, 0);
        Mdl *md = o->mdl;
        if (md->f30) {
            fn_80107B04(md->f30, o->f26c, 0);
            fn_80190C98(md);
        }
    }
    o->f5ec = 0;
}


}
