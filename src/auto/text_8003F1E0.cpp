#include "common.h"

struct V3 { f32 x, y, z; };
class C802449C4 { public: u8 d[56]; C802449C4(); ~C802449C4(); };
#define V(n) virtual void n();
class Cam { public: V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12)
    virtual void get(V3 *, int, int, int, int); virtual void set(void *, int, int, int, int);
    u8 pad[276]; V3 f280; u8 p292[48]; f32 f340; };
struct St { u8 p[20]; u32 f20; };
class O { public: V(o0) V(o1) V(o2) V(o3) V(o4) V(o5) V(o6) V(o7) V(o8) V(o9) V(o10) V(o11) V(o12) V(o13) V(o14) V(o15) V(o16) V(o17)
    virtual void v80(); virtual void v84();
    u8 p4[92]; s32 f96; u8 p100[124]; Cam *f224; u8 p228[36]; void *f264; u8 p268[32]; void *f300; u8 p304[44]; u8 f348[12]; s32 f360; u8 p364[12]; f32 *f376; s32 f380; };
static u8 sPad[812] = {1};
static s32 tI[10] = {1};
static s32 tB[27] = {1};
static s32 tS[27] = {1};
extern "C" {
extern char lbl_80294E98[];
extern f32 lbl_8035C2CC, lbl_8035C2D0, lbl_8035C2E8;
extern f64 lbl_8035C2D8, lbl_8035C2E0;
int rand(void);
void fn_80241628(O *, int, int);
void fn_80240DBC(O *, f32);
void fn_8003FB70(O *);
St *fn_80242144(O *, int);
void fn_80242BC0(St *, char *, int, int, int, int);
void fn_8003FBF0(O *, void *, int);
void fn_80240D70(O *, int);
void fn_802494A4(O *, int);
void fn_8003FD24(O *, int);
void fn_80040274(O *);
void fn_80040570(O *);
void fn_802448C8(C802449C4 *, St *);
void fn_80244750(C802449C4 *, int);
Cam *fn_8024457C(C802449C4 *);
void fn_80244594(C802449C4 *);
void fn_80101820(V3 *);
void fn_80248514(void *, int, f32);
}
// Literals that other functions of the original TU use first (keeps the pool offsets; unit is NonMatching).
const char *wG_strpool_8003F1E0[] = { "MStation", "MFalling", "BillBall", "STRT_COL", "BOUNCSND", "FAKESINK" };
inline f32 Sq(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035C2D8 * g * (lbl_8035C2E0 - g * g * x);
    g = lbl_8035C2D8 * g * (lbl_8035C2E0 - g * g * x);
    g = lbl_8035C2D8 * g * (lbl_8035C2E0 - g * g * x);
    y = x * g;
    return y;
}
extern "C" void fn_8003F1E0(O *o, s32 idx) {
    s32 *q;
    s32 i;
    s32 t;
    i = tI[idx];
    t = o->f96;
    q = &tB[i];
    while (t > 0) {
        if (*q > t) break;
        t -= tB[i++];
        q++;
    }
    switch (tS[i]) {
    case 0:
        fn_80241628(o, 0, 0);
        o->v80();
        break;
    case 1:
        fn_80240DBC(o, lbl_8035C2CC);
        fn_80241628(o, 0, 0);
        fn_8003FB70(o);
        break;
    case 2:
        fn_80241628(o, 1, 0);
        fn_80242BC0(fn_80242144(o, 2), (char *)"BALLMOVE", 0, 0, 0, 0);
        fn_8003FBF0(o, o->f300, 1);
        break;
    case 3:
        fn_80241628(o, 0, 0);
        fn_80242BC0(fn_80242144(o, 2), (char *)"BALLSUNK", 0, 0, 0, 0);
        fn_80240D70(o, -1);
        break;
    case 4:
        fn_80241628(o, 0, 0);
        o->f380 = 0;
        if (!o->f360) o->f224->set(o->f348, 0, 0, 0, 0);
        o->f360 = 1;
        o->v80();
        break;
    case 5:
        o->f380 = 0;
        o->f360 = 1;
        o->f224->set(o->f348, 0, 0, 0, 0);
        fn_802494A4(o, 0);
        break;
    case 6:
        fn_802494A4(o, 1);
        break;
    case 7:
        return;
    case 8:
        fn_8003FD24(o, 1);
        break;
    case 9:
        fn_8003FD24(o, 0);
        break;
    case 10:
        fn_80040274(o);
        break;
    case 11:
        o->v84();
        fn_802494A4(o, 3);
        break;
    case 12: {
        u32 n, k, j;
        fn_80241628(o, 1, 0);
        n = fn_80242144(o, 3)->f20;
        if (!n) {
            o->v84();
            fn_802494A4(o, 3);
            break;
        }
        k = 0;
        if (n) k = rand() % n;
        {
            C802449C4 it;
            fn_802448C8(&it, fn_80242144(o, 3));
            fn_80244750(&it, 0);
            for (j = 0; j < k; j++) fn_80244594(&it);
            n = (u32)fn_8024457C(&it);
            if (n) {
                Cam *x = (Cam *)n;
                V3 d, b, a;
                f32 f, l;
                o->f224->get(&a, 0, 0, 0, 0);
                x->get(&b, 0, 0, 0, 0);
                d.x = b.x - a.x; d.y = b.y - a.y; d.z = b.z - a.z;
                fn_80101820(&d);
                d.x *= *o->f376; d.y *= *o->f376; d.z *= *o->f376;
                l = d.x * d.x + d.y * d.y + d.z * d.z;
                { f32 k = *(volatile f32 *)&lbl_8035C2D0; if (l > k) l = Sq(l); }
                { Cam *c = o->f224; c->f280.x = d.x; c->f280.y = d.y; c->f280.z = d.z; c->f340 = l; }
                fn_802494A4(o, 2);
            }
        }
        break;
    }
    case 13:
        fn_80040570(o);
        break;
    case 14:
        if (!o->f360) {
            fn_80242BC0(fn_80242144(o, 2), (char *)"BALLSTOP", 0, 0, 0, 0);
            if (o->f264) fn_80248514(o->f264, 0, lbl_8035C2E8);
        }
        break;
    case 15:
        break;
    }
}
