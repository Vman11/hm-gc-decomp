#include "common.h"

extern "C" {

struct V6C { f32 x; f32 y; f32 z; };
struct M6C { u8 pad[0x28]; f32 f28; f32 f2c; f32 f30; };
struct H6C { u8 pad[0x78]; M6C *f78; };
struct G6C { u8 pad[0x9c]; H6C *f9c; };
struct O6C { u8 pad[0x428]; H6C *f428; u8 pad42c[0x6dc - 0x42c]; f32 f6dc; f32 f6e0; f32 f6e4; u8 pad6e8[0xc]; f32 f6f4; f32 f6f8; f32 f6fc; };
struct P6C { u8 pad[0xe0]; G6C *fe0; u8 pade4[0x118 - 0xe4]; O6C *f118; u8 pad11c[0x1a0 - 0x11c]; f32 *f1a0; f32 *f1a4; s32 f1a8; u8 pad1ac[0x1c4 - 0x1ac]; s32 f1c4; s32 f1c8; s32 f1cc; V6C v1d0; V6C v1dc; };
void fn_80107F3C(M6C *, V6C *);
void fn_80241140(P6C *, s32);
void fn_802494A4(P6C *, s32);
extern f32 lbl_8035F0C0;
extern f32 lbl_8035F1C8;
extern f64 lbl_8035F250;
extern f64 lbl_8035F258;

inline f32 Sqrt6C(f32 x) {
    if (x > lbl_8035F0C0) {
        const f64 _half = lbl_8035F250;
        const f64 _three = lbl_8035F258;
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

inline f32 MagF6C(f32 x, f32 y, f32 z) {
    return Sqrt6C(__fmadds(z, z, __fmadds(x, x, y * y)));
}

inline f32 Mag6C(V6C *v) {
    return Sqrt6C(v->x * v->x + v->y * v->y + v->z * v->z);
}

void fn_8006CD00(P6C *p, s32 a, s32 mode, s32 b) {
    M6C *m;
    f32 sx, sy, sz;
    f32 px, py, pz;
    p->f1c4 = a;
    p->f1c8 = b;
    p->f1cc = 0;
    m = p->fe0->f9c->f78;
    if (m) {
        sx = m->f28;
        sy = m->f2c;
        sz = m->f30;
    } else {
        sz = sy = sx = lbl_8035F1C8;
    }
    px = p->f118->f6dc;
    py = p->f118->f6e0;
    pz = p->f118->f6e4;
    switch (mode) {
    case 0:
        {
            f32 c = *p->f1a0;
            p->v1d0.x = c; p->v1d0.y = c; p->v1d0.z = c;
        }
        p->v1dc.x = px; p->v1dc.y = py; p->v1dc.z = pz;
        break;
    case 1:
        p->v1d0.x = px; p->v1d0.y = py; p->v1d0.z = pz;
        if (p->f1c4) {
            p->f1cc = p->f1c8;
            {
                f32 c = *p->f1a0;
                p->v1dc.x = c; p->v1dc.y = c; p->v1dc.z = c;
            }
        } else {
            p->f1cc = p->f1c8;
            {
                f32 c = *p->f1a4;
                p->v1dc.x = c; p->v1dc.y = c; p->v1dc.z = c;
            }
        }
        break;
    case 2:
        {
            f32 c = *p->f1a4;
            p->v1d0.x = c; p->v1d0.y = c; p->v1d0.z = c;
        }
        p->v1dc.x = px; p->v1dc.y = py; p->v1dc.z = pz;
        break;
    }
    if (p->f1cc == 0 && ((p->f1c4 && MagF6C(sx, sy, sz) >= Mag6C(&p->v1d0)) || (!p->f1c4 && MagF6C(sx, sy, sz) <= Mag6C(&p->v1d0)))) return;
    p->f1a8 = 1;
    if (p->f1c8 && p->f1cc) {
        V6C t = p->v1dc;
        V6C u;
        M6C *m2 = p->fe0->f9c->f78;
        if (m2) fn_80107F3C(m2, &t);
        {
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
    if (a) {
        fn_80241140(p, 9);
    } else {
        fn_80241140(p, 1);
    }
    fn_802494A4(p, 0x18);
}

}
