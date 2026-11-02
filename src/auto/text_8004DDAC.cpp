// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct P_DDAC { u8 pad[96]; int f96; u8 pad2[316 - 100]; f32 *f316; } P_DDAC;
static u8 pad_DDAC[928] = { 1 };
static int tA_DDAC[14] = { 1 };
static int tB_DDAC[32] = { 1 };
static int tC_DDAC[32] = { 1 };
extern f32 lbl_8035D6BC;
void fn_80241628(P_DDAC *, int, int);
void fn_8007E104(P_DDAC *);
void fn_8007DD70(P_DDAC *);
void fn_802490E0(P_DDAC *, int);
void fn_802494A4(P_DDAC *, int);
void fn_8007D9F8(P_DDAC *);
void fn_8007DC38(P_DDAC *);
void fn_8007C9DC(P_DDAC *);
void fn_8007CE4C(P_DDAC *);
void fn_8007D04C(P_DDAC *);
void fn_8007D9C0(P_DDAC *);
void fn_8007C9D0(P_DDAC *);
void fn_8007DD04(P_DDAC *);
void fn_8007DC98(P_DDAC *);
void fn_8007CA80(P_DDAC *);
void fn_80249008(P_DDAC *, int);
void fn_8004DDAC(P_DDAC *p, int st) {
    int *q;
    int i;
    int t;
    t = p->f96;
    i = tA_DDAC[st];
    for (q = tB_DDAC + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB_DDAC[i++];
    }
    switch (tC_DDAC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_8007E104(p);
        fn_8007DD70(p);
        break;
    case 1:
        return;
    case 2:
        fn_8007DD70(p);
        if (*p->f316 > lbl_8035D6BC) fn_802490E0(p, 0);
        break;
    case 3:
        fn_802494A4(p, 2);
        break;
    case 4:
        fn_802494A4(p, 1);
        break;
    case 5:
        fn_8007D9F8(p);
        break;
    case 6:
        fn_8007DC38(p);
        break;
    case 7:
        fn_8007C9DC(p);
        break;
    case 8:
        fn_8007CE4C(p);
        break;
    case 9:
        fn_8007D04C(p);
        break;
    case 10:
        fn_8007D9C0(p);
        break;
    case 11:
        fn_8007C9D0(p);
        break;
    case 12:
        fn_8007DD04(p);
        break;
    case 13:
        fn_8007DC98(p);
        break;
    case 14:
        fn_8007CA80(p);
        fn_802494A4(p, 3);
        break;
    case 15:
        fn_8007CA80(p);
        break;
    case 16:
        fn_80249008(p, 0);
        fn_80249008(p, 1);
        break;
    case 17:
        break;
    }
}

} /* extern "C" */
