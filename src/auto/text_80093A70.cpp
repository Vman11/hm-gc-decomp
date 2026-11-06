#include "common.h"
extern "C" {

struct G72 { u8 p[72]; void *f72; };
class O { public: u8 p0[96]; s32 f96; u8 p100[120]; s32 f220; void *f224; u8 p228[8]; s32 f236; void *f240; u8 p244[40]; s32 *f284; s32 *f288; u8 p292[12];
    char *f304; void *f308; u32 *f312; u32 f316; u32 f320; s32 f324; s32 *f328; s32 *f332; f32 *f336; f32 *f340; f32 *f344; s32 f348; u32 f352; f32 f356;
    s32 f360; s32 f364; s32 f368; s32 f372; };
static u8 sPad[1240] = {1};
static s32 tI[24] = {1};
static s32 tB[54] = {1};
static s32 tS[54] = {1};
extern "C" {
extern G72 *lbl_8035B308;
extern void *volatile lbl_8035A0A4;
extern void *lbl_8035B65C;
extern f32 lbl_80360EB4, lbl_80360EB8, lbl_80360EBC;
extern char lbl_80360DC8[8], lbl_80360EC0[8], lbl_80360EC8[8], lbl_80360ED0[8], lbl_80360ED8[8], lbl_80360EE0[8], lbl_80360EE8[8], lbl_80360EF0[8], lbl_80360EF8[8], lbl_80360F00[8], lbl_80360F08[8];
extern char lbl_80299B08[];
int rand(void);
void fn_80241628(O *, int, int);
void fn_8003C778(void *, void *, u32 **);
void fn_8022BF30(void *, s32, int, f32);
void fn_802494A4(O *, int);
void fn_802402E0(O *);
void fn_80072438(void *, s32);
void fn_8022D6FC(void *);
void fn_80241588(O *, int, int, f32);
int fn_800F6CD0(char *, char *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
void fn_80240274(O *, int);
int fn_8003C674(void *, char *, s32 **);
void fn_802490E0(O *, int, f32);
void fn_80240948(O *, char *, int);
void fn_802413D8(O *, void *, int, int, f32, s32);
}
inline void Ev(O *o, char *s) {
    fn_802494A4(o, 3);
    fn_80240274(o, 0);
    fn_80240948(o, s, 0);
}
extern "C" void fn_80093A70(O *o, s32 idx) {
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
        if (o->f328) o->f348 = *o->f328;
        if (o->f332) o->f352 = *o->f332;
        if (o->f336) o->f356 = *o->f336;
        o->f308 = lbl_8035B308->f72;
        fn_8003C778(lbl_8035A0A4, o->f224, &o->f312);
        fn_8022BF30(o->f224, o->f348, 0, lbl_80360EB4);
        if (!(*o->f312 & o->f316)) fn_802494A4(o, 1);
        else fn_802494A4(o, 4);
        break;
    case 1: fn_802402E0(o); break;
    case 2:
        *o->f312 |= o->f316;
        *o->f312 |= o->f320;
        fn_80072438(o->f308, *o->f284);
        o->f368 = 0;
        break;
    case 3:
        fn_80241628(o, 1, 0);
        o->f360 = 1;
        break;
    case 4:
        fn_80241628(o, 0, 0);
        fn_8022D6FC(o->f224);
        fn_80241588(o, 7, 0, lbl_80360EB8);
        if (o->f304 && !fn_800F6CD0(o->f304, lbl_80360DC8)) __ct__9C80253F24Fiiii(lbl_8035B65C, o->f304, 0, 0, 0);
        break;
    case 5: return;
    case 6:
        fn_8022BF30(o->f224, o->f348, 1, lbl_80360EB4);
        o->f360 = 0;
        break;
    case 7:
        if (o->f220 != 7) {
            fn_80241588(o, 7, 0, lbl_80360EB8);
        } else if ((s32)((u32)rand() % 10) < 3) {
            if (rand() & 1) fn_80241588(o, 8, 0, lbl_80360EB8);
            else fn_80241588(o, 9, 0, lbl_80360EB8);
        } else {
            fn_80241588(o, 7, 0, lbl_80360EB8);
        }
        break;
    case 8:
        o->f364 = o->f368 = 1;
        break;
    case 9:
        fn_80240274(o, 0);
        fn_802494A4(o, 2);
        break;
    case 10:
        if (o->f364) {
            s32 *volatile p = 0;
            if (!fn_8003C674(lbl_8035A0A4, lbl_80299B08, (s32 **)&p)) *p = 0;
            { s32 *q = p; *q = *q + *o->f288; }
            o->f364 = 0;
        }
        if (o->f368) {
            fn_80072438(o->f308, *o->f284);
            o->f368 = 0;
        }
        break;
    case 11: {
        f32 f = *o->f344;
        fn_8022BF30(o->f224, 0, 1, lbl_80360EB4);
        fn_8022BF30(o->f224, o->f348, 1, f);
        fn_802490E0(o, 2, *o->f344);
        break;
    }
    case 12: fn_802490E0(o, 0, lbl_80360EBC); break;
    case 13: o->f372 = 1; break;
    case 14: o->f372 = 0; break;
    case 15:
        fn_802494A4(o, 3);
        fn_802402E0(o);
        break;
    case 16:
        fn_8022BF30(o->f224, o->f348, 1, lbl_80360EB4);
        fn_802494A4(o, 4);
        break;
    case 17: Ev(o, lbl_80360EC0); break;
    case 18: Ev(o, lbl_80360EC8); break;
    case 19: Ev(o, lbl_80360ED0); break;
    case 20: Ev(o, lbl_80360ED8); break;
    case 21: Ev(o, lbl_80360EE0); break;
    case 22: Ev(o, lbl_80360EE8); break;
    case 23: Ev(o, lbl_80360EF0); break;
    case 24: Ev(o, lbl_80360EF8); break;
    case 25: Ev(o, lbl_80360F00); break;
    case 26: Ev(o, lbl_80360F08); break;
    case 27:
        if (o->f240) {
            fn_802413D8(o, o->f240, 0, 1, lbl_80360EB8, o->f236);
            if (o->f360) {
                o->f360 = 0;
                fn_8022BF30(o->f224, 0, 1, lbl_80360EB4);
                fn_802490E0(o, 1, *o->f340);
            }
        }
        break;
    case 28: {
        s32 s = 1;
        u32 r, n;
        if (o->f324 >= o->f348) s = -1;
        n = o->f352;
        r = 0;
        if (n) r = rand() % n;
        fn_8022BF30(o->f224, o->f324, 1, lbl_80360EB4);
        o->f324 = o->f348 + s * r;
        fn_8022BF30(o->f224, o->f324, 0, o->f356);
        fn_802490E0(o, 0, o->f356);
        break;
    }
    case 29: break;
    }
}
}
