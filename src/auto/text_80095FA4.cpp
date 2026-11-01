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
extern f32 lbl_803610A0;
void fn_80241628(P *, int, int);
void fn_802494A4(P *, int);
void fn_8009633C(P *, int, int, f32);
void fn_802490E0(P *, int, f32);
void fn_80249008(P *, int);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_80095FA4(P *p, s32 n);
void fn_80096274();
void fn_8009651C();
void fn_80096584();
void fn_80096710();
void fn_80096924();
void fn_80096A30();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_80299C5C[];
extern char lbl_80299C68[];
extern char lbl_80299C74[];
extern char lbl_80299C80[];
extern char lbl_80361058[];
extern char lbl_80361060[];
extern char lbl_80361068[];
extern char lbl_80361070[];
extern char lbl_80361078[];
extern char lbl_80361080[];
extern char lbl_80361088[];
extern char lbl_80361090[];
extern char lbl_80361098[];
void *lbl_802CBE48[192] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_80361058, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_80299C5C, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_80299C68, (void *)&lbl_80361060, (void *)&lbl_80361068, (void *)&lbl_80361070, (void *)&lbl_80361078, (void *)&lbl_80299C74, (void *)&lbl_80361080, (void *)&lbl_80299C80, (void *)&lbl_80361058, (void *)&lbl_80299C68, (void *)&lbl_80299C5C, (void *)&lbl_80361088, (void *)&lbl_80361090, (void *)&lbl_80361098, (void *)&lbl_80361080, (void *)0x0, (void *)0x1, (void *)&lbl_80299C80, (void *)0x1, (void *)0x1, (void *)&lbl_80361058, (void *)0x2, (void *)0x1, (void *)&lbl_80299C68, (void *)0x3, (void *)0x1, (void *)&lbl_80299C5C, (void *)0x4, (void *)0x1, (void *)&lbl_80361088, (void *)0x5, (void *)0x1, (void *)&lbl_80361090, (void *)0x6, (void *)0x1, (void *)&lbl_80361098, (void *)0x7, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7 };
static s32 tA[8] = { 0, 5, 8, 11, 14, 16, 18, 20 };
static s32 tB[24] = { 1, 1, 1, 1, 1, 1, 1, 3, 2, 1, 2, 3, 1, 1, 4, 1, 1, 4, 1, 4, 2, 1, 1, 1 };
static s32 tC[24] = { 0, 1, 2, 3, 4, 5, 6, 5, 5, 7, 5, 5, 8, 5, 5, 9, 5, 10, 5, 11, 5, 12, 13, 14 };
void *lbl_802CC228[10] = { (void *)0x0, (void *)0x0, (void *)&fn_80096924, (void *)&fn_80249AC4, (void *)&fn_80096710, (void *)&fn_8009651C, (void *)&fn_80096584, (void *)&fn_8023D198, (void *)&fn_80096A30, (void *)&fn_80095FA4 };
void *wAX_802CC250[10] = { (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_80096274, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8003FB6C };
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
