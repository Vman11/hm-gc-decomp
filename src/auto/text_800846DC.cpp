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
extern f32 lbl_8035FD94, lbl_8035FD98;
extern u8 *lbl_8035B308;
void fn_80241628(P *, int, int);
void fn_802494A4(P *, int);
void fn_80084A54(P *, int, int, f32);
void fn_802490E0(P *, int, f32);
void fn_80249008(P *, int);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_800846DC(P *p, s32 n);
void fn_8008498C();
void fn_80084990();
void fn_80084994();
void fn_80084D54();
void fn_80084EA8();
void fn_80085004();
void fn_80085110();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80298CD4[];
extern char lbl_80298CE0[];
extern char lbl_80298CEC[];
extern char lbl_80298CF8[];
extern char lbl_80298D04[];
extern char lbl_80298D10[];
extern char lbl_8035FD38[];
extern char lbl_8035FD40[];
extern char lbl_8035FD44[];
extern char lbl_8035FD4C[];
extern char lbl_8035FD54[];
extern char lbl_8035FD5C[];
extern char lbl_8035FD64[];
extern char lbl_8035FD6C[];
extern char lbl_8035FD74[];
extern char lbl_8035FD7C[];
extern char lbl_8035FD84[];
extern char lbl_8035FD8C[];
void *lbl_802C5100[209] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035FD38, (void *)&lbl_8035FD40, (void *)&lbl_8035FD40, (void *)&lbl_80298CD4, (void *)&lbl_8035FD40, (void *)&lbl_8035FD40, (void *)&lbl_8035FD40, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_8035FD44, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_80298CE0, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_80298CEC, (void *)&lbl_8035FD4C, (void *)&lbl_8035FD54, (void *)&lbl_8035FD5C, (void *)&lbl_8035FD64, (void *)&lbl_80298CF8, (void *)&lbl_8035FD6C, (void *)&lbl_80298D04, (void *)&lbl_8035FD44, (void *)&lbl_80298CEC, (void *)&lbl_80298CE0, (void *)&lbl_8035FD74, (void *)&lbl_8035FD7C, (void *)&lbl_8035FD84, (void *)&lbl_8035FD8C, (void *)&lbl_80298D10, (void *)&lbl_8035FD6C, (void *)0x0, (void *)0x1, (void *)&lbl_80298D04, (void *)0x1, (void *)0x1, (void *)&lbl_8035FD44, (void *)0x2, (void *)0x1, (void *)&lbl_80298CEC, (void *)0x3, (void *)0x1, (void *)&lbl_80298CE0, (void *)0x4, (void *)0x1, (void *)&lbl_8035FD74, (void *)0x5, (void *)0x1, (void *)&lbl_8035FD7C, (void *)0x6, (void *)0x1, (void *)&lbl_8035FD84, (void *)0x7, (void *)0x1, (void *)&lbl_8035FD8C, (void *)0x8, (void *)0x1, (void *)&lbl_80298D10, (void *)0x9, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9 };
static s32 tA[10] = { 0, 5, 8, 11, 14, 16, 18, 20, 24, 26 };
static s32 tB[28] = { 1, 1, 1, 1, 1, 1, 1, 3, 2, 1, 2, 3, 1, 1, 4, 1, 1, 4, 1, 4, 2, 1, 1, 1, 2, 3, 2, 3 };
static s32 tC[28] = { 0, 1, 2, 3, 4, 5, 6, 5, 5, 7, 5, 5, 8, 5, 5, 9, 5, 10, 5, 11, 5, 12, 13, 14, 5, 15, 5, 15 };
void *lbl_802C554C[6] = { (void *)0x0, (void *)0x0, (void *)&fn_80085004, (void *)&fn_80249AC4, (void *)&fn_80084EA8, (void *)&fn_80242210 };
void *wAX_802C5564[14] = { (void *)&fn_80084D54, (void *)&fn_8023D198, (void *)&fn_80085110, (void *)&fn_800846DC, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_80084994, (void *)&fn_8008498C, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_80084990 };
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
