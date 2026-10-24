// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[180];
    s32 *s280;
    f32 *f284[6];
    u8 pad308[24];
    f32 *f332;
    f32 *f336;
    f32 *f340;
    f32 *f344;
    f32 save[6];
    f32 f372;
    s32 i376;
    u8 pad380[4];
    s32 i384;
};
static u8 sPad[768] = {1};
static s32 tA[8] = {1};
static s32 tB[24] = {1};
static s32 tC[34] = {1};
extern f32 lbl_803610A0;
void fn_80241628(P *, int, int);
void fn_802494A4(P *, int);
void fn_8009633C(P *, int, int, f32);
void fn_802490E0(P *, int, f32);
void fn_80249008(P *, int);

void fn_80095FA4(P *p, s32 n) {
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
        fn_80241628(p, 0, 0);
        p->i376 = *p->s280;
        if (p->i384) {
            p->save[0] = *p->f284[0];
            p->save[1] = *p->f284[1];
            p->save[2] = *p->f284[2];
            p->save[3] = *p->f284[3];
            p->save[4] = *p->f284[4];
            p->save[5] = *p->f284[5];
            p->i384 = 0;
        } else {
            *p->f284[0] = p->save[0];
            *p->f284[1] = p->save[1];
            *p->f284[2] = p->save[2];
            *p->f284[3] = p->save[3];
            *p->f284[4] = p->save[4];
            *p->f284[5] = p->save[5];
        }
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_8009633C(p, 1, 0, (*p->f336 - p->f372) / *p->f336);
        break;
    case 2:
        p->f372 = lbl_803610A0;
        fn_802490E0(p, 0, *p->f332);
        break;
    case 3:
        fn_8009633C(p, 1, 1, p->f372 / *p->f332);
        if (*p->f340 != lbl_803610A0) fn_802490E0(p, 2, *p->f344);
        break;
    case 4:
        p->f372 = lbl_803610A0;
        fn_802490E0(p, 1, *p->f336);
        break;
    case 5:
        return;
    case 6:
        if (p->i376) fn_802494A4(p, 2);
        break;
    case 7:
        fn_802494A4(p, 3);
        break;
    case 8:
        if (p->i376) fn_802494A4(p, 4);
        break;
    case 9:
        fn_802494A4(p, 1);
        break;
    case 10:
        p->i376 = 1;
        break;
    case 11:
        p->i376 = 0;
        break;
    case 12:
        fn_80249008(p, 0);
        break;
    case 13:
        fn_80249008(p, 2);
        break;
    case 14:
        fn_80249008(p, 1);
        break;
    case 15:
        break;
    }
}

} /* extern "C" */
