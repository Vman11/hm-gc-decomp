// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

#define V(n) virtual void n();
class Snd { public: V(s0) V(s1) V(s2) V(s3) V(s4) V(s5) V(s6) V(s7) V(s8) V(s9) V(s10) V(s11) V(s12) V(s13) V(s14) V(s15) V(s16) V(s17) V(s18) V(s19)
    V(s20) V(s21) V(s22) V(s23) V(s24) V(s25) V(s26) V(s27) V(s28) V(s29) V(s30) V(s31) V(s32)
    virtual void play(char *, void *, int, f32 *, int); };
struct G72 { u8 p[72]; Snd *f72; };
struct Fl { u8 p[4]; u32 f4; u8 p8[4]; u32 f12; };
class O { public: u8 p0[96]; s32 f96; u8 p100[112]; Fl *f212; u8 p216[4]; s32 f220; void *f224; u8 p228[52]; f32 *f280; f32 *f284; s32 *f288; f32 *f292; f32 *f296; f32 *f300;
    Snd *f304; s32 f308; s32 f312; s32 f316; };
static u8 sPad[1000] = {1};
static s32 tI[14] = {1};
static s32 tB[34] = {1};
static s32 tS[34] = {1};
extern "C" {
extern G72 *lbl_8035B308;
extern f32 lbl_80362C04, lbl_80362C08, lbl_80362C0C;
extern char lbl_80362BC4[8], lbl_80362BCC[8], lbl_80362C10[8];
int rand(void);
void fn_80241628(O *, int, int);
void fn_802490E0(O *, int, f32);
void fn_802494A4(O *, int);
void fn_802401A0(O *);
void fn_802401D0(O *);
void fn_80241588(O *, int, int, f32);
void fn_80240C2C(O *, int);
void fn_80240DBC(O *, f32);
void fn_8024125C(O *, int);
void fn_80241DD0(O *, char *, int, int, int, int);
void fn_80249008(O *, int);
}
inline f32 Rnd(O *o) {
    s32 i = rand() % 10000u;
    f32 r = lbl_80362C04 * (f32)i;
    f32 d = *o->f296 - *o->f292;
    r = d * r + *o->f292;
    return r;
}
inline void Go(O *o, int n, u32 f) {
    if (f) fn_80240C2C(o, n);
    else fn_80240DBC(o, lbl_80362C0C);
}
extern "C" void fn_800AFBA4(O *o, s32 idx) {
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
        o->f304 = lbl_8035B308->f72;
        o->f308 = rand() & 1;
        fn_802490E0(o, 1, Rnd(o));
        fn_802494A4(o, 1);
        break;
    case 1:
        fn_802401A0(o);
        fn_80241588(o, 0, 0, lbl_80362C08);
        break;
    case 2:
        fn_802401D0(o);
        fn_80241588(o, 1, 0, lbl_80362C08);
        Go(o, 1, o->f212->f4);
        break;
    case 3:
        return;
    case 4:
        fn_802490E0(o, 1, Rnd(o));
        o->f308 = (bool)(*o->f288 || (!o->f308 && o->f316));
        break;
    case 5:
        if (o->f220 == 1) {
            fn_80241588(o, 2, 0, lbl_80362C08);
            fn_8024125C(o, 2);
            fn_802490E0(o, 2, *o->f300);
        } else if (o->f220 == 3) {
            fn_802494A4(o, 1);
        }
        break;
    case 6: o->f312 = 1; break;
    case 7: o->f312 = 0; break;
    case 8:
        o->f312 = 0;
        fn_80241588(o, 3, 0, lbl_80362C08);
        Go(o, 3, o->f212->f12);
        break;
    case 9: fn_80241DD0(o, lbl_80362BC4, 0, 0, 0, 0); break;
    case 10: fn_80249008(o, 0); break;
    case 11: o->f316 = 0; break;
    case 12:
        if (o->f220 == 2) {
            fn_80241DD0(o, lbl_80362BCC, 0, 0, 0, 0);
            o->f316 = 0;
            fn_80241588(o, 3, 0, lbl_80362C08);
            Go(o, 3, o->f212->f12);
        }
        break;
    case 13: o->f316 = 1; break;
    case 14: {
        f32 v;
        fn_802490E0(o, 2, *o->f300);
        v = -*o->f280;
        o->f304->play(lbl_80362C10, o->f224, 0, &v, 0);
        fn_802490E0(o, 0, *o->f284);
        break;
    }
    case 15:
        if (!*o->f288) {
            fn_80241DD0(o, lbl_80362BCC, 0, 0, 0, 0);
            fn_80241588(o, 3, 0, lbl_80362C08);
            Go(o, 3, o->f212->f12);
        }
        break;
    case 16: fn_802494A4(o, 1); break;
    case 17: fn_802494A4(o, 3); break;
    case 18: break;
    }
}

} /* extern "C" */
