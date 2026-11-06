#include "common.h"

extern "C" {

struct V6C { f32 x; f32 y; f32 z; };
struct M6C { u8 pad[0x28]; f32 f28; f32 f2c; f32 f30; };
struct HB6C { u32 f0; u8 pad4[0x20]; f32 f24; u8 pad28[0x68 - 0x28]; };
struct H6C : HB6C {
    virtual void v0(); virtual void v1(); virtual void Update();
    u8 pad6c[0x78 - 0x6c]; M6C *f78;
};
struct G6C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void GetPos(V6C *, s32, s32, s32, s32);
    virtual void SetPos(V6C *, s32, s32, s32, s32);
    u8 pad4[0x9c - 4]; H6C *f9c;
};
struct O6C { u8 pad[0x428]; H6C *f428; u8 pad42c[0x6dc - 0x42c]; f32 f6dc; f32 f6e0; f32 f6e4; u8 pad6e8[0xc]; f32 f6f4; f32 f6f8; f32 f6fc; };
struct P6C { u8 pad[0xe0]; G6C *fe0; u8 pade4[0x118 - 0xe4]; O6C *f118; u8 pad11c[0x19c - 0x11c]; f32 *f19c; f32 *f1a0; f32 *f1a4; s32 f1a8; u8 pad1ac[0x1c4 - 0x1ac]; s32 f1c4; s32 f1c8; s32 f1cc; V6C v1d0; V6C v1dc; };
void fn_80107F3C(M6C *, V6C *);
void fn_80241140(P6C *, s32);
void fn_802494A4(P6C *, s32);
extern f32 lbl_8035F0C0;
extern f32 lbl_8035F1C8;
extern f64 lbl_8035F250;
extern f64 lbl_8035F258;

inline f32 Sqrt6C(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    y = x * g;
    return y;
}

inline f32 Mag6C(V6C *v) {
    f32 m = v->x * v->x + v->y * v->y + v->z * v->z;
    f32 r = m;
    if (m > lbl_8035F0C0) r = Sqrt6C(m);
    return r;
}

inline void Apply6C(P6C *p, V6C t) {
    M6C *m2 = p->fe0->f9c->f78;
    if (m2) fn_80107F3C(m2, &t);
    {
        V6C u;
        O6C *o = p->f118;
        f32 rz = o->f6e4 / o->f6fc;
        f32 ry = o->f6e0 / o->f6f8;
        f32 rx = o->f6dc / o->f6f4;
        u.x = t.x / rx;
        u.y = t.y / ry;
        u.z = t.z / rz;
        if (o->f428->f78) fn_80107F3C(o->f428->f78, &u);
    }
}

void fn_8006C748(P6C *p, f32 dt, s32 b) {
    V6C s;
    V6C d;
    f32 k;
    f32 y0;
    H6C *h = p->fe0->f9c;
    M6C *m = h->f78;
    if (m) {
        s.x = m->f28;
        s.y = m->f2c;
        s.z = m->f30;
    } else {
        f32 c = lbl_8035F1C8;
        s.x = c;
        s.y = c;
        s.z = c;
    }
    if (h->f0 & 4) h->Update();
    k = dt / *p->f19c;
    y0 = h->f24;
    d.x = k;
    d.y = k;
    d.z = k;
    if (p->f1c4) {
        d.x = -k;
        d.y = d.x;
        d.z = d.x;
    }
    s.x -= d.x;
    s.y -= d.y;
    s.z -= d.z;
    if (b || (!p->f1c4 && Mag6C(&s) <= Mag6C(&p->v1d0)) || (p->f1c4 && Mag6C(&s) >= Mag6C(&p->v1d0))) {
        p->f1a8 = 0;
        if (p->f1c8 && !p->f1cc) {
            Apply6C(p, p->v1dc);
        } else if (!p->f1c8) {
            Apply6C(p, p->v1d0);
        }
        if (!b) fn_802494A4(p, 0);
    } else {
        H6C *h2;
        f32 y1;
        V6C w;
        Apply6C(p, s);
        h2 = p->fe0->f9c;
        if (h2->f0 & 4) h2->Update();
        y1 = h2->f24;
        p->fe0->GetPos(&w, 0, 0, 0, 0);
        w.z -= y0 - y1;
        p->fe0->SetPos(&w, 0, 0, 0, 0);
    }
}

}
