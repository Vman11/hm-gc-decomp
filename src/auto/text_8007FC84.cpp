// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void s14(V3 *, int, int, int, int);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void s19(); virtual void s20();
};
struct O { u8 pad[12]; u32 n; };
struct Q { u8 pad[212]; f32 f212; u8 pad216[28]; O *o244; };
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[24];
    u32 n124;
    u8 pad128[64];
    Q **q192;
    u8 pad196[28];
    A *a224;
    u8 pad228[56];
    Q *q284;
};
static u8 sPad[712] = {1};
static s32 tA[6] = {1};
static s32 tB[12] = {1};
static s32 tC[34] = {1};
extern f32 lbl_8035FB28, lbl_8035FB2C, lbl_8035FB30;
void fn_80241628(P *, int, int);
void fn_80240A8C(P *, int, int);
void fn_802494A4(P *, int);
void fn_80245E58(O *, u32, V3 *);
void fn_80241588(P *, u32, int, f32);
void fn_802490E0(P *, int, f32);
void fn_80240274(P *, int);
int rand(void);

static inline void pickPose(P *p) {
    O *o = p->q284->o244;
    if (o->n) {
        u32 n = o->n;
        V3 v;
        u32 k = 0;
        if (n - 1) k = rand() % (n - 1);
        fn_80245E58(o, k, &v);
        p->a224->s14(&v, 0, 0, 0, 0);
    }
}
static inline void pickAnim(P *p) {
    u32 m = p->n124;
    u32 k = 0;
    if (m) k = rand() % m;
    fn_80241588(p, k, 0, lbl_8035FB2C);
}
static inline void pick(P *p) { pickPose(p); pickAnim(p); }

void fn_8007FC84(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 1, 0);
        fn_80240A8C(p, 0, 0);
        p->q284 = *p->q192;
        p->q284->f212 = lbl_8035FB28;
        fn_80241628(p, 1, 0);
        p->a224->s20();
        break;
    case 1:
        p->a224->s19();
        pick(p);
        break;
    case 2:
        return;
    case 3:
        pick(p);
        break;
    case 4:
        fn_802494A4(p, 1);
        break;
    case 5:
        {
            s32 r = (u32)rand() % 32000;
            fn_802490E0(p, 0, lbl_8035FB30 * r);
        }
        break;
    case 6:
        fn_802494A4(p, 0);
        break;
    case 7:
        fn_80240274(p, 0);
        break;
    case 8:
        break;
    }
}

} /* extern "C" */
