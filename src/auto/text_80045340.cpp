// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[180];
    s32 cur;
};
extern char lbl_8035CC44[4];
void fn_80241628(P *, int, int);
void *fn_80242144(P *, int);
void fn_80242BC0(void *, char *, int, int, int, int);

static inline void play(P *p, s32 k) {
    if (p->cur != k) fn_80242BC0(fn_80242144(p, k), lbl_8035CC44, 0, 0, 0, 0);
    p->cur = k;
}

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_80045340(P *p, s32 n);
void fn_8004556C();
void fn_80045648();
void fn_80045724();
void fn_80045744();
void fn_80045774();
void fn_80045794();
void fn_80045930();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029571C[];
extern char lbl_80295728[];
extern char lbl_80295734[];
extern char lbl_80295740[];
extern char lbl_8029574C[];
extern char lbl_80295758[];
extern char lbl_80295764[];
extern char lbl_80295770[];
extern char lbl_8029577C[];
extern char lbl_80295788[];
extern char lbl_80295794[];
extern char lbl_802957A0[];
extern char lbl_802957AC[];
extern char lbl_8035CC30[];
extern char lbl_8035CC38[];
extern char lbl_8035CC3C[];
void *lbl_802B3FA0[198] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035CC30, (void *)&lbl_8035CC30, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_8029571C, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_80295728, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_80295734, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_80295740, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_8029574C, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_80295758, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_8035CC38, (void *)&lbl_8035CC3C, (void *)&lbl_80295764, (void *)&lbl_80295770, (void *)&lbl_8029577C, (void *)&lbl_80295788, (void *)&lbl_80295794, (void *)&lbl_802957A0, (void *)&lbl_802957AC, (void *)&lbl_8035CC3C, (void *)0x0, (void *)0x1, (void *)&lbl_80295764, (void *)0x1, (void *)0x1, (void *)&lbl_80295770, (void *)0x2, (void *)0x1, (void *)&lbl_8029577C, (void *)0x3, (void *)0x1, (void *)&lbl_80295788, (void *)0x4, (void *)0x1, (void *)&lbl_80295794, (void *)0x5, (void *)0x1, (void *)&lbl_802957A0, (void *)0x6, (void *)0x1, (void *)&lbl_802957AC, (void *)0x7, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7 };
static s32 tA[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static s32 tB[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tC[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
void *lbl_802B4318[20] = { (void *)0x0, (void *)0x0, (void *)&fn_80045794, (void *)&fn_80249AC4, (void *)&fn_80045774, (void *)&fn_80242210, (void *)&fn_80045744, (void *)&fn_8023D198, (void *)&fn_80045930, (void *)&fn_80045340, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_80045724, (void *)&fn_8004556C, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_80045648 };
void fn_80045340(P *p, s32 n) {
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
        break;
    case 1:
        play(p, 1);
        break;
    case 2:
        play(p, 2);
        break;
    case 3:
        play(p, 3);
        break;
    case 4:
        play(p, 4);
        break;
    case 5:
        play(p, 5);
        break;
    case 6:
        play(p, 6);
        break;
    case 7:
        p->cur = 0;
        break;
    case 8:
        break;
    }
}

} /* extern "C" */
