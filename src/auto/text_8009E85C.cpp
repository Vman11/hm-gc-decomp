// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct G { u8 pad[16]; void *h; u8 pad20[12]; u32 fl; };
struct N { u8 pad[48]; G *g; };
struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, int, int, int, int);
    virtual void s14(V3 *, V3 *, V3 *, V3 *, int);
};
struct T { u8 pad[12]; void (*f12)(void *, V3 *); };
extern T lbl_803286D0;
struct H { u8 pad[16]; u32 n; };
struct P {
    u8 pad0[96];
    s32 st96;
    u8 pad100[124];
    A *a224;
    u8 pad228[72];
    s32 *s300;
    u8 pad304[4];
    f32 *f308;
    f32 *f312;
    f32 *f316;
    H **h320;
    N **n324;
    s32 i328;
    f32 f332;
    V3 v336;
    V3 v348;
    V3 v360;
    V3 v372;
    V3 v384;
    s32 i396;
    s32 i400;
    u8 pad404[4];
    s32 i408;
    s32 i412;
    s32 i416;
    s32 i420;
};
extern volatile f32 lbl_8036194C;
extern u32 lbl_80361950;
extern u8 *lbl_8035B308;
void fn_80240C2C(P *, int);
void fn_802490E0(P *, int, f32);
void fn_8010117C(V3 *, f32);
s32 fn_80237BB0(A *, void *, int, int, int);
void fn_802494A4(P *, int);
void fn_80190C98(N *);
void fn_8023FE08(P *, f32);

void fn_8009E85C(P *p, f32 dt) {
    V3 v; volatile V3 b, a;
    N *n;
    G *g;
    u32 i;
    if (p->i416) {
        p->a224->s14(&p->v360, &p->v372, 0, &p->v384, 0);
        p->i416 = 0;
    } else if (p->st96 == 2) {
        if (p->i420) {
            fn_80240C2C(p, 0);
            p->i420 = 0;
        }
        if (p->i328) {
            f32 t;
            p->f332 += dt;
            if (p->f332 >= *p->f312) {
                p->f332 = *p->f312;
                p->i328 = 0;
                fn_802490E0(p, 0, *p->f316);
            }
            { f32 k; f32 q = *p->f308 * p->f332 / *(volatile f32 *)p->f312; k = lbl_8036194C;
            a.x = *(volatile f32 *)&p->v336.x; a.y = p->v336.y; a.z = p->v336.z;
            b.x = p->v348.x; b.y = p->v348.y; b.z = p->v348.z;
            t = k * q; }
            fn_8010117C((V3 *)&a, t);
            fn_8010117C((V3 *)&b, t);
            p->a224->s14(0, (V3 *)&a, 0, (V3 *)&b, 0);
        } else if (p->i412 && p->i396 && p->i400 && (!*p->s300 || p->i408)) {
            if (fn_80237BB0(p->a224, *(void **)(lbl_8035B308 + 72), 0, 0, 0)) {
                p->i408 = 0;
                fn_802494A4(p, 3);
            }
        }
        p->i408 = 0;
    }
    if (p->st96 == 2 || p->st96 == 3) {
        p->a224->s13(&v, 0, 0, 0, 0);
        for (i = 0; i < (*p->h320)->n; i++) {
            n = p->n324[i];
            if (n) {
                g = n->g;
                if (g) {
                    lbl_803286D0.f12(g->h, &v);
                    g->fl |= lbl_80361950;
                    fn_80190C98(n);
                }
            }
        }
    }
    fn_8023FE08(p, dt);
}

} /* extern "C" */
