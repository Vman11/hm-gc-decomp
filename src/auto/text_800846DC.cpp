// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    u32 u224;
    u32 u228;
    u8 pad232[4];
    u32 u236;
    u8 pad240[40];
    s32 *s280;
    u8 pad284[16];
    f32 *f300;
    f32 *f304;
    s32 *s308;
    f32 *f312;
    f32 f316;
    s32 i320;
    s32 i324;
    f32 f328;
    u32 u332;
    u32 u336;
};
static u8 sPad[836] = {1};
static s32 tA[10] = {1};
static s32 tB[28] = {1};
static s32 tC[34] = {1};
extern f32 lbl_8035FD94, lbl_8035FD98;
extern u8 *lbl_8035B308;
void fn_80241628(P *, int, int);
void fn_802494A4(P *, int);
void fn_80084A54(P *, int, int, f32);
void fn_802490E0(P *, int, f32);
void fn_80249008(P *, int);

void fn_800846DC(P *p, s32 n) {
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
        p->i320 = *p->s280;
        fn_802494A4(p, 1);
        break;
    case 1:
        if (!p->i324) fn_80084A54(p, 1, 0, (*p->f304 - p->f316) / *p->f304);
        p->u336 = 0;
        p->i324 = 0;
        break;
    case 2:
        p->f316 = lbl_8035FD94;
        p->f328 = lbl_8035FD98;
        fn_802490E0(p, 0, *p->f300);
        break;
    case 3:
        fn_80084A54(p, 1, 1, p->f316 / *p->f300);
        if (*p->s308) fn_802490E0(p, 2, *p->f312);
        break;
    case 4:
        p->f316 = lbl_8035FD94;
        fn_802490E0(p, 1, *p->f304);
        break;
    case 5:
        return;
    case 6:
        if (p->i320 && *(s32 *)(*(u8 **)(*(u8 **)(lbl_8035B308 + 72) + 600) + 768) == 0) {
            p->u332 = p->u228;
            p->u336 = p->u236;
            fn_802494A4(p, 2);
        }
        break;
    case 7:
        fn_802494A4(p, 3);
        break;
    case 8:
        if (p->i320) fn_802494A4(p, 4);
        break;
    case 9:
        fn_802494A4(p, 1);
        break;
    case 10:
        p->i320 = 1;
        break;
    case 11:
        p->i320 = 0;
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
        if (p->u228 != p->u224) fn_80084A54(p, 1, 0, (*p->f304 - p->f316) / *p->f304);
        fn_802494A4(p, 1);
        break;
    case 16:
        break;
    }
}

} /* extern "C" */
