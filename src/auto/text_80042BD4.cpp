// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct V3 { f32 x, y, z; };
#define V(n) virtual void n();
class Cam { public: V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12)
    virtual void get(V3 *, int, int, int, int); virtual void set(void *, int, int, int, int);
    u8 pad[312]; f32 f316, f320, f324; };
class Snd { public: V(s0) V(s1) V(s2) V(s3) V(s4) V(s5) V(s6) V(s7) V(s8) V(s9) V(s10) V(s11) V(s12) V(s13) V(s14) V(s15) V(s16) V(s17) V(s18) V(s19)
    V(s20) V(s21) V(s22) V(s23) V(s24) V(s25) V(s26) V(s27) V(s28) V(s29) V(s30) V(s31) V(s32)
    virtual void play(void *, Cam *, int, void *, int); };
struct G72 { u8 p[72]; Cam *f72; };
struct G72b { u8 p[72]; Snd *f72; };
struct St;
struct Hd { u8 p[16]; u32 f16; };
struct Arr { Hd *f0; u8 p[8]; u8 *f12; };
struct ArrU { Hd *f0; u8 p[8]; u32 *f12; };
struct K8 { u32 a, b; };
class O { public: V(o0) V(o1) V(o2) V(o3) V(o4) V(o5) V(o6) V(o7) V(o8) V(o9) V(o10) V(o11) V(o12) V(o13) V(o14) V(o15) V(o16) V(o17)
    virtual void v80(); virtual void v84();
    u8 p4[92]; s32 f96; u8 p100[124]; Cam *f224; u8 p228[36]; void *f264; u8 p268[12]; void *f280; u8 p284[16]; void *f300; u8 p304[44];
    u8 f348[12]; s32 f360; u8 p364[12]; f32 *f376; u8 p380[8]; void *f388; void *f392; Arr *f396; Arr *f400; ArrU *f404; s32 f408; s32 f412;
    s32 f416; s32 f420; s32 f424; s32 f428; s32 f432; };
static u8 sPad[1156] = {1};
static s32 tI[21] = {1};
static s32 tB[55] = {1};
static s32 tS[55] = {1};
extern "C" {
extern char lbl_8029545C[], lbl_80295468[];
extern char lbl_8035C874[8], lbl_8035C7F0[8];
extern f32 lbl_8035C884, lbl_8035C888, lbl_8035C88C;
extern G72 *lbl_8035B308;
extern void *lbl_8035B65C;
void fn_80241628(O *, int, int);
void fn_80240DBC(O *, f32);
void fn_8003FB70(O *);
St *fn_80242144(O *, int);
void fn_80242BC0(St *, char *, Cam *, int, void *, int);
void fn_80241DD0(O *, char *, int, int, int, int);
void fn_8003FBF0(O *, void *, int);
void fn_802494A4(O *, int);
void fn_8003FD24(O *, int);
void fn_80040274(O *);
void fn_80040570(O *);
void fn_80249008(O *, int);
void fn_80101820(V3 *);
void fn_80248514(void *, int, f32);
void fn_800F6E88(K8 *, void *);
int fn_800F6CD0(K8 *, void *);
void __ct__9C80253F24Fiiii(void *, K8 *, Cam *, int, void *);
}
static inline void c17(O *o) {
        s32 snd;
        u32 n;
        s32 ok;
        o->f408--;
        n = o->f408;
        if (o->f396 && o->f396->f0->f16 > n) {
            K8 a;
            fn_800F6E88(&a, o->f396->f12 + n * 8);
            if (!fn_800F6CD0(&a, lbl_8035C7F0)) {
                K8 b;
                ok = 0;
                if (o->f400 && o->f400->f0->f16 > n) {
                    fn_800F6E88(&b, o->f400->f12 + n * 8);
                    if (!fn_800F6CD0(&b, lbl_8035C7F0)) ok = 1;
                }
                snd = 0;
                if (o->f404 && o->f404->f0->f16 > n) snd = (s32)o->f404->f12[n];
                if (snd) __ct__9C80253F24Fiiii(lbl_8035B65C, &a, o->f224, 0, ok ? &b : 0);
                else { u32 k = n + 3; fn_80242BC0(fn_80242144(o, k), (char *)&a, o->f224, 0, ok ? &b : 0, 0); }
            }
        }
        if (!o->f408 && o->f388) {
            ((G72b *)lbl_8035B308)->f72->play(o->f388, o->f224, 0, o->f392 ? o->f392 : 0, 0);
            fn_802494A4(o, 4);
        } else {
            fn_80242BC0(fn_80242144(o, 2), lbl_80295468, 0, 0, 0, 0);
        }
        }
extern "C" void fn_80042BD4(O *o, s32 idx) {
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
        fn_80240DBC(o, lbl_8035C884);
        fn_80241628(o, 0, 0);
        o->f416 = 0;
        fn_8003FB70(o);
        break;
    case 2:
        fn_80241628(o, 1, 0);
        fn_8003FBF0(o, o->f300, 1);
        break;
    case 3:
        fn_80241628(o, 0, 0);
        o->f420 = 0;
        break;
    case 4:
        return;
    case 5: {
        V3 v;
        o->f432 = 0;
        o->f224->get(&v, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(o, 2), lbl_8029545C, o->f224, 0, &v, 0);
        if (!o->f432) fn_80241DD0(o, lbl_8035C874, 0, 0, 0, 0);
        break;
    }
    case 6: fn_802494A4(o, 1); break;
    case 7: fn_8003FD24(o, 1); break;
    case 8: fn_8003FD24(o, 0); break;
    case 9: fn_80040274(o); break;
    case 10:
        o->v84();
        fn_802494A4(o, 3);
        break;
    case 11:
        if (!o->f360) {
            o->f360 = 1;
            o->f224->set(o->f348, 0, 0, 0, 0);
            fn_80241628(o, 0, 0);
            o->v80();
        }
        break;
    case 12:
        o->f360 = 1;
        o->f224->set(o->f348, 0, 0, 0, 0);
        fn_802494A4(o, 0);
        break;
    case 13: fn_802494A4(o, 0); break;
    case 14: o->f412++; break;
    case 15: o->f412--; break;
    case 16: o->f408++; break;
    case 17: c17(o); break;
    case 18:
        o->f424 = 0;
        fn_80249008(o, 0);
        fn_80249008(o, 1);
        o->f416 = 0;
        o->f420 = 0;
        break;
    case 19: o->f424 = 1; break;
    case 20:
        o->f428 = 0;
        fn_80249008(o, 0);
        fn_80249008(o, 1);
        o->f416 = 0;
        o->f420 = 0;
        break;
    case 21: o->f428 = 1; break;
    case 22: o->f432 = 1; break;
    case 23: {
        V3 d, b, a;
        f32 f;
        fn_8003FBF0(o, o->f280, 0);
        o->f224->get(&a, 0, 0, 0, 0);
        lbl_8035B308->f72->get(&b, 0, 0, 0, 0);
        d.x = b.x - a.x; d.y = b.y - a.y; d.z = b.z - a.z;
        fn_80101820(&d);
        f = *o->f376;
        *(volatile f32 *)&d.x = d.x * f; *(volatile f32 *)&d.y = d.y * f; *(volatile f32 *)&d.z = d.z * f;
        d.z = *(volatile f32 *)&lbl_8035C888;
        { Cam *c = o->f224; c->f316 = d.x; c->f320 = d.y; c->f324 = d.z; }
        fn_802494A4(o, 2);
        break;
    }
    case 24: fn_80040570(o); break;
    case 25: fn_80249008(o, 0); break;
    case 26:
        if (o->f264) fn_80248514(o->f264, 0, lbl_8035C88C);
        break;
    case 27: fn_80249008(o, 1); break;
    case 28: break;
    }
}

} /* extern "C" */
