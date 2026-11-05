#include "common.h"
extern "C" {
struct Vec { f32 x, y, z; };
struct Y { u8 pad[16]; void *f16; u8 pad20[12]; u32 f32; };
struct X { u32 f0; u8 pad[44]; Y *f48; };
struct E { u32 f0, f4, f8; X *f12; Vec c; int f28; f32 sc; u8 pad[24 - 36 + 12]; };
struct FT { u8 pad[12]; void (*setPos)(void *, Vec *); u8 pad16[304 - 16]; void (*getPos)(void *, Vec *); };
struct G { u8 pad[20]; f32 dt; };
extern G *lbl_8035B488;
extern u8 lbl_803286D0[];
extern f32 lbl_8035B99C;
extern f32 lbl_8035B9D8;
extern f32 lbl_8035B9E0;
extern u32 lbl_8035B964;
extern u32 lbl_8035B9A0;
void fn_80190C98(X *);
void fn_8002C150(E *ep) {
    u32 i = 0;
    E *e = ep;
    f32 dt = lbl_8035B488->dt;
    FT *ft = (FT *)lbl_803286D0;
    for (; i < 6; i++, e++) {
        if (!e->f12) continue;
        if (e->f28) {
            Vec v;
            f32 inv;
            if (e->f12->f48) ft->getPos(e->f12->f48->f16, &v);
            else { v.x = lbl_8035B99C; v.y = lbl_8035B99C; v.z = lbl_8035B99C; }
            v.x -= e->c.x; v.y -= e->c.y; v.z -= e->c.z;
            inv = lbl_8035B9D8 / e->sc;
            v.x *= inv; v.y *= inv; v.z *= inv;
            e->sc -= dt;
            v.x *= e->sc; v.y *= e->sc; v.z *= e->sc;
            if (e->sc < lbl_8035B99C) { v.x = lbl_8035B99C; v.y = lbl_8035B99C; v.z = lbl_8035B99C; }
            v.x += e->c.x; v.y += e->c.y; v.z += e->c.z;
            {
                X *x = e->f12;
                Y *y = x->f48;
                if (y) {
                    ft->setPos(y->f16, &v);
                    y->f32 |= lbl_8035B964;
                    fn_80190C98(x);
                }
            }
            e->f12->f0 |= lbl_8035B9A0;
            if (e->sc < lbl_8035B9E0) {
                e->f28 = 0;
                e->f12->f0 &= ~0x800;
            }
        } else {
            e->f12->f0 &= ~0x800;
        }
    }
}
}
