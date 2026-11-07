#include "common.h"
extern "C" {
#include "common.h"

struct V3 { f32 x, y, z; };
#define V(n) virtual void n();
class Cam { public: V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12)
    virtual void get(V3 *, int, int, int, int);
    V(c14) V(c15) V(c16) V(c17) V(c18) V(c19) V(c20) V(c21) V(c22) V(c23) V(c24) V(c25) V(c26) V(c27) V(c28) V(c29) V(c30) V(c31) V(c32)
    virtual void play(char *, Cam *, int, f32 *, int);
    u8 pad[312]; f32 f316, f320, f324; u8 p328[68]; Cam *f396; };
struct G72 { u8 p[72]; Cam *f72; };
class O { public: u8 p0[96]; s32 f96; u8 p100[124]; Cam *f224; u8 p228[36]; void *f264; u8 p268[12]; f32 *f280; f32 *f284; f32 *f288; u8 p292[8];
    f32 *f300; void *f304, *f308, *f312; u8 p316[12]; s32 f328; u8 p332[12]; V3 f344; s32 f356; f32 f360; s32 f364; f32 *f368; f32 *f372; Cam *f376;
    char *f380; char *f384; char *f388; };
static u8 sPad[1060] = {1};
static s32 tI[10] = {1};
static s32 tB[35] = {1};
static s32 tS[35] = {1};
extern "C" {
extern char lbl_80299400[];
extern char lbl_80360630[8], lbl_803606A4[8];
extern f32 lbl_80360694, lbl_80360698, lbl_8036069C, lbl_803606A0;
extern G72 *lbl_8035B308;
void *fn_8023F4A0(O *, char *, char *, char *, int);
void fn_802402E0(O *);
void fn_80240274(O *, int);
void fn_80240DBC(O *, f32);
void fn_80241628(O *, int, int);
void fn_802490E0(O *, int, f32);
void fn_80241588(O *, int, int, f32);
int fn_800F6CD0(char *, char *);
void fn_80240B50(O *, char *, int);
void fn_802491DC(O *, int);
void fn_80249008(O *, int);
void fn_80248514(void *, int, f32);
f32 fn_80101664(V3 *);
void fn_802494A4(O *, int);
void fn_8024017C(O *);
}
inline void Ld(O *o, char *x) { if (x && !fn_800F6CD0(x, lbl_80360630)) fn_80240B50(o, x, 0); }
extern "C" void fn_8008E4DC(O *o, s32 idx) {
    char *s = lbl_80299400;
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
        o->f304 = fn_8023F4A0(o, lbl_80360630, lbl_80360630, s + 192, 0);
        o->f308 = fn_8023F4A0(o, lbl_80360630, lbl_80360630, s + 204, 0);
        o->f312 = fn_8023F4A0(o, lbl_80360630, lbl_80360630, s + 216, 0);
        o->f224->get(&o->f344, 0, 0, 0, 0);
        o->f376 = lbl_8035B308->f72;
        o->f224->f396 = o->f376;
        fn_802402E0(o);
        break;
    case 1:
        fn_80240274(o, 0);
        fn_80240DBC(o, lbl_80360694);
        fn_80241628(o, 2, 0);
        fn_802490E0(o, 0, *o->f284);
        fn_80241588(o, 1, 0, lbl_80360698);
        break;
    case 2:
        Ld(o, o->f380);
        fn_80241628(o, 1, 0);
        fn_80241588(o, 3, 0, lbl_80360698);
        o->f364 = 0;
        fn_802491DC(o, 2);
        break;
    case 3:
        fn_80241628(o, 0, 0);
        fn_802490E0(o, 1, *o->f288);
        o->f328 = 0;
        break;
    case 4:
        fn_80241628(o, 0, 0);
        break;
    case 5:
        return;
    case 6: fn_80249008(o, 0); break;
    case 7:
        if (o->f264) fn_80248514(o->f264, 0, lbl_8036069C);
        fn_80249008(o, 2);
        break;
    case 8: fn_80249008(o, 1); break;
    case 9: {
        V3 d, a;
        f32 px = o->f344.x, py = o->f344.y, pz = o->f344.z;
        f32 l, k;
        o->f376->get(&a, 0, 0, 0, 0);
        a.z += *o->f368;
        d.x = a.x - px; d.y = a.y - py; d.z = a.z - pz;
        l = fn_80101664(&d) / *o->f280;
        *(volatile f32 *)&d.x = d.x * *o->f280; *(volatile f32 *)&d.y = d.y * *o->f280; *(volatile f32 *)&d.z = d.z * *o->f280;
        l = *(volatile f32 *)&lbl_80360694 * l * *o->f372;
        d.z = d.z + l;
        { Cam *c = o->f224; c->f316 = d.x; c->f320 = d.y; c->f324 = d.z; }
        fn_802494A4(o, 2);
        o->f360 = lbl_803606A0;
        break;
    }
    case 10: fn_802494A4(o, 3); break;
    case 11:
        o->f356 = 1;
        fn_802494A4(o, 1);
        break;
    case 12:
        return;
    case 13: {
        f32 v = -*o->f300;
        o->f376->play(lbl_803606A4, o->f224, 0, &v, 0);
        Ld(o, o->f388);
        fn_8024017C(o);
        fn_802494A4(o, 3);
        break;
    }
    case 14:
        return;
    case 15:
        Ld(o, o->f388);
        fn_8024017C(o);
        fn_802494A4(o, 3);
        break;
    case 16:
        fn_80241588(o, 7, 0, lbl_80360698);
        Ld(o, o->f384);
        break;
    case 17:
        fn_80241588(o, 7, 0, lbl_80360698);
        if (!o->f364) o->f364 = 1;
        Ld(o, o->f384);
        break;
    case 18: fn_802494A4(o, 1); break;
    case 19: fn_802494A4(o, 0); break;
    case 20: break;
    }
}
}
